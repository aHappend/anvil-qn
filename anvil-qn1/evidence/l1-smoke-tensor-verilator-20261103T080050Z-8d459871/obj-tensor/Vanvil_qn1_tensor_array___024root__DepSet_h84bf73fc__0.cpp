// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_INLINE_OPT void Vanvil_qn1_tensor_array___024root___ico_sequent__TOP__0(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_delta32__0__Vfuncout;
    __Vfunc_delta32__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__0__quantized;
    __Vfunc_delta32__0__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__0__zero_point;
    __Vfunc_delta32__0__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__0__delta;
    __Vfunc_delta32__0__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__0__magnitude;
    __Vfunc_delta32__0__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__0__encoded;
    __Vfunc_delta32__0__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__1__Vfuncout;
    __Vfunc_bf16_invalid__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__1__value;
    __Vfunc_bf16_invalid__1__value = 0;
    IData/*31:0*/ __Vfunc_delta32__5__Vfuncout;
    __Vfunc_delta32__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__5__quantized;
    __Vfunc_delta32__5__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__5__zero_point;
    __Vfunc_delta32__5__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__5__delta;
    __Vfunc_delta32__5__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__5__magnitude;
    __Vfunc_delta32__5__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__5__encoded;
    __Vfunc_delta32__5__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__6__Vfuncout;
    __Vfunc_bf16_invalid__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__6__value;
    __Vfunc_bf16_invalid__6__value = 0;
    IData/*31:0*/ __Vfunc_delta32__10__Vfuncout;
    __Vfunc_delta32__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__10__quantized;
    __Vfunc_delta32__10__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__10__zero_point;
    __Vfunc_delta32__10__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__10__delta;
    __Vfunc_delta32__10__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__10__magnitude;
    __Vfunc_delta32__10__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__10__encoded;
    __Vfunc_delta32__10__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__11__Vfuncout;
    __Vfunc_bf16_invalid__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__11__value;
    __Vfunc_bf16_invalid__11__value = 0;
    IData/*31:0*/ __Vfunc_delta32__15__Vfuncout;
    __Vfunc_delta32__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__15__quantized;
    __Vfunc_delta32__15__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__15__zero_point;
    __Vfunc_delta32__15__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__15__delta;
    __Vfunc_delta32__15__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__15__magnitude;
    __Vfunc_delta32__15__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__15__encoded;
    __Vfunc_delta32__15__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__16__Vfuncout;
    __Vfunc_bf16_invalid__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__16__value;
    __Vfunc_bf16_invalid__16__value = 0;
    IData/*31:0*/ __Vfunc_delta32__20__Vfuncout;
    __Vfunc_delta32__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__20__quantized;
    __Vfunc_delta32__20__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__20__zero_point;
    __Vfunc_delta32__20__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__20__delta;
    __Vfunc_delta32__20__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__20__magnitude;
    __Vfunc_delta32__20__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__20__encoded;
    __Vfunc_delta32__20__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__21__Vfuncout;
    __Vfunc_bf16_invalid__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__21__value;
    __Vfunc_bf16_invalid__21__value = 0;
    IData/*31:0*/ __Vfunc_delta32__25__Vfuncout;
    __Vfunc_delta32__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__25__quantized;
    __Vfunc_delta32__25__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__25__zero_point;
    __Vfunc_delta32__25__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__25__delta;
    __Vfunc_delta32__25__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__25__magnitude;
    __Vfunc_delta32__25__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__25__encoded;
    __Vfunc_delta32__25__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__26__Vfuncout;
    __Vfunc_bf16_invalid__26__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__26__value;
    __Vfunc_bf16_invalid__26__value = 0;
    IData/*31:0*/ __Vfunc_delta32__30__Vfuncout;
    __Vfunc_delta32__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__30__quantized;
    __Vfunc_delta32__30__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__30__zero_point;
    __Vfunc_delta32__30__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__30__delta;
    __Vfunc_delta32__30__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__30__magnitude;
    __Vfunc_delta32__30__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__30__encoded;
    __Vfunc_delta32__30__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__31__Vfuncout;
    __Vfunc_bf16_invalid__31__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__31__value;
    __Vfunc_bf16_invalid__31__value = 0;
    IData/*31:0*/ __Vfunc_delta32__35__Vfuncout;
    __Vfunc_delta32__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__35__quantized;
    __Vfunc_delta32__35__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__35__zero_point;
    __Vfunc_delta32__35__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__35__delta;
    __Vfunc_delta32__35__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__35__magnitude;
    __Vfunc_delta32__35__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__35__encoded;
    __Vfunc_delta32__35__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__36__Vfuncout;
    __Vfunc_bf16_invalid__36__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__36__value;
    __Vfunc_bf16_invalid__36__value = 0;
    IData/*31:0*/ __Vfunc_delta32__40__Vfuncout;
    __Vfunc_delta32__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__40__quantized;
    __Vfunc_delta32__40__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__40__zero_point;
    __Vfunc_delta32__40__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__40__delta;
    __Vfunc_delta32__40__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__40__magnitude;
    __Vfunc_delta32__40__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__40__encoded;
    __Vfunc_delta32__40__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__41__Vfuncout;
    __Vfunc_bf16_invalid__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__41__value;
    __Vfunc_bf16_invalid__41__value = 0;
    IData/*31:0*/ __Vfunc_delta32__45__Vfuncout;
    __Vfunc_delta32__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__45__quantized;
    __Vfunc_delta32__45__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__45__zero_point;
    __Vfunc_delta32__45__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__45__delta;
    __Vfunc_delta32__45__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__45__magnitude;
    __Vfunc_delta32__45__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__45__encoded;
    __Vfunc_delta32__45__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__46__Vfuncout;
    __Vfunc_bf16_invalid__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__46__value;
    __Vfunc_bf16_invalid__46__value = 0;
    IData/*31:0*/ __Vfunc_delta32__50__Vfuncout;
    __Vfunc_delta32__50__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__50__quantized;
    __Vfunc_delta32__50__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__50__zero_point;
    __Vfunc_delta32__50__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__50__delta;
    __Vfunc_delta32__50__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__50__magnitude;
    __Vfunc_delta32__50__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__50__encoded;
    __Vfunc_delta32__50__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__51__Vfuncout;
    __Vfunc_bf16_invalid__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__51__value;
    __Vfunc_bf16_invalid__51__value = 0;
    IData/*31:0*/ __Vfunc_delta32__55__Vfuncout;
    __Vfunc_delta32__55__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__55__quantized;
    __Vfunc_delta32__55__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__55__zero_point;
    __Vfunc_delta32__55__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__55__delta;
    __Vfunc_delta32__55__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__55__magnitude;
    __Vfunc_delta32__55__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__55__encoded;
    __Vfunc_delta32__55__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__56__Vfuncout;
    __Vfunc_bf16_invalid__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__56__value;
    __Vfunc_bf16_invalid__56__value = 0;
    IData/*31:0*/ __Vfunc_delta32__60__Vfuncout;
    __Vfunc_delta32__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__60__quantized;
    __Vfunc_delta32__60__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__60__zero_point;
    __Vfunc_delta32__60__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__60__delta;
    __Vfunc_delta32__60__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__60__magnitude;
    __Vfunc_delta32__60__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__60__encoded;
    __Vfunc_delta32__60__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__61__Vfuncout;
    __Vfunc_bf16_invalid__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__61__value;
    __Vfunc_bf16_invalid__61__value = 0;
    IData/*31:0*/ __Vfunc_delta32__65__Vfuncout;
    __Vfunc_delta32__65__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__65__quantized;
    __Vfunc_delta32__65__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__65__zero_point;
    __Vfunc_delta32__65__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__65__delta;
    __Vfunc_delta32__65__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__65__magnitude;
    __Vfunc_delta32__65__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__65__encoded;
    __Vfunc_delta32__65__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__66__Vfuncout;
    __Vfunc_bf16_invalid__66__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__66__value;
    __Vfunc_bf16_invalid__66__value = 0;
    IData/*31:0*/ __Vfunc_delta32__70__Vfuncout;
    __Vfunc_delta32__70__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__70__quantized;
    __Vfunc_delta32__70__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__70__zero_point;
    __Vfunc_delta32__70__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__70__delta;
    __Vfunc_delta32__70__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__70__magnitude;
    __Vfunc_delta32__70__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__70__encoded;
    __Vfunc_delta32__70__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__71__Vfuncout;
    __Vfunc_bf16_invalid__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__71__value;
    __Vfunc_bf16_invalid__71__value = 0;
    IData/*31:0*/ __Vfunc_delta32__75__Vfuncout;
    __Vfunc_delta32__75__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__75__quantized;
    __Vfunc_delta32__75__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__75__zero_point;
    __Vfunc_delta32__75__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__75__delta;
    __Vfunc_delta32__75__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__75__magnitude;
    __Vfunc_delta32__75__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__75__encoded;
    __Vfunc_delta32__75__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__76__Vfuncout;
    __Vfunc_bf16_invalid__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__76__value;
    __Vfunc_bf16_invalid__76__value = 0;
    IData/*31:0*/ __Vfunc_delta32__80__Vfuncout;
    __Vfunc_delta32__80__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__80__quantized;
    __Vfunc_delta32__80__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__80__zero_point;
    __Vfunc_delta32__80__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__80__delta;
    __Vfunc_delta32__80__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__80__magnitude;
    __Vfunc_delta32__80__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__80__encoded;
    __Vfunc_delta32__80__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__81__Vfuncout;
    __Vfunc_bf16_invalid__81__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__81__value;
    __Vfunc_bf16_invalid__81__value = 0;
    IData/*31:0*/ __Vfunc_delta32__85__Vfuncout;
    __Vfunc_delta32__85__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__85__quantized;
    __Vfunc_delta32__85__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__85__zero_point;
    __Vfunc_delta32__85__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__85__delta;
    __Vfunc_delta32__85__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__85__magnitude;
    __Vfunc_delta32__85__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__85__encoded;
    __Vfunc_delta32__85__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__86__Vfuncout;
    __Vfunc_bf16_invalid__86__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__86__value;
    __Vfunc_bf16_invalid__86__value = 0;
    IData/*31:0*/ __Vfunc_delta32__90__Vfuncout;
    __Vfunc_delta32__90__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__90__quantized;
    __Vfunc_delta32__90__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__90__zero_point;
    __Vfunc_delta32__90__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__90__delta;
    __Vfunc_delta32__90__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__90__magnitude;
    __Vfunc_delta32__90__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__90__encoded;
    __Vfunc_delta32__90__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__91__Vfuncout;
    __Vfunc_bf16_invalid__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__91__value;
    __Vfunc_bf16_invalid__91__value = 0;
    IData/*31:0*/ __Vfunc_delta32__95__Vfuncout;
    __Vfunc_delta32__95__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__95__quantized;
    __Vfunc_delta32__95__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__95__zero_point;
    __Vfunc_delta32__95__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__95__delta;
    __Vfunc_delta32__95__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__95__magnitude;
    __Vfunc_delta32__95__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__95__encoded;
    __Vfunc_delta32__95__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__96__Vfuncout;
    __Vfunc_bf16_invalid__96__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__96__value;
    __Vfunc_bf16_invalid__96__value = 0;
    IData/*31:0*/ __Vfunc_delta32__100__Vfuncout;
    __Vfunc_delta32__100__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__100__quantized;
    __Vfunc_delta32__100__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__100__zero_point;
    __Vfunc_delta32__100__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__100__delta;
    __Vfunc_delta32__100__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__100__magnitude;
    __Vfunc_delta32__100__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__100__encoded;
    __Vfunc_delta32__100__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__101__Vfuncout;
    __Vfunc_bf16_invalid__101__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__101__value;
    __Vfunc_bf16_invalid__101__value = 0;
    IData/*31:0*/ __Vfunc_delta32__105__Vfuncout;
    __Vfunc_delta32__105__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__105__quantized;
    __Vfunc_delta32__105__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__105__zero_point;
    __Vfunc_delta32__105__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__105__delta;
    __Vfunc_delta32__105__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__105__magnitude;
    __Vfunc_delta32__105__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__105__encoded;
    __Vfunc_delta32__105__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__106__Vfuncout;
    __Vfunc_bf16_invalid__106__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__106__value;
    __Vfunc_bf16_invalid__106__value = 0;
    IData/*31:0*/ __Vfunc_delta32__110__Vfuncout;
    __Vfunc_delta32__110__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__110__quantized;
    __Vfunc_delta32__110__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__110__zero_point;
    __Vfunc_delta32__110__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__110__delta;
    __Vfunc_delta32__110__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__110__magnitude;
    __Vfunc_delta32__110__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__110__encoded;
    __Vfunc_delta32__110__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__111__Vfuncout;
    __Vfunc_bf16_invalid__111__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__111__value;
    __Vfunc_bf16_invalid__111__value = 0;
    IData/*31:0*/ __Vfunc_delta32__115__Vfuncout;
    __Vfunc_delta32__115__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__115__quantized;
    __Vfunc_delta32__115__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__115__zero_point;
    __Vfunc_delta32__115__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__115__delta;
    __Vfunc_delta32__115__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__115__magnitude;
    __Vfunc_delta32__115__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__115__encoded;
    __Vfunc_delta32__115__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__116__Vfuncout;
    __Vfunc_bf16_invalid__116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__116__value;
    __Vfunc_bf16_invalid__116__value = 0;
    IData/*31:0*/ __Vfunc_delta32__120__Vfuncout;
    __Vfunc_delta32__120__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__120__quantized;
    __Vfunc_delta32__120__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__120__zero_point;
    __Vfunc_delta32__120__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__120__delta;
    __Vfunc_delta32__120__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__120__magnitude;
    __Vfunc_delta32__120__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__120__encoded;
    __Vfunc_delta32__120__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__121__Vfuncout;
    __Vfunc_bf16_invalid__121__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__121__value;
    __Vfunc_bf16_invalid__121__value = 0;
    IData/*31:0*/ __Vfunc_delta32__125__Vfuncout;
    __Vfunc_delta32__125__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__125__quantized;
    __Vfunc_delta32__125__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__125__zero_point;
    __Vfunc_delta32__125__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__125__delta;
    __Vfunc_delta32__125__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__125__magnitude;
    __Vfunc_delta32__125__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__125__encoded;
    __Vfunc_delta32__125__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__126__Vfuncout;
    __Vfunc_bf16_invalid__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__126__value;
    __Vfunc_bf16_invalid__126__value = 0;
    IData/*31:0*/ __Vfunc_delta32__130__Vfuncout;
    __Vfunc_delta32__130__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__130__quantized;
    __Vfunc_delta32__130__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__130__zero_point;
    __Vfunc_delta32__130__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__130__delta;
    __Vfunc_delta32__130__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__130__magnitude;
    __Vfunc_delta32__130__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__130__encoded;
    __Vfunc_delta32__130__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__131__Vfuncout;
    __Vfunc_bf16_invalid__131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__131__value;
    __Vfunc_bf16_invalid__131__value = 0;
    IData/*31:0*/ __Vfunc_delta32__135__Vfuncout;
    __Vfunc_delta32__135__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__135__quantized;
    __Vfunc_delta32__135__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__135__zero_point;
    __Vfunc_delta32__135__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__135__delta;
    __Vfunc_delta32__135__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__135__magnitude;
    __Vfunc_delta32__135__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__135__encoded;
    __Vfunc_delta32__135__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__136__Vfuncout;
    __Vfunc_bf16_invalid__136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__136__value;
    __Vfunc_bf16_invalid__136__value = 0;
    IData/*31:0*/ __Vfunc_delta32__140__Vfuncout;
    __Vfunc_delta32__140__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__140__quantized;
    __Vfunc_delta32__140__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__140__zero_point;
    __Vfunc_delta32__140__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__140__delta;
    __Vfunc_delta32__140__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__140__magnitude;
    __Vfunc_delta32__140__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__140__encoded;
    __Vfunc_delta32__140__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__141__Vfuncout;
    __Vfunc_bf16_invalid__141__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__141__value;
    __Vfunc_bf16_invalid__141__value = 0;
    IData/*31:0*/ __Vfunc_delta32__145__Vfuncout;
    __Vfunc_delta32__145__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__145__quantized;
    __Vfunc_delta32__145__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__145__zero_point;
    __Vfunc_delta32__145__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__145__delta;
    __Vfunc_delta32__145__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__145__magnitude;
    __Vfunc_delta32__145__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__145__encoded;
    __Vfunc_delta32__145__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__146__Vfuncout;
    __Vfunc_bf16_invalid__146__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__146__value;
    __Vfunc_bf16_invalid__146__value = 0;
    IData/*31:0*/ __Vfunc_delta32__150__Vfuncout;
    __Vfunc_delta32__150__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__150__quantized;
    __Vfunc_delta32__150__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__150__zero_point;
    __Vfunc_delta32__150__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__150__delta;
    __Vfunc_delta32__150__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__150__magnitude;
    __Vfunc_delta32__150__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__150__encoded;
    __Vfunc_delta32__150__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__151__Vfuncout;
    __Vfunc_bf16_invalid__151__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__151__value;
    __Vfunc_bf16_invalid__151__value = 0;
    IData/*31:0*/ __Vfunc_delta32__155__Vfuncout;
    __Vfunc_delta32__155__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__155__quantized;
    __Vfunc_delta32__155__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__155__zero_point;
    __Vfunc_delta32__155__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__155__delta;
    __Vfunc_delta32__155__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__155__magnitude;
    __Vfunc_delta32__155__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__155__encoded;
    __Vfunc_delta32__155__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__156__Vfuncout;
    __Vfunc_bf16_invalid__156__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__156__value;
    __Vfunc_bf16_invalid__156__value = 0;
    IData/*31:0*/ __Vfunc_delta32__160__Vfuncout;
    __Vfunc_delta32__160__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__160__quantized;
    __Vfunc_delta32__160__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__160__zero_point;
    __Vfunc_delta32__160__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__160__delta;
    __Vfunc_delta32__160__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__160__magnitude;
    __Vfunc_delta32__160__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__160__encoded;
    __Vfunc_delta32__160__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__161__Vfuncout;
    __Vfunc_bf16_invalid__161__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__161__value;
    __Vfunc_bf16_invalid__161__value = 0;
    IData/*31:0*/ __Vfunc_delta32__165__Vfuncout;
    __Vfunc_delta32__165__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__165__quantized;
    __Vfunc_delta32__165__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__165__zero_point;
    __Vfunc_delta32__165__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__165__delta;
    __Vfunc_delta32__165__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__165__magnitude;
    __Vfunc_delta32__165__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__165__encoded;
    __Vfunc_delta32__165__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__166__Vfuncout;
    __Vfunc_bf16_invalid__166__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__166__value;
    __Vfunc_bf16_invalid__166__value = 0;
    IData/*31:0*/ __Vfunc_delta32__170__Vfuncout;
    __Vfunc_delta32__170__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__170__quantized;
    __Vfunc_delta32__170__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__170__zero_point;
    __Vfunc_delta32__170__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__170__delta;
    __Vfunc_delta32__170__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__170__magnitude;
    __Vfunc_delta32__170__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__170__encoded;
    __Vfunc_delta32__170__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__171__Vfuncout;
    __Vfunc_bf16_invalid__171__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__171__value;
    __Vfunc_bf16_invalid__171__value = 0;
    IData/*31:0*/ __Vfunc_delta32__175__Vfuncout;
    __Vfunc_delta32__175__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__175__quantized;
    __Vfunc_delta32__175__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__175__zero_point;
    __Vfunc_delta32__175__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__175__delta;
    __Vfunc_delta32__175__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__175__magnitude;
    __Vfunc_delta32__175__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__175__encoded;
    __Vfunc_delta32__175__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__176__Vfuncout;
    __Vfunc_bf16_invalid__176__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__176__value;
    __Vfunc_bf16_invalid__176__value = 0;
    IData/*31:0*/ __Vfunc_delta32__180__Vfuncout;
    __Vfunc_delta32__180__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__180__quantized;
    __Vfunc_delta32__180__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__180__zero_point;
    __Vfunc_delta32__180__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__180__delta;
    __Vfunc_delta32__180__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__180__magnitude;
    __Vfunc_delta32__180__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__180__encoded;
    __Vfunc_delta32__180__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__181__Vfuncout;
    __Vfunc_bf16_invalid__181__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__181__value;
    __Vfunc_bf16_invalid__181__value = 0;
    IData/*31:0*/ __Vfunc_delta32__185__Vfuncout;
    __Vfunc_delta32__185__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__185__quantized;
    __Vfunc_delta32__185__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__185__zero_point;
    __Vfunc_delta32__185__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__185__delta;
    __Vfunc_delta32__185__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__185__magnitude;
    __Vfunc_delta32__185__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__185__encoded;
    __Vfunc_delta32__185__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__186__Vfuncout;
    __Vfunc_bf16_invalid__186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__186__value;
    __Vfunc_bf16_invalid__186__value = 0;
    IData/*31:0*/ __Vfunc_delta32__190__Vfuncout;
    __Vfunc_delta32__190__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__190__quantized;
    __Vfunc_delta32__190__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__190__zero_point;
    __Vfunc_delta32__190__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__190__delta;
    __Vfunc_delta32__190__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__190__magnitude;
    __Vfunc_delta32__190__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__190__encoded;
    __Vfunc_delta32__190__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__191__Vfuncout;
    __Vfunc_bf16_invalid__191__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__191__value;
    __Vfunc_bf16_invalid__191__value = 0;
    IData/*31:0*/ __Vfunc_delta32__195__Vfuncout;
    __Vfunc_delta32__195__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__195__quantized;
    __Vfunc_delta32__195__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__195__zero_point;
    __Vfunc_delta32__195__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__195__delta;
    __Vfunc_delta32__195__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__195__magnitude;
    __Vfunc_delta32__195__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__195__encoded;
    __Vfunc_delta32__195__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__196__Vfuncout;
    __Vfunc_bf16_invalid__196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__196__value;
    __Vfunc_bf16_invalid__196__value = 0;
    IData/*31:0*/ __Vfunc_delta32__200__Vfuncout;
    __Vfunc_delta32__200__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__200__quantized;
    __Vfunc_delta32__200__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__200__zero_point;
    __Vfunc_delta32__200__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__200__delta;
    __Vfunc_delta32__200__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__200__magnitude;
    __Vfunc_delta32__200__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__200__encoded;
    __Vfunc_delta32__200__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__201__Vfuncout;
    __Vfunc_bf16_invalid__201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__201__value;
    __Vfunc_bf16_invalid__201__value = 0;
    IData/*31:0*/ __Vfunc_delta32__205__Vfuncout;
    __Vfunc_delta32__205__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__205__quantized;
    __Vfunc_delta32__205__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__205__zero_point;
    __Vfunc_delta32__205__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__205__delta;
    __Vfunc_delta32__205__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__205__magnitude;
    __Vfunc_delta32__205__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__205__encoded;
    __Vfunc_delta32__205__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__206__Vfuncout;
    __Vfunc_bf16_invalid__206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__206__value;
    __Vfunc_bf16_invalid__206__value = 0;
    IData/*31:0*/ __Vfunc_delta32__210__Vfuncout;
    __Vfunc_delta32__210__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__210__quantized;
    __Vfunc_delta32__210__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__210__zero_point;
    __Vfunc_delta32__210__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__210__delta;
    __Vfunc_delta32__210__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__210__magnitude;
    __Vfunc_delta32__210__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__210__encoded;
    __Vfunc_delta32__210__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__211__Vfuncout;
    __Vfunc_bf16_invalid__211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__211__value;
    __Vfunc_bf16_invalid__211__value = 0;
    IData/*31:0*/ __Vfunc_delta32__215__Vfuncout;
    __Vfunc_delta32__215__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__215__quantized;
    __Vfunc_delta32__215__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__215__zero_point;
    __Vfunc_delta32__215__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__215__delta;
    __Vfunc_delta32__215__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__215__magnitude;
    __Vfunc_delta32__215__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__215__encoded;
    __Vfunc_delta32__215__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__216__Vfuncout;
    __Vfunc_bf16_invalid__216__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__216__value;
    __Vfunc_bf16_invalid__216__value = 0;
    IData/*31:0*/ __Vfunc_delta32__220__Vfuncout;
    __Vfunc_delta32__220__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__220__quantized;
    __Vfunc_delta32__220__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__220__zero_point;
    __Vfunc_delta32__220__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__220__delta;
    __Vfunc_delta32__220__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__220__magnitude;
    __Vfunc_delta32__220__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__220__encoded;
    __Vfunc_delta32__220__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__221__Vfuncout;
    __Vfunc_bf16_invalid__221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__221__value;
    __Vfunc_bf16_invalid__221__value = 0;
    IData/*31:0*/ __Vfunc_delta32__225__Vfuncout;
    __Vfunc_delta32__225__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__225__quantized;
    __Vfunc_delta32__225__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__225__zero_point;
    __Vfunc_delta32__225__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__225__delta;
    __Vfunc_delta32__225__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__225__magnitude;
    __Vfunc_delta32__225__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__225__encoded;
    __Vfunc_delta32__225__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__226__Vfuncout;
    __Vfunc_bf16_invalid__226__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__226__value;
    __Vfunc_bf16_invalid__226__value = 0;
    IData/*31:0*/ __Vfunc_delta32__230__Vfuncout;
    __Vfunc_delta32__230__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__230__quantized;
    __Vfunc_delta32__230__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__230__zero_point;
    __Vfunc_delta32__230__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__230__delta;
    __Vfunc_delta32__230__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__230__magnitude;
    __Vfunc_delta32__230__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__230__encoded;
    __Vfunc_delta32__230__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__231__Vfuncout;
    __Vfunc_bf16_invalid__231__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__231__value;
    __Vfunc_bf16_invalid__231__value = 0;
    IData/*31:0*/ __Vfunc_delta32__235__Vfuncout;
    __Vfunc_delta32__235__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__235__quantized;
    __Vfunc_delta32__235__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__235__zero_point;
    __Vfunc_delta32__235__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__235__delta;
    __Vfunc_delta32__235__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__235__magnitude;
    __Vfunc_delta32__235__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__235__encoded;
    __Vfunc_delta32__235__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__236__Vfuncout;
    __Vfunc_bf16_invalid__236__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__236__value;
    __Vfunc_bf16_invalid__236__value = 0;
    IData/*31:0*/ __Vfunc_delta32__240__Vfuncout;
    __Vfunc_delta32__240__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__240__quantized;
    __Vfunc_delta32__240__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__240__zero_point;
    __Vfunc_delta32__240__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__240__delta;
    __Vfunc_delta32__240__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__240__magnitude;
    __Vfunc_delta32__240__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__240__encoded;
    __Vfunc_delta32__240__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__241__Vfuncout;
    __Vfunc_bf16_invalid__241__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__241__value;
    __Vfunc_bf16_invalid__241__value = 0;
    IData/*31:0*/ __Vfunc_delta32__245__Vfuncout;
    __Vfunc_delta32__245__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__245__quantized;
    __Vfunc_delta32__245__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__245__zero_point;
    __Vfunc_delta32__245__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__245__delta;
    __Vfunc_delta32__245__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__245__magnitude;
    __Vfunc_delta32__245__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__245__encoded;
    __Vfunc_delta32__245__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__246__Vfuncout;
    __Vfunc_bf16_invalid__246__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__246__value;
    __Vfunc_bf16_invalid__246__value = 0;
    IData/*31:0*/ __Vfunc_delta32__250__Vfuncout;
    __Vfunc_delta32__250__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__250__quantized;
    __Vfunc_delta32__250__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__250__zero_point;
    __Vfunc_delta32__250__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__250__delta;
    __Vfunc_delta32__250__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__250__magnitude;
    __Vfunc_delta32__250__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__250__encoded;
    __Vfunc_delta32__250__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__251__Vfuncout;
    __Vfunc_bf16_invalid__251__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__251__value;
    __Vfunc_bf16_invalid__251__value = 0;
    IData/*31:0*/ __Vfunc_delta32__255__Vfuncout;
    __Vfunc_delta32__255__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__255__quantized;
    __Vfunc_delta32__255__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__255__zero_point;
    __Vfunc_delta32__255__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__255__delta;
    __Vfunc_delta32__255__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__255__magnitude;
    __Vfunc_delta32__255__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__255__encoded;
    __Vfunc_delta32__255__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__256__Vfuncout;
    __Vfunc_bf16_invalid__256__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__256__value;
    __Vfunc_bf16_invalid__256__value = 0;
    IData/*31:0*/ __Vfunc_delta32__260__Vfuncout;
    __Vfunc_delta32__260__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__260__quantized;
    __Vfunc_delta32__260__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__260__zero_point;
    __Vfunc_delta32__260__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__260__delta;
    __Vfunc_delta32__260__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__260__magnitude;
    __Vfunc_delta32__260__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__260__encoded;
    __Vfunc_delta32__260__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__261__Vfuncout;
    __Vfunc_bf16_invalid__261__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__261__value;
    __Vfunc_bf16_invalid__261__value = 0;
    IData/*31:0*/ __Vfunc_delta32__265__Vfuncout;
    __Vfunc_delta32__265__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__265__quantized;
    __Vfunc_delta32__265__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__265__zero_point;
    __Vfunc_delta32__265__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__265__delta;
    __Vfunc_delta32__265__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__265__magnitude;
    __Vfunc_delta32__265__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__265__encoded;
    __Vfunc_delta32__265__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__266__Vfuncout;
    __Vfunc_bf16_invalid__266__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__266__value;
    __Vfunc_bf16_invalid__266__value = 0;
    IData/*31:0*/ __Vfunc_delta32__270__Vfuncout;
    __Vfunc_delta32__270__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__270__quantized;
    __Vfunc_delta32__270__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__270__zero_point;
    __Vfunc_delta32__270__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__270__delta;
    __Vfunc_delta32__270__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__270__magnitude;
    __Vfunc_delta32__270__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__270__encoded;
    __Vfunc_delta32__270__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__271__Vfuncout;
    __Vfunc_bf16_invalid__271__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__271__value;
    __Vfunc_bf16_invalid__271__value = 0;
    IData/*31:0*/ __Vfunc_delta32__275__Vfuncout;
    __Vfunc_delta32__275__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__275__quantized;
    __Vfunc_delta32__275__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__275__zero_point;
    __Vfunc_delta32__275__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__275__delta;
    __Vfunc_delta32__275__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__275__magnitude;
    __Vfunc_delta32__275__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__275__encoded;
    __Vfunc_delta32__275__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__276__Vfuncout;
    __Vfunc_bf16_invalid__276__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__276__value;
    __Vfunc_bf16_invalid__276__value = 0;
    IData/*31:0*/ __Vfunc_delta32__280__Vfuncout;
    __Vfunc_delta32__280__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__280__quantized;
    __Vfunc_delta32__280__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__280__zero_point;
    __Vfunc_delta32__280__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__280__delta;
    __Vfunc_delta32__280__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__280__magnitude;
    __Vfunc_delta32__280__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__280__encoded;
    __Vfunc_delta32__280__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__281__Vfuncout;
    __Vfunc_bf16_invalid__281__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__281__value;
    __Vfunc_bf16_invalid__281__value = 0;
    IData/*31:0*/ __Vfunc_delta32__285__Vfuncout;
    __Vfunc_delta32__285__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__285__quantized;
    __Vfunc_delta32__285__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__285__zero_point;
    __Vfunc_delta32__285__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__285__delta;
    __Vfunc_delta32__285__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__285__magnitude;
    __Vfunc_delta32__285__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__285__encoded;
    __Vfunc_delta32__285__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__286__Vfuncout;
    __Vfunc_bf16_invalid__286__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__286__value;
    __Vfunc_bf16_invalid__286__value = 0;
    IData/*31:0*/ __Vfunc_delta32__290__Vfuncout;
    __Vfunc_delta32__290__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__290__quantized;
    __Vfunc_delta32__290__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__290__zero_point;
    __Vfunc_delta32__290__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__290__delta;
    __Vfunc_delta32__290__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__290__magnitude;
    __Vfunc_delta32__290__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__290__encoded;
    __Vfunc_delta32__290__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__291__Vfuncout;
    __Vfunc_bf16_invalid__291__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__291__value;
    __Vfunc_bf16_invalid__291__value = 0;
    IData/*31:0*/ __Vfunc_delta32__295__Vfuncout;
    __Vfunc_delta32__295__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__295__quantized;
    __Vfunc_delta32__295__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__295__zero_point;
    __Vfunc_delta32__295__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__295__delta;
    __Vfunc_delta32__295__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__295__magnitude;
    __Vfunc_delta32__295__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__295__encoded;
    __Vfunc_delta32__295__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__296__Vfuncout;
    __Vfunc_bf16_invalid__296__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__296__value;
    __Vfunc_bf16_invalid__296__value = 0;
    IData/*31:0*/ __Vfunc_delta32__300__Vfuncout;
    __Vfunc_delta32__300__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__300__quantized;
    __Vfunc_delta32__300__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__300__zero_point;
    __Vfunc_delta32__300__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__300__delta;
    __Vfunc_delta32__300__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__300__magnitude;
    __Vfunc_delta32__300__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__300__encoded;
    __Vfunc_delta32__300__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__301__Vfuncout;
    __Vfunc_bf16_invalid__301__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__301__value;
    __Vfunc_bf16_invalid__301__value = 0;
    IData/*31:0*/ __Vfunc_delta32__305__Vfuncout;
    __Vfunc_delta32__305__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__305__quantized;
    __Vfunc_delta32__305__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__305__zero_point;
    __Vfunc_delta32__305__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__305__delta;
    __Vfunc_delta32__305__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__305__magnitude;
    __Vfunc_delta32__305__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__305__encoded;
    __Vfunc_delta32__305__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__306__Vfuncout;
    __Vfunc_bf16_invalid__306__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__306__value;
    __Vfunc_bf16_invalid__306__value = 0;
    IData/*31:0*/ __Vfunc_delta32__310__Vfuncout;
    __Vfunc_delta32__310__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__310__quantized;
    __Vfunc_delta32__310__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__310__zero_point;
    __Vfunc_delta32__310__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__310__delta;
    __Vfunc_delta32__310__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__310__magnitude;
    __Vfunc_delta32__310__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__310__encoded;
    __Vfunc_delta32__310__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__311__Vfuncout;
    __Vfunc_bf16_invalid__311__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__311__value;
    __Vfunc_bf16_invalid__311__value = 0;
    IData/*31:0*/ __Vfunc_delta32__315__Vfuncout;
    __Vfunc_delta32__315__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__315__quantized;
    __Vfunc_delta32__315__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__315__zero_point;
    __Vfunc_delta32__315__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__315__delta;
    __Vfunc_delta32__315__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__315__magnitude;
    __Vfunc_delta32__315__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__315__encoded;
    __Vfunc_delta32__315__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__316__Vfuncout;
    __Vfunc_bf16_invalid__316__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__316__value;
    __Vfunc_bf16_invalid__316__value = 0;
    IData/*31:0*/ __Vfunc_delta32__320__Vfuncout;
    __Vfunc_delta32__320__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__320__quantized;
    __Vfunc_delta32__320__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__320__zero_point;
    __Vfunc_delta32__320__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__320__delta;
    __Vfunc_delta32__320__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__320__magnitude;
    __Vfunc_delta32__320__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__320__encoded;
    __Vfunc_delta32__320__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__321__Vfuncout;
    __Vfunc_bf16_invalid__321__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__321__value;
    __Vfunc_bf16_invalid__321__value = 0;
    IData/*31:0*/ __Vfunc_delta32__325__Vfuncout;
    __Vfunc_delta32__325__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__325__quantized;
    __Vfunc_delta32__325__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__325__zero_point;
    __Vfunc_delta32__325__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__325__delta;
    __Vfunc_delta32__325__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__325__magnitude;
    __Vfunc_delta32__325__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__325__encoded;
    __Vfunc_delta32__325__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__326__Vfuncout;
    __Vfunc_bf16_invalid__326__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__326__value;
    __Vfunc_bf16_invalid__326__value = 0;
    IData/*31:0*/ __Vfunc_delta32__330__Vfuncout;
    __Vfunc_delta32__330__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__330__quantized;
    __Vfunc_delta32__330__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__330__zero_point;
    __Vfunc_delta32__330__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__330__delta;
    __Vfunc_delta32__330__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__330__magnitude;
    __Vfunc_delta32__330__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__330__encoded;
    __Vfunc_delta32__330__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__331__Vfuncout;
    __Vfunc_bf16_invalid__331__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__331__value;
    __Vfunc_bf16_invalid__331__value = 0;
    IData/*31:0*/ __Vfunc_delta32__335__Vfuncout;
    __Vfunc_delta32__335__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__335__quantized;
    __Vfunc_delta32__335__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__335__zero_point;
    __Vfunc_delta32__335__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__335__delta;
    __Vfunc_delta32__335__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__335__magnitude;
    __Vfunc_delta32__335__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__335__encoded;
    __Vfunc_delta32__335__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__336__Vfuncout;
    __Vfunc_bf16_invalid__336__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__336__value;
    __Vfunc_bf16_invalid__336__value = 0;
    IData/*31:0*/ __Vfunc_delta32__340__Vfuncout;
    __Vfunc_delta32__340__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__340__quantized;
    __Vfunc_delta32__340__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__340__zero_point;
    __Vfunc_delta32__340__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__340__delta;
    __Vfunc_delta32__340__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__340__magnitude;
    __Vfunc_delta32__340__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__340__encoded;
    __Vfunc_delta32__340__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__341__Vfuncout;
    __Vfunc_bf16_invalid__341__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__341__value;
    __Vfunc_bf16_invalid__341__value = 0;
    IData/*31:0*/ __Vfunc_delta32__345__Vfuncout;
    __Vfunc_delta32__345__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__345__quantized;
    __Vfunc_delta32__345__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__345__zero_point;
    __Vfunc_delta32__345__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__345__delta;
    __Vfunc_delta32__345__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__345__magnitude;
    __Vfunc_delta32__345__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__345__encoded;
    __Vfunc_delta32__345__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__346__Vfuncout;
    __Vfunc_bf16_invalid__346__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__346__value;
    __Vfunc_bf16_invalid__346__value = 0;
    IData/*31:0*/ __Vfunc_delta32__350__Vfuncout;
    __Vfunc_delta32__350__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__350__quantized;
    __Vfunc_delta32__350__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__350__zero_point;
    __Vfunc_delta32__350__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__350__delta;
    __Vfunc_delta32__350__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__350__magnitude;
    __Vfunc_delta32__350__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__350__encoded;
    __Vfunc_delta32__350__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__351__Vfuncout;
    __Vfunc_bf16_invalid__351__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__351__value;
    __Vfunc_bf16_invalid__351__value = 0;
    IData/*31:0*/ __Vfunc_delta32__355__Vfuncout;
    __Vfunc_delta32__355__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__355__quantized;
    __Vfunc_delta32__355__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__355__zero_point;
    __Vfunc_delta32__355__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__355__delta;
    __Vfunc_delta32__355__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__355__magnitude;
    __Vfunc_delta32__355__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__355__encoded;
    __Vfunc_delta32__355__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__356__Vfuncout;
    __Vfunc_bf16_invalid__356__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__356__value;
    __Vfunc_bf16_invalid__356__value = 0;
    IData/*31:0*/ __Vfunc_delta32__360__Vfuncout;
    __Vfunc_delta32__360__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__360__quantized;
    __Vfunc_delta32__360__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__360__zero_point;
    __Vfunc_delta32__360__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__360__delta;
    __Vfunc_delta32__360__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__360__magnitude;
    __Vfunc_delta32__360__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__360__encoded;
    __Vfunc_delta32__360__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__361__Vfuncout;
    __Vfunc_bf16_invalid__361__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__361__value;
    __Vfunc_bf16_invalid__361__value = 0;
    IData/*31:0*/ __Vfunc_delta32__365__Vfuncout;
    __Vfunc_delta32__365__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__365__quantized;
    __Vfunc_delta32__365__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__365__zero_point;
    __Vfunc_delta32__365__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__365__delta;
    __Vfunc_delta32__365__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__365__magnitude;
    __Vfunc_delta32__365__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__365__encoded;
    __Vfunc_delta32__365__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__366__Vfuncout;
    __Vfunc_bf16_invalid__366__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__366__value;
    __Vfunc_bf16_invalid__366__value = 0;
    IData/*31:0*/ __Vfunc_delta32__370__Vfuncout;
    __Vfunc_delta32__370__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__370__quantized;
    __Vfunc_delta32__370__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__370__zero_point;
    __Vfunc_delta32__370__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__370__delta;
    __Vfunc_delta32__370__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__370__magnitude;
    __Vfunc_delta32__370__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__370__encoded;
    __Vfunc_delta32__370__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__371__Vfuncout;
    __Vfunc_bf16_invalid__371__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__371__value;
    __Vfunc_bf16_invalid__371__value = 0;
    IData/*31:0*/ __Vfunc_delta32__375__Vfuncout;
    __Vfunc_delta32__375__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__375__quantized;
    __Vfunc_delta32__375__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__375__zero_point;
    __Vfunc_delta32__375__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__375__delta;
    __Vfunc_delta32__375__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__375__magnitude;
    __Vfunc_delta32__375__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__375__encoded;
    __Vfunc_delta32__375__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__376__Vfuncout;
    __Vfunc_bf16_invalid__376__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__376__value;
    __Vfunc_bf16_invalid__376__value = 0;
    IData/*31:0*/ __Vfunc_delta32__380__Vfuncout;
    __Vfunc_delta32__380__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__380__quantized;
    __Vfunc_delta32__380__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__380__zero_point;
    __Vfunc_delta32__380__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__380__delta;
    __Vfunc_delta32__380__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__380__magnitude;
    __Vfunc_delta32__380__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__380__encoded;
    __Vfunc_delta32__380__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__381__Vfuncout;
    __Vfunc_bf16_invalid__381__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__381__value;
    __Vfunc_bf16_invalid__381__value = 0;
    IData/*31:0*/ __Vfunc_delta32__385__Vfuncout;
    __Vfunc_delta32__385__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__385__quantized;
    __Vfunc_delta32__385__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__385__zero_point;
    __Vfunc_delta32__385__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__385__delta;
    __Vfunc_delta32__385__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__385__magnitude;
    __Vfunc_delta32__385__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__385__encoded;
    __Vfunc_delta32__385__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__386__Vfuncout;
    __Vfunc_bf16_invalid__386__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__386__value;
    __Vfunc_bf16_invalid__386__value = 0;
    IData/*31:0*/ __Vfunc_delta32__390__Vfuncout;
    __Vfunc_delta32__390__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__390__quantized;
    __Vfunc_delta32__390__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__390__zero_point;
    __Vfunc_delta32__390__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__390__delta;
    __Vfunc_delta32__390__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__390__magnitude;
    __Vfunc_delta32__390__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__390__encoded;
    __Vfunc_delta32__390__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__391__Vfuncout;
    __Vfunc_bf16_invalid__391__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__391__value;
    __Vfunc_bf16_invalid__391__value = 0;
    IData/*31:0*/ __Vfunc_delta32__395__Vfuncout;
    __Vfunc_delta32__395__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__395__quantized;
    __Vfunc_delta32__395__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__395__zero_point;
    __Vfunc_delta32__395__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__395__delta;
    __Vfunc_delta32__395__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__395__magnitude;
    __Vfunc_delta32__395__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__395__encoded;
    __Vfunc_delta32__395__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__396__Vfuncout;
    __Vfunc_bf16_invalid__396__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__396__value;
    __Vfunc_bf16_invalid__396__value = 0;
    IData/*31:0*/ __Vfunc_delta32__400__Vfuncout;
    __Vfunc_delta32__400__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__400__quantized;
    __Vfunc_delta32__400__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__400__zero_point;
    __Vfunc_delta32__400__zero_point = 0;
    CData/*4:0*/ __Vfunc_delta32__400__magnitude;
    __Vfunc_delta32__400__magnitude = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__401__Vfuncout;
    __Vfunc_bf16_invalid__401__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__401__value;
    __Vfunc_bf16_invalid__401__value = 0;
    IData/*31:0*/ __Vfunc_delta32__405__Vfuncout;
    __Vfunc_delta32__405__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__405__quantized;
    __Vfunc_delta32__405__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__405__zero_point;
    __Vfunc_delta32__405__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__405__delta;
    __Vfunc_delta32__405__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__405__magnitude;
    __Vfunc_delta32__405__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__405__encoded;
    __Vfunc_delta32__405__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__406__Vfuncout;
    __Vfunc_bf16_invalid__406__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__406__value;
    __Vfunc_bf16_invalid__406__value = 0;
    IData/*31:0*/ __Vfunc_delta32__410__Vfuncout;
    __Vfunc_delta32__410__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__410__quantized;
    __Vfunc_delta32__410__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__410__zero_point;
    __Vfunc_delta32__410__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__410__delta;
    __Vfunc_delta32__410__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__410__magnitude;
    __Vfunc_delta32__410__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__410__encoded;
    __Vfunc_delta32__410__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__411__Vfuncout;
    __Vfunc_bf16_invalid__411__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__411__value;
    __Vfunc_bf16_invalid__411__value = 0;
    IData/*31:0*/ __Vfunc_delta32__415__Vfuncout;
    __Vfunc_delta32__415__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__415__quantized;
    __Vfunc_delta32__415__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__415__zero_point;
    __Vfunc_delta32__415__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__415__delta;
    __Vfunc_delta32__415__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__415__magnitude;
    __Vfunc_delta32__415__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__415__encoded;
    __Vfunc_delta32__415__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__416__Vfuncout;
    __Vfunc_bf16_invalid__416__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__416__value;
    __Vfunc_bf16_invalid__416__value = 0;
    IData/*31:0*/ __Vfunc_delta32__420__Vfuncout;
    __Vfunc_delta32__420__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__420__quantized;
    __Vfunc_delta32__420__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__420__zero_point;
    __Vfunc_delta32__420__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__420__delta;
    __Vfunc_delta32__420__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__420__magnitude;
    __Vfunc_delta32__420__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__420__encoded;
    __Vfunc_delta32__420__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__421__Vfuncout;
    __Vfunc_bf16_invalid__421__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__421__value;
    __Vfunc_bf16_invalid__421__value = 0;
    IData/*31:0*/ __Vfunc_delta32__425__Vfuncout;
    __Vfunc_delta32__425__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__425__quantized;
    __Vfunc_delta32__425__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__425__zero_point;
    __Vfunc_delta32__425__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__425__delta;
    __Vfunc_delta32__425__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__425__magnitude;
    __Vfunc_delta32__425__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__425__encoded;
    __Vfunc_delta32__425__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__426__Vfuncout;
    __Vfunc_bf16_invalid__426__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__426__value;
    __Vfunc_bf16_invalid__426__value = 0;
    IData/*31:0*/ __Vfunc_delta32__430__Vfuncout;
    __Vfunc_delta32__430__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__430__quantized;
    __Vfunc_delta32__430__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__430__zero_point;
    __Vfunc_delta32__430__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__430__delta;
    __Vfunc_delta32__430__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__430__magnitude;
    __Vfunc_delta32__430__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__430__encoded;
    __Vfunc_delta32__430__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__431__Vfuncout;
    __Vfunc_bf16_invalid__431__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__431__value;
    __Vfunc_bf16_invalid__431__value = 0;
    IData/*31:0*/ __Vfunc_delta32__435__Vfuncout;
    __Vfunc_delta32__435__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__435__quantized;
    __Vfunc_delta32__435__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__435__zero_point;
    __Vfunc_delta32__435__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__435__delta;
    __Vfunc_delta32__435__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__435__magnitude;
    __Vfunc_delta32__435__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__435__encoded;
    __Vfunc_delta32__435__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__436__Vfuncout;
    __Vfunc_bf16_invalid__436__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__436__value;
    __Vfunc_bf16_invalid__436__value = 0;
    IData/*31:0*/ __Vfunc_delta32__440__Vfuncout;
    __Vfunc_delta32__440__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__440__quantized;
    __Vfunc_delta32__440__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__440__zero_point;
    __Vfunc_delta32__440__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__440__delta;
    __Vfunc_delta32__440__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__440__magnitude;
    __Vfunc_delta32__440__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__440__encoded;
    __Vfunc_delta32__440__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__441__Vfuncout;
    __Vfunc_bf16_invalid__441__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__441__value;
    __Vfunc_bf16_invalid__441__value = 0;
    IData/*31:0*/ __Vfunc_delta32__445__Vfuncout;
    __Vfunc_delta32__445__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__445__quantized;
    __Vfunc_delta32__445__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__445__zero_point;
    __Vfunc_delta32__445__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__445__delta;
    __Vfunc_delta32__445__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__445__magnitude;
    __Vfunc_delta32__445__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__445__encoded;
    __Vfunc_delta32__445__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__446__Vfuncout;
    __Vfunc_bf16_invalid__446__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__446__value;
    __Vfunc_bf16_invalid__446__value = 0;
    IData/*31:0*/ __Vfunc_delta32__450__Vfuncout;
    __Vfunc_delta32__450__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__450__quantized;
    __Vfunc_delta32__450__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__450__zero_point;
    __Vfunc_delta32__450__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__450__delta;
    __Vfunc_delta32__450__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__450__magnitude;
    __Vfunc_delta32__450__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__450__encoded;
    __Vfunc_delta32__450__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__451__Vfuncout;
    __Vfunc_bf16_invalid__451__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__451__value;
    __Vfunc_bf16_invalid__451__value = 0;
    IData/*31:0*/ __Vfunc_delta32__455__Vfuncout;
    __Vfunc_delta32__455__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__455__quantized;
    __Vfunc_delta32__455__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__455__zero_point;
    __Vfunc_delta32__455__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__455__delta;
    __Vfunc_delta32__455__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__455__magnitude;
    __Vfunc_delta32__455__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__455__encoded;
    __Vfunc_delta32__455__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__456__Vfuncout;
    __Vfunc_bf16_invalid__456__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__456__value;
    __Vfunc_bf16_invalid__456__value = 0;
    IData/*31:0*/ __Vfunc_delta32__460__Vfuncout;
    __Vfunc_delta32__460__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__460__quantized;
    __Vfunc_delta32__460__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__460__zero_point;
    __Vfunc_delta32__460__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__460__delta;
    __Vfunc_delta32__460__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__460__magnitude;
    __Vfunc_delta32__460__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__460__encoded;
    __Vfunc_delta32__460__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__461__Vfuncout;
    __Vfunc_bf16_invalid__461__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__461__value;
    __Vfunc_bf16_invalid__461__value = 0;
    IData/*31:0*/ __Vfunc_delta32__465__Vfuncout;
    __Vfunc_delta32__465__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__465__quantized;
    __Vfunc_delta32__465__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__465__zero_point;
    __Vfunc_delta32__465__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__465__delta;
    __Vfunc_delta32__465__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__465__magnitude;
    __Vfunc_delta32__465__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__465__encoded;
    __Vfunc_delta32__465__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__466__Vfuncout;
    __Vfunc_bf16_invalid__466__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__466__value;
    __Vfunc_bf16_invalid__466__value = 0;
    IData/*31:0*/ __Vfunc_delta32__470__Vfuncout;
    __Vfunc_delta32__470__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__470__quantized;
    __Vfunc_delta32__470__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__470__zero_point;
    __Vfunc_delta32__470__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__470__delta;
    __Vfunc_delta32__470__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__470__magnitude;
    __Vfunc_delta32__470__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__470__encoded;
    __Vfunc_delta32__470__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__471__Vfuncout;
    __Vfunc_bf16_invalid__471__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__471__value;
    __Vfunc_bf16_invalid__471__value = 0;
    IData/*31:0*/ __Vfunc_delta32__475__Vfuncout;
    __Vfunc_delta32__475__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__475__quantized;
    __Vfunc_delta32__475__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__475__zero_point;
    __Vfunc_delta32__475__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__475__delta;
    __Vfunc_delta32__475__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__475__magnitude;
    __Vfunc_delta32__475__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__475__encoded;
    __Vfunc_delta32__475__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__476__Vfuncout;
    __Vfunc_bf16_invalid__476__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__476__value;
    __Vfunc_bf16_invalid__476__value = 0;
    IData/*31:0*/ __Vfunc_delta32__480__Vfuncout;
    __Vfunc_delta32__480__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__480__quantized;
    __Vfunc_delta32__480__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__480__zero_point;
    __Vfunc_delta32__480__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__480__delta;
    __Vfunc_delta32__480__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__480__magnitude;
    __Vfunc_delta32__480__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__480__encoded;
    __Vfunc_delta32__480__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__481__Vfuncout;
    __Vfunc_bf16_invalid__481__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__481__value;
    __Vfunc_bf16_invalid__481__value = 0;
    IData/*31:0*/ __Vfunc_delta32__485__Vfuncout;
    __Vfunc_delta32__485__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__485__quantized;
    __Vfunc_delta32__485__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__485__zero_point;
    __Vfunc_delta32__485__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__485__delta;
    __Vfunc_delta32__485__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__485__magnitude;
    __Vfunc_delta32__485__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__485__encoded;
    __Vfunc_delta32__485__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__486__Vfuncout;
    __Vfunc_bf16_invalid__486__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__486__value;
    __Vfunc_bf16_invalid__486__value = 0;
    IData/*31:0*/ __Vfunc_delta32__490__Vfuncout;
    __Vfunc_delta32__490__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__490__quantized;
    __Vfunc_delta32__490__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__490__zero_point;
    __Vfunc_delta32__490__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__490__delta;
    __Vfunc_delta32__490__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__490__magnitude;
    __Vfunc_delta32__490__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__490__encoded;
    __Vfunc_delta32__490__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__491__Vfuncout;
    __Vfunc_bf16_invalid__491__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__491__value;
    __Vfunc_bf16_invalid__491__value = 0;
    IData/*31:0*/ __Vfunc_delta32__495__Vfuncout;
    __Vfunc_delta32__495__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__495__quantized;
    __Vfunc_delta32__495__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__495__zero_point;
    __Vfunc_delta32__495__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__495__delta;
    __Vfunc_delta32__495__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__495__magnitude;
    __Vfunc_delta32__495__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__495__encoded;
    __Vfunc_delta32__495__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__496__Vfuncout;
    __Vfunc_bf16_invalid__496__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__496__value;
    __Vfunc_bf16_invalid__496__value = 0;
    IData/*31:0*/ __Vfunc_delta32__500__Vfuncout;
    __Vfunc_delta32__500__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__500__quantized;
    __Vfunc_delta32__500__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__500__zero_point;
    __Vfunc_delta32__500__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__500__delta;
    __Vfunc_delta32__500__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__500__magnitude;
    __Vfunc_delta32__500__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__500__encoded;
    __Vfunc_delta32__500__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__501__Vfuncout;
    __Vfunc_bf16_invalid__501__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__501__value;
    __Vfunc_bf16_invalid__501__value = 0;
    IData/*31:0*/ __Vfunc_delta32__505__Vfuncout;
    __Vfunc_delta32__505__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_delta32__505__quantized;
    __Vfunc_delta32__505__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__505__zero_point;
    __Vfunc_delta32__505__zero_point = 0;
    CData/*5:0*/ __Vfunc_delta32__505__delta;
    __Vfunc_delta32__505__delta = 0;
    CData/*4:0*/ __Vfunc_delta32__505__magnitude;
    __Vfunc_delta32__505__magnitude = 0;
    IData/*30:0*/ __Vfunc_delta32__505__encoded;
    __Vfunc_delta32__505__encoded = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__506__Vfuncout;
    __Vfunc_bf16_invalid__506__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__506__value;
    __Vfunc_bf16_invalid__506__value = 0;
    CData/*3:0*/ __Vfunc_delta32__510__quantized;
    __Vfunc_delta32__510__quantized = 0;
    CData/*3:0*/ __Vfunc_delta32__510__zero_point;
    __Vfunc_delta32__510__zero_point = 0;
    CData/*4:0*/ __Vfunc_delta32__510__magnitude;
    __Vfunc_delta32__510__magnitude = 0;
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
    __Vfunc_delta32__0__zero_point = (0xfU & vlSelf->z[0U]);
    __Vfunc_delta32__0__quantized = (0xfU & vlSelf->q[0U]);
    __Vfunc_delta32__0__delta = (0x3fU & ((IData)(__Vfunc_delta32__0__quantized) 
                                          - (IData)(__Vfunc_delta32__0__zero_point)));
    __Vfunc_delta32__0__magnitude = (0x1fU & ((0x20U 
                                               & (IData)(__Vfunc_delta32__0__delta))
                                               ? (0x3fU 
                                                  & (- (IData)(__Vfunc_delta32__0__delta)))
                                               : (IData)(__Vfunc_delta32__0__delta)));
    __Vfunc_delta32__0__encoded = (((((((((0U == (IData)(__Vfunc_delta32__0__magnitude)) 
                                          | (1U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                         | (2U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                        | (3U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                       | (4U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                      | (5U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                     | (6U == (IData)(__Vfunc_delta32__0__magnitude))) 
                                    | (7U == (IData)(__Vfunc_delta32__0__magnitude)))
                                    ? ((0U == (IData)(__Vfunc_delta32__0__magnitude))
                                        ? 0U : ((1U 
                                                 == (IData)(__Vfunc_delta32__0__magnitude))
                                                 ? 0x3f800000U
                                                 : 
                                                ((2U 
                                                  == (IData)(__Vfunc_delta32__0__magnitude))
                                                  ? 0x40000000U
                                                  : 
                                                 ((3U 
                                                   == (IData)(__Vfunc_delta32__0__magnitude))
                                                   ? 0x40400000U
                                                   : 
                                                  ((4U 
                                                    == (IData)(__Vfunc_delta32__0__magnitude))
                                                    ? 0x40800000U
                                                    : 
                                                   ((5U 
                                                     == (IData)(__Vfunc_delta32__0__magnitude))
                                                     ? 0x40a00000U
                                                     : 
                                                    ((6U 
                                                      == (IData)(__Vfunc_delta32__0__magnitude))
                                                      ? 0x40c00000U
                                                      : 0x40e00000U)))))))
                                    : ((8U == (IData)(__Vfunc_delta32__0__magnitude))
                                        ? 0x41000000U
                                        : ((9U == (IData)(__Vfunc_delta32__0__magnitude))
                                            ? 0x41100000U
                                            : ((0xaU 
                                                == (IData)(__Vfunc_delta32__0__magnitude))
                                                ? 0x41200000U
                                                : (
                                                   (0xbU 
                                                    == (IData)(__Vfunc_delta32__0__magnitude))
                                                    ? 0x41300000U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(__Vfunc_delta32__0__magnitude))
                                                     ? 0x41400000U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(__Vfunc_delta32__0__magnitude))
                                                      ? 0x41500000U
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(__Vfunc_delta32__0__magnitude))
                                                       ? 0x41600000U
                                                       : 0x41700000U))))))));
    __Vfunc_delta32__0__Vfuncout = ((0x80000000U & 
                                     ((IData)(__Vfunc_delta32__0__delta) 
                                      << 0x1aU)) | __Vfunc_delta32__0__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__quantized_delta 
        = __Vfunc_delta32__0__Vfuncout;
    __Vfunc_delta32__5__zero_point = (0xfU & (vlSelf->z[0U] 
                                              >> 4U));
    __Vfunc_delta32__5__quantized = (0xfU & (vlSelf->q[0U] 
                                             >> 4U));
    __Vfunc_delta32__5__delta = (0x3fU & ((IData)(__Vfunc_delta32__5__quantized) 
                                          - (IData)(__Vfunc_delta32__5__zero_point)));
    __Vfunc_delta32__5__magnitude = (0x1fU & ((0x20U 
                                               & (IData)(__Vfunc_delta32__5__delta))
                                               ? (0x3fU 
                                                  & (- (IData)(__Vfunc_delta32__5__delta)))
                                               : (IData)(__Vfunc_delta32__5__delta)));
    __Vfunc_delta32__5__encoded = (((((((((0U == (IData)(__Vfunc_delta32__5__magnitude)) 
                                          | (1U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                         | (2U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                        | (3U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                       | (4U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                      | (5U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                     | (6U == (IData)(__Vfunc_delta32__5__magnitude))) 
                                    | (7U == (IData)(__Vfunc_delta32__5__magnitude)))
                                    ? ((0U == (IData)(__Vfunc_delta32__5__magnitude))
                                        ? 0U : ((1U 
                                                 == (IData)(__Vfunc_delta32__5__magnitude))
                                                 ? 0x3f800000U
                                                 : 
                                                ((2U 
                                                  == (IData)(__Vfunc_delta32__5__magnitude))
                                                  ? 0x40000000U
                                                  : 
                                                 ((3U 
                                                   == (IData)(__Vfunc_delta32__5__magnitude))
                                                   ? 0x40400000U
                                                   : 
                                                  ((4U 
                                                    == (IData)(__Vfunc_delta32__5__magnitude))
                                                    ? 0x40800000U
                                                    : 
                                                   ((5U 
                                                     == (IData)(__Vfunc_delta32__5__magnitude))
                                                     ? 0x40a00000U
                                                     : 
                                                    ((6U 
                                                      == (IData)(__Vfunc_delta32__5__magnitude))
                                                      ? 0x40c00000U
                                                      : 0x40e00000U)))))))
                                    : ((8U == (IData)(__Vfunc_delta32__5__magnitude))
                                        ? 0x41000000U
                                        : ((9U == (IData)(__Vfunc_delta32__5__magnitude))
                                            ? 0x41100000U
                                            : ((0xaU 
                                                == (IData)(__Vfunc_delta32__5__magnitude))
                                                ? 0x41200000U
                                                : (
                                                   (0xbU 
                                                    == (IData)(__Vfunc_delta32__5__magnitude))
                                                    ? 0x41300000U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(__Vfunc_delta32__5__magnitude))
                                                     ? 0x41400000U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(__Vfunc_delta32__5__magnitude))
                                                      ? 0x41500000U
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(__Vfunc_delta32__5__magnitude))
                                                       ? 0x41600000U
                                                       : 0x41700000U))))))));
    __Vfunc_delta32__5__Vfuncout = ((0x80000000U & 
                                     ((IData)(__Vfunc_delta32__5__delta) 
                                      << 0x1aU)) | __Vfunc_delta32__5__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__quantized_delta 
        = __Vfunc_delta32__5__Vfuncout;
    __Vfunc_delta32__10__zero_point = (0xfU & (vlSelf->z[0U] 
                                               >> 8U));
    __Vfunc_delta32__10__quantized = (0xfU & (vlSelf->q[0U] 
                                              >> 8U));
    __Vfunc_delta32__10__delta = (0x3fU & ((IData)(__Vfunc_delta32__10__quantized) 
                                           - (IData)(__Vfunc_delta32__10__zero_point)));
    __Vfunc_delta32__10__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__10__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__10__delta)))
                                                : (IData)(__Vfunc_delta32__10__delta)));
    __Vfunc_delta32__10__encoded = (((((((((0U == (IData)(__Vfunc_delta32__10__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__10__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__10__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__10__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__10__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__10__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__10__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__10__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__10__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__10__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__10__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__10__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__10__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__10__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__10__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__10__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__10__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__10__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__10__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__10__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__quantized_delta 
        = __Vfunc_delta32__10__Vfuncout;
    __Vfunc_delta32__15__zero_point = (0xfU & (vlSelf->z[0U] 
                                               >> 0xcU));
    __Vfunc_delta32__15__quantized = (0xfU & (vlSelf->q[0U] 
                                              >> 0xcU));
    __Vfunc_delta32__15__delta = (0x3fU & ((IData)(__Vfunc_delta32__15__quantized) 
                                           - (IData)(__Vfunc_delta32__15__zero_point)));
    __Vfunc_delta32__15__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__15__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__15__delta)))
                                                : (IData)(__Vfunc_delta32__15__delta)));
    __Vfunc_delta32__15__encoded = (((((((((0U == (IData)(__Vfunc_delta32__15__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__15__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__15__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__15__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__15__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__15__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__15__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__15__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__15__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__15__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__15__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__15__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__15__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__15__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__15__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__15__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__15__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__15__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__15__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__15__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__quantized_delta 
        = __Vfunc_delta32__15__Vfuncout;
    __Vfunc_delta32__20__zero_point = (0xfU & (vlSelf->z[0U] 
                                               >> 0x10U));
    __Vfunc_delta32__20__quantized = (0xfU & (vlSelf->q[0U] 
                                              >> 0x10U));
    __Vfunc_delta32__20__delta = (0x3fU & ((IData)(__Vfunc_delta32__20__quantized) 
                                           - (IData)(__Vfunc_delta32__20__zero_point)));
    __Vfunc_delta32__20__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__20__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__20__delta)))
                                                : (IData)(__Vfunc_delta32__20__delta)));
    __Vfunc_delta32__20__encoded = (((((((((0U == (IData)(__Vfunc_delta32__20__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__20__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__20__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__20__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__20__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__20__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__20__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__20__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__20__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__20__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__20__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__20__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__20__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__20__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__20__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__20__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__20__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__20__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__20__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__20__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__quantized_delta 
        = __Vfunc_delta32__20__Vfuncout;
    __Vfunc_delta32__25__zero_point = (0xfU & (vlSelf->z[0U] 
                                               >> 0x14U));
    __Vfunc_delta32__25__quantized = (0xfU & (vlSelf->q[0U] 
                                              >> 0x14U));
    __Vfunc_delta32__25__delta = (0x3fU & ((IData)(__Vfunc_delta32__25__quantized) 
                                           - (IData)(__Vfunc_delta32__25__zero_point)));
    __Vfunc_delta32__25__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__25__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__25__delta)))
                                                : (IData)(__Vfunc_delta32__25__delta)));
    __Vfunc_delta32__25__encoded = (((((((((0U == (IData)(__Vfunc_delta32__25__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__25__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__25__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__25__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__25__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__25__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__25__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__25__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__25__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__25__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__25__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__25__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__25__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__25__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__25__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__25__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__25__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__25__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__25__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__25__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__quantized_delta 
        = __Vfunc_delta32__25__Vfuncout;
    __Vfunc_delta32__30__zero_point = (0xfU & (vlSelf->z[0U] 
                                               >> 0x18U));
    __Vfunc_delta32__30__quantized = (0xfU & (vlSelf->q[0U] 
                                              >> 0x18U));
    __Vfunc_delta32__30__delta = (0x3fU & ((IData)(__Vfunc_delta32__30__quantized) 
                                           - (IData)(__Vfunc_delta32__30__zero_point)));
    __Vfunc_delta32__30__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__30__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__30__delta)))
                                                : (IData)(__Vfunc_delta32__30__delta)));
    __Vfunc_delta32__30__encoded = (((((((((0U == (IData)(__Vfunc_delta32__30__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__30__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__30__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__30__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__30__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__30__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__30__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__30__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__30__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__30__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__30__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__30__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__30__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__30__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__30__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__30__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__30__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__30__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__30__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__30__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__quantized_delta 
        = __Vfunc_delta32__30__Vfuncout;
    __Vfunc_delta32__35__zero_point = (vlSelf->z[0U] 
                                       >> 0x1cU);
    __Vfunc_delta32__35__quantized = (vlSelf->q[0U] 
                                      >> 0x1cU);
    __Vfunc_delta32__35__delta = (0x3fU & ((IData)(__Vfunc_delta32__35__quantized) 
                                           - (IData)(__Vfunc_delta32__35__zero_point)));
    __Vfunc_delta32__35__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__35__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__35__delta)))
                                                : (IData)(__Vfunc_delta32__35__delta)));
    __Vfunc_delta32__35__encoded = (((((((((0U == (IData)(__Vfunc_delta32__35__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__35__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__35__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__35__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__35__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__35__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__35__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__35__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__35__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__35__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__35__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__35__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__35__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__35__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__35__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__35__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__35__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__35__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__35__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__35__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__quantized_delta 
        = __Vfunc_delta32__35__Vfuncout;
    __Vfunc_delta32__40__zero_point = (0xfU & vlSelf->z[1U]);
    __Vfunc_delta32__40__quantized = (0xfU & vlSelf->q[1U]);
    __Vfunc_delta32__40__delta = (0x3fU & ((IData)(__Vfunc_delta32__40__quantized) 
                                           - (IData)(__Vfunc_delta32__40__zero_point)));
    __Vfunc_delta32__40__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__40__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__40__delta)))
                                                : (IData)(__Vfunc_delta32__40__delta)));
    __Vfunc_delta32__40__encoded = (((((((((0U == (IData)(__Vfunc_delta32__40__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__40__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__40__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__40__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__40__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__40__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__40__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__40__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__40__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__40__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__40__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__40__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__40__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__40__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__40__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__40__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__40__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__40__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__40__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__40__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__quantized_delta 
        = __Vfunc_delta32__40__Vfuncout;
    __Vfunc_delta32__45__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 4U));
    __Vfunc_delta32__45__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 4U));
    __Vfunc_delta32__45__delta = (0x3fU & ((IData)(__Vfunc_delta32__45__quantized) 
                                           - (IData)(__Vfunc_delta32__45__zero_point)));
    __Vfunc_delta32__45__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__45__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__45__delta)))
                                                : (IData)(__Vfunc_delta32__45__delta)));
    __Vfunc_delta32__45__encoded = (((((((((0U == (IData)(__Vfunc_delta32__45__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__45__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__45__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__45__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__45__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__45__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__45__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__45__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__45__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__45__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__45__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__45__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__45__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__45__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__45__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__45__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__45__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__45__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__45__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__45__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__quantized_delta 
        = __Vfunc_delta32__45__Vfuncout;
    __Vfunc_delta32__50__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 8U));
    __Vfunc_delta32__50__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 8U));
    __Vfunc_delta32__50__delta = (0x3fU & ((IData)(__Vfunc_delta32__50__quantized) 
                                           - (IData)(__Vfunc_delta32__50__zero_point)));
    __Vfunc_delta32__50__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__50__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__50__delta)))
                                                : (IData)(__Vfunc_delta32__50__delta)));
    __Vfunc_delta32__50__encoded = (((((((((0U == (IData)(__Vfunc_delta32__50__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__50__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__50__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__50__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__50__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__50__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__50__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__50__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__50__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__50__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__50__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__50__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__50__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__50__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__50__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__50__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__50__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__50__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__50__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__50__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__quantized_delta 
        = __Vfunc_delta32__50__Vfuncout;
    __Vfunc_delta32__55__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 0xcU));
    __Vfunc_delta32__55__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 0xcU));
    __Vfunc_delta32__55__delta = (0x3fU & ((IData)(__Vfunc_delta32__55__quantized) 
                                           - (IData)(__Vfunc_delta32__55__zero_point)));
    __Vfunc_delta32__55__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__55__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__55__delta)))
                                                : (IData)(__Vfunc_delta32__55__delta)));
    __Vfunc_delta32__55__encoded = (((((((((0U == (IData)(__Vfunc_delta32__55__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__55__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__55__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__55__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__55__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__55__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__55__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__55__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__55__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__55__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__55__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__55__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__55__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__55__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__55__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__55__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__55__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__55__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__55__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__55__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__quantized_delta 
        = __Vfunc_delta32__55__Vfuncout;
    __Vfunc_delta32__60__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 0x10U));
    __Vfunc_delta32__60__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 0x10U));
    __Vfunc_delta32__60__delta = (0x3fU & ((IData)(__Vfunc_delta32__60__quantized) 
                                           - (IData)(__Vfunc_delta32__60__zero_point)));
    __Vfunc_delta32__60__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__60__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__60__delta)))
                                                : (IData)(__Vfunc_delta32__60__delta)));
    __Vfunc_delta32__60__encoded = (((((((((0U == (IData)(__Vfunc_delta32__60__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__60__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__60__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__60__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__60__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__60__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__60__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__60__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__60__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__60__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__60__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__60__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__60__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__60__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__60__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__60__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__60__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__60__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__60__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__60__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__quantized_delta 
        = __Vfunc_delta32__60__Vfuncout;
    __Vfunc_delta32__65__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 0x14U));
    __Vfunc_delta32__65__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 0x14U));
    __Vfunc_delta32__65__delta = (0x3fU & ((IData)(__Vfunc_delta32__65__quantized) 
                                           - (IData)(__Vfunc_delta32__65__zero_point)));
    __Vfunc_delta32__65__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__65__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__65__delta)))
                                                : (IData)(__Vfunc_delta32__65__delta)));
    __Vfunc_delta32__65__encoded = (((((((((0U == (IData)(__Vfunc_delta32__65__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__65__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__65__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__65__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__65__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__65__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__65__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__65__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__65__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__65__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__65__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__65__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__65__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__65__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__65__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__65__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__65__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__65__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__65__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__65__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__quantized_delta 
        = __Vfunc_delta32__65__Vfuncout;
    __Vfunc_delta32__70__zero_point = (0xfU & (vlSelf->z[1U] 
                                               >> 0x18U));
    __Vfunc_delta32__70__quantized = (0xfU & (vlSelf->q[1U] 
                                              >> 0x18U));
    __Vfunc_delta32__70__delta = (0x3fU & ((IData)(__Vfunc_delta32__70__quantized) 
                                           - (IData)(__Vfunc_delta32__70__zero_point)));
    __Vfunc_delta32__70__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__70__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__70__delta)))
                                                : (IData)(__Vfunc_delta32__70__delta)));
    __Vfunc_delta32__70__encoded = (((((((((0U == (IData)(__Vfunc_delta32__70__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__70__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__70__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__70__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__70__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__70__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__70__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__70__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__70__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__70__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__70__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__70__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__70__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__70__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__70__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__70__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__70__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__70__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__70__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__70__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__quantized_delta 
        = __Vfunc_delta32__70__Vfuncout;
    __Vfunc_delta32__75__zero_point = (vlSelf->z[1U] 
                                       >> 0x1cU);
    __Vfunc_delta32__75__quantized = (vlSelf->q[1U] 
                                      >> 0x1cU);
    __Vfunc_delta32__75__delta = (0x3fU & ((IData)(__Vfunc_delta32__75__quantized) 
                                           - (IData)(__Vfunc_delta32__75__zero_point)));
    __Vfunc_delta32__75__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__75__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__75__delta)))
                                                : (IData)(__Vfunc_delta32__75__delta)));
    __Vfunc_delta32__75__encoded = (((((((((0U == (IData)(__Vfunc_delta32__75__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__75__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__75__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__75__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__75__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__75__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__75__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__75__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__75__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__75__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__75__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__75__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__75__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__75__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__75__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__75__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__75__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__75__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__75__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__75__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__quantized_delta 
        = __Vfunc_delta32__75__Vfuncout;
    __Vfunc_delta32__80__zero_point = (0xfU & vlSelf->z[2U]);
    __Vfunc_delta32__80__quantized = (0xfU & vlSelf->q[2U]);
    __Vfunc_delta32__80__delta = (0x3fU & ((IData)(__Vfunc_delta32__80__quantized) 
                                           - (IData)(__Vfunc_delta32__80__zero_point)));
    __Vfunc_delta32__80__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__80__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__80__delta)))
                                                : (IData)(__Vfunc_delta32__80__delta)));
    __Vfunc_delta32__80__encoded = (((((((((0U == (IData)(__Vfunc_delta32__80__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__80__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__80__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__80__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__80__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__80__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__80__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__80__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__80__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__80__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__80__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__80__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__80__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__80__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__80__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__80__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__80__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__80__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__80__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__80__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__quantized_delta 
        = __Vfunc_delta32__80__Vfuncout;
    __Vfunc_delta32__85__zero_point = (0xfU & (vlSelf->z[2U] 
                                               >> 4U));
    __Vfunc_delta32__85__quantized = (0xfU & (vlSelf->q[2U] 
                                              >> 4U));
    __Vfunc_delta32__85__delta = (0x3fU & ((IData)(__Vfunc_delta32__85__quantized) 
                                           - (IData)(__Vfunc_delta32__85__zero_point)));
    __Vfunc_delta32__85__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__85__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__85__delta)))
                                                : (IData)(__Vfunc_delta32__85__delta)));
    __Vfunc_delta32__85__encoded = (((((((((0U == (IData)(__Vfunc_delta32__85__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__85__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__85__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__85__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__85__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__85__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__85__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__85__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__85__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__85__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__85__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__85__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__85__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__85__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__85__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__85__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__85__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__85__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__85__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__85__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__quantized_delta 
        = __Vfunc_delta32__85__Vfuncout;
    __Vfunc_delta32__90__zero_point = (0xfU & (vlSelf->z[2U] 
                                               >> 8U));
    __Vfunc_delta32__90__quantized = (0xfU & (vlSelf->q[2U] 
                                              >> 8U));
    __Vfunc_delta32__90__delta = (0x3fU & ((IData)(__Vfunc_delta32__90__quantized) 
                                           - (IData)(__Vfunc_delta32__90__zero_point)));
    __Vfunc_delta32__90__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__90__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__90__delta)))
                                                : (IData)(__Vfunc_delta32__90__delta)));
    __Vfunc_delta32__90__encoded = (((((((((0U == (IData)(__Vfunc_delta32__90__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__90__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__90__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__90__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__90__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__90__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__90__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__90__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__90__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__90__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__90__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__90__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__90__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__90__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__90__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__90__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__90__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__90__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__90__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__90__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__quantized_delta 
        = __Vfunc_delta32__90__Vfuncout;
    __Vfunc_delta32__95__zero_point = (0xfU & (vlSelf->z[2U] 
                                               >> 0xcU));
    __Vfunc_delta32__95__quantized = (0xfU & (vlSelf->q[2U] 
                                              >> 0xcU));
    __Vfunc_delta32__95__delta = (0x3fU & ((IData)(__Vfunc_delta32__95__quantized) 
                                           - (IData)(__Vfunc_delta32__95__zero_point)));
    __Vfunc_delta32__95__magnitude = (0x1fU & ((0x20U 
                                                & (IData)(__Vfunc_delta32__95__delta))
                                                ? (0x3fU 
                                                   & (- (IData)(__Vfunc_delta32__95__delta)))
                                                : (IData)(__Vfunc_delta32__95__delta)));
    __Vfunc_delta32__95__encoded = (((((((((0U == (IData)(__Vfunc_delta32__95__magnitude)) 
                                           | (1U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                          | (2U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                         | (3U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                        | (4U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                       | (5U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                      | (6U == (IData)(__Vfunc_delta32__95__magnitude))) 
                                     | (7U == (IData)(__Vfunc_delta32__95__magnitude)))
                                     ? ((0U == (IData)(__Vfunc_delta32__95__magnitude))
                                         ? 0U : ((1U 
                                                  == (IData)(__Vfunc_delta32__95__magnitude))
                                                  ? 0x3f800000U
                                                  : 
                                                 ((2U 
                                                   == (IData)(__Vfunc_delta32__95__magnitude))
                                                   ? 0x40000000U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_delta32__95__magnitude))
                                                    ? 0x40400000U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_delta32__95__magnitude))
                                                     ? 0x40800000U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_delta32__95__magnitude))
                                                      ? 0x40a00000U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_delta32__95__magnitude))
                                                       ? 0x40c00000U
                                                       : 0x40e00000U)))))))
                                     : ((8U == (IData)(__Vfunc_delta32__95__magnitude))
                                         ? 0x41000000U
                                         : ((9U == (IData)(__Vfunc_delta32__95__magnitude))
                                             ? 0x41100000U
                                             : ((0xaU 
                                                 == (IData)(__Vfunc_delta32__95__magnitude))
                                                 ? 0x41200000U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(__Vfunc_delta32__95__magnitude))
                                                  ? 0x41300000U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(__Vfunc_delta32__95__magnitude))
                                                   ? 0x41400000U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(__Vfunc_delta32__95__magnitude))
                                                    ? 0x41500000U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(__Vfunc_delta32__95__magnitude))
                                                     ? 0x41600000U
                                                     : 0x41700000U))))))));
    __Vfunc_delta32__95__Vfuncout = ((0x80000000U & 
                                      ((IData)(__Vfunc_delta32__95__delta) 
                                       << 0x1aU)) | __Vfunc_delta32__95__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__quantized_delta 
        = __Vfunc_delta32__95__Vfuncout;
    __Vfunc_delta32__100__zero_point = (0xfU & (vlSelf->z[2U] 
                                                >> 0x10U));
    __Vfunc_delta32__100__quantized = (0xfU & (vlSelf->q[2U] 
                                               >> 0x10U));
    __Vfunc_delta32__100__delta = (0x3fU & ((IData)(__Vfunc_delta32__100__quantized) 
                                            - (IData)(__Vfunc_delta32__100__zero_point)));
    __Vfunc_delta32__100__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__100__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__100__delta)))
                                                 : (IData)(__Vfunc_delta32__100__delta)));
    __Vfunc_delta32__100__encoded = (((((((((0U == (IData)(__Vfunc_delta32__100__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__100__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__100__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__100__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__100__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__100__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__100__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__100__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__100__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__100__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__100__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__100__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__100__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__100__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__100__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__100__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__100__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__100__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__100__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__100__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__quantized_delta 
        = __Vfunc_delta32__100__Vfuncout;
    __Vfunc_delta32__105__zero_point = (0xfU & (vlSelf->z[2U] 
                                                >> 0x14U));
    __Vfunc_delta32__105__quantized = (0xfU & (vlSelf->q[2U] 
                                               >> 0x14U));
    __Vfunc_delta32__105__delta = (0x3fU & ((IData)(__Vfunc_delta32__105__quantized) 
                                            - (IData)(__Vfunc_delta32__105__zero_point)));
    __Vfunc_delta32__105__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__105__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__105__delta)))
                                                 : (IData)(__Vfunc_delta32__105__delta)));
    __Vfunc_delta32__105__encoded = (((((((((0U == (IData)(__Vfunc_delta32__105__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__105__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__105__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__105__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__105__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__105__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__105__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__105__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__105__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__105__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__105__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__105__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__105__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__105__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__105__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__105__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__105__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__105__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__105__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__105__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__quantized_delta 
        = __Vfunc_delta32__105__Vfuncout;
    __Vfunc_delta32__110__zero_point = (0xfU & (vlSelf->z[2U] 
                                                >> 0x18U));
    __Vfunc_delta32__110__quantized = (0xfU & (vlSelf->q[2U] 
                                               >> 0x18U));
    __Vfunc_delta32__110__delta = (0x3fU & ((IData)(__Vfunc_delta32__110__quantized) 
                                            - (IData)(__Vfunc_delta32__110__zero_point)));
    __Vfunc_delta32__110__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__110__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__110__delta)))
                                                 : (IData)(__Vfunc_delta32__110__delta)));
    __Vfunc_delta32__110__encoded = (((((((((0U == (IData)(__Vfunc_delta32__110__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__110__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__110__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__110__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__110__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__110__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__110__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__110__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__110__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__110__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__110__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__110__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__110__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__110__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__110__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__110__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__110__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__110__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__110__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__110__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__quantized_delta 
        = __Vfunc_delta32__110__Vfuncout;
    __Vfunc_delta32__115__zero_point = (vlSelf->z[2U] 
                                        >> 0x1cU);
    __Vfunc_delta32__115__quantized = (vlSelf->q[2U] 
                                       >> 0x1cU);
    __Vfunc_delta32__115__delta = (0x3fU & ((IData)(__Vfunc_delta32__115__quantized) 
                                            - (IData)(__Vfunc_delta32__115__zero_point)));
    __Vfunc_delta32__115__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__115__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__115__delta)))
                                                 : (IData)(__Vfunc_delta32__115__delta)));
    __Vfunc_delta32__115__encoded = (((((((((0U == (IData)(__Vfunc_delta32__115__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__115__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__115__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__115__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__115__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__115__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__115__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__115__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__115__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__115__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__115__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__115__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__115__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__115__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__115__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__115__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__115__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__115__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__115__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__115__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__quantized_delta 
        = __Vfunc_delta32__115__Vfuncout;
    __Vfunc_delta32__120__zero_point = (0xfU & vlSelf->z[3U]);
    __Vfunc_delta32__120__quantized = (0xfU & vlSelf->q[3U]);
    __Vfunc_delta32__120__delta = (0x3fU & ((IData)(__Vfunc_delta32__120__quantized) 
                                            - (IData)(__Vfunc_delta32__120__zero_point)));
    __Vfunc_delta32__120__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__120__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__120__delta)))
                                                 : (IData)(__Vfunc_delta32__120__delta)));
    __Vfunc_delta32__120__encoded = (((((((((0U == (IData)(__Vfunc_delta32__120__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__120__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__120__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__120__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__120__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__120__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__120__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__120__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__120__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__120__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__120__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__120__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__120__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__120__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__120__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__120__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__120__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__120__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__120__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__120__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__quantized_delta 
        = __Vfunc_delta32__120__Vfuncout;
    __Vfunc_delta32__125__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 4U));
    __Vfunc_delta32__125__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 4U));
    __Vfunc_delta32__125__delta = (0x3fU & ((IData)(__Vfunc_delta32__125__quantized) 
                                            - (IData)(__Vfunc_delta32__125__zero_point)));
    __Vfunc_delta32__125__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__125__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__125__delta)))
                                                 : (IData)(__Vfunc_delta32__125__delta)));
    __Vfunc_delta32__125__encoded = (((((((((0U == (IData)(__Vfunc_delta32__125__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__125__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__125__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__125__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__125__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__125__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__125__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__125__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__125__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__125__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__125__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__125__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__125__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__125__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__125__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__125__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__125__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__125__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__125__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__125__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__quantized_delta 
        = __Vfunc_delta32__125__Vfuncout;
    __Vfunc_delta32__130__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 8U));
    __Vfunc_delta32__130__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 8U));
    __Vfunc_delta32__130__delta = (0x3fU & ((IData)(__Vfunc_delta32__130__quantized) 
                                            - (IData)(__Vfunc_delta32__130__zero_point)));
    __Vfunc_delta32__130__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__130__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__130__delta)))
                                                 : (IData)(__Vfunc_delta32__130__delta)));
    __Vfunc_delta32__130__encoded = (((((((((0U == (IData)(__Vfunc_delta32__130__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__130__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__130__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__130__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__130__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__130__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__130__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__130__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__130__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__130__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__130__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__130__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__130__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__130__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__130__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__130__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__130__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__130__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__130__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__130__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__quantized_delta 
        = __Vfunc_delta32__130__Vfuncout;
    __Vfunc_delta32__135__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 0xcU));
    __Vfunc_delta32__135__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 0xcU));
    __Vfunc_delta32__135__delta = (0x3fU & ((IData)(__Vfunc_delta32__135__quantized) 
                                            - (IData)(__Vfunc_delta32__135__zero_point)));
    __Vfunc_delta32__135__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__135__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__135__delta)))
                                                 : (IData)(__Vfunc_delta32__135__delta)));
    __Vfunc_delta32__135__encoded = (((((((((0U == (IData)(__Vfunc_delta32__135__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__135__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__135__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__135__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__135__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__135__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__135__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__135__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__135__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__135__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__135__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__135__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__135__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__135__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__135__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__135__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__135__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__135__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__135__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__135__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__quantized_delta 
        = __Vfunc_delta32__135__Vfuncout;
    __Vfunc_delta32__140__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 0x10U));
    __Vfunc_delta32__140__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 0x10U));
    __Vfunc_delta32__140__delta = (0x3fU & ((IData)(__Vfunc_delta32__140__quantized) 
                                            - (IData)(__Vfunc_delta32__140__zero_point)));
    __Vfunc_delta32__140__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__140__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__140__delta)))
                                                 : (IData)(__Vfunc_delta32__140__delta)));
    __Vfunc_delta32__140__encoded = (((((((((0U == (IData)(__Vfunc_delta32__140__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__140__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__140__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__140__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__140__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__140__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__140__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__140__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__140__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__140__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__140__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__140__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__140__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__140__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__140__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__140__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__140__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__140__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__140__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__140__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__quantized_delta 
        = __Vfunc_delta32__140__Vfuncout;
    __Vfunc_delta32__145__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 0x14U));
    __Vfunc_delta32__145__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 0x14U));
    __Vfunc_delta32__145__delta = (0x3fU & ((IData)(__Vfunc_delta32__145__quantized) 
                                            - (IData)(__Vfunc_delta32__145__zero_point)));
    __Vfunc_delta32__145__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__145__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__145__delta)))
                                                 : (IData)(__Vfunc_delta32__145__delta)));
    __Vfunc_delta32__145__encoded = (((((((((0U == (IData)(__Vfunc_delta32__145__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__145__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__145__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__145__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__145__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__145__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__145__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__145__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__145__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__145__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__145__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__145__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__145__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__145__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__145__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__145__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__145__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__145__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__145__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__145__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__quantized_delta 
        = __Vfunc_delta32__145__Vfuncout;
    __Vfunc_delta32__150__zero_point = (0xfU & (vlSelf->z[3U] 
                                                >> 0x18U));
    __Vfunc_delta32__150__quantized = (0xfU & (vlSelf->q[3U] 
                                               >> 0x18U));
    __Vfunc_delta32__150__delta = (0x3fU & ((IData)(__Vfunc_delta32__150__quantized) 
                                            - (IData)(__Vfunc_delta32__150__zero_point)));
    __Vfunc_delta32__150__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__150__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__150__delta)))
                                                 : (IData)(__Vfunc_delta32__150__delta)));
    __Vfunc_delta32__150__encoded = (((((((((0U == (IData)(__Vfunc_delta32__150__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__150__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__150__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__150__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__150__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__150__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__150__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__150__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__150__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__150__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__150__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__150__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__150__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__150__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__150__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__150__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__150__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__150__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__150__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__150__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__quantized_delta 
        = __Vfunc_delta32__150__Vfuncout;
    __Vfunc_delta32__155__zero_point = (vlSelf->z[3U] 
                                        >> 0x1cU);
    __Vfunc_delta32__155__quantized = (vlSelf->q[3U] 
                                       >> 0x1cU);
    __Vfunc_delta32__155__delta = (0x3fU & ((IData)(__Vfunc_delta32__155__quantized) 
                                            - (IData)(__Vfunc_delta32__155__zero_point)));
    __Vfunc_delta32__155__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__155__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__155__delta)))
                                                 : (IData)(__Vfunc_delta32__155__delta)));
    __Vfunc_delta32__155__encoded = (((((((((0U == (IData)(__Vfunc_delta32__155__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__155__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__155__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__155__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__155__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__155__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__155__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__155__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__155__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__155__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__155__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__155__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__155__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__155__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__155__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__155__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__155__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__155__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__155__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__155__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__quantized_delta 
        = __Vfunc_delta32__155__Vfuncout;
    __Vfunc_delta32__160__zero_point = (0xfU & vlSelf->z[4U]);
    __Vfunc_delta32__160__quantized = (0xfU & vlSelf->q[4U]);
    __Vfunc_delta32__160__delta = (0x3fU & ((IData)(__Vfunc_delta32__160__quantized) 
                                            - (IData)(__Vfunc_delta32__160__zero_point)));
    __Vfunc_delta32__160__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__160__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__160__delta)))
                                                 : (IData)(__Vfunc_delta32__160__delta)));
    __Vfunc_delta32__160__encoded = (((((((((0U == (IData)(__Vfunc_delta32__160__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__160__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__160__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__160__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__160__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__160__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__160__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__160__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__160__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__160__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__160__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__160__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__160__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__160__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__160__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__160__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__160__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__160__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__160__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__160__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__quantized_delta 
        = __Vfunc_delta32__160__Vfuncout;
    __Vfunc_delta32__165__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 4U));
    __Vfunc_delta32__165__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 4U));
    __Vfunc_delta32__165__delta = (0x3fU & ((IData)(__Vfunc_delta32__165__quantized) 
                                            - (IData)(__Vfunc_delta32__165__zero_point)));
    __Vfunc_delta32__165__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__165__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__165__delta)))
                                                 : (IData)(__Vfunc_delta32__165__delta)));
    __Vfunc_delta32__165__encoded = (((((((((0U == (IData)(__Vfunc_delta32__165__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__165__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__165__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__165__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__165__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__165__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__165__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__165__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__165__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__165__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__165__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__165__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__165__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__165__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__165__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__165__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__165__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__165__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__165__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__165__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__quantized_delta 
        = __Vfunc_delta32__165__Vfuncout;
    __Vfunc_delta32__170__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 8U));
    __Vfunc_delta32__170__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 8U));
    __Vfunc_delta32__170__delta = (0x3fU & ((IData)(__Vfunc_delta32__170__quantized) 
                                            - (IData)(__Vfunc_delta32__170__zero_point)));
    __Vfunc_delta32__170__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__170__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__170__delta)))
                                                 : (IData)(__Vfunc_delta32__170__delta)));
    __Vfunc_delta32__170__encoded = (((((((((0U == (IData)(__Vfunc_delta32__170__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__170__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__170__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__170__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__170__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__170__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__170__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__170__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__170__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__170__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__170__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__170__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__170__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__170__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__170__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__170__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__170__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__170__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__170__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__170__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__quantized_delta 
        = __Vfunc_delta32__170__Vfuncout;
    __Vfunc_delta32__175__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 0xcU));
    __Vfunc_delta32__175__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 0xcU));
    __Vfunc_delta32__175__delta = (0x3fU & ((IData)(__Vfunc_delta32__175__quantized) 
                                            - (IData)(__Vfunc_delta32__175__zero_point)));
    __Vfunc_delta32__175__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__175__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__175__delta)))
                                                 : (IData)(__Vfunc_delta32__175__delta)));
    __Vfunc_delta32__175__encoded = (((((((((0U == (IData)(__Vfunc_delta32__175__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__175__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__175__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__175__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__175__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__175__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__175__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__175__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__175__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__175__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__175__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__175__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__175__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__175__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__175__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__175__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__175__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__175__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__175__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__175__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__quantized_delta 
        = __Vfunc_delta32__175__Vfuncout;
    __Vfunc_delta32__180__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 0x10U));
    __Vfunc_delta32__180__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 0x10U));
    __Vfunc_delta32__180__delta = (0x3fU & ((IData)(__Vfunc_delta32__180__quantized) 
                                            - (IData)(__Vfunc_delta32__180__zero_point)));
    __Vfunc_delta32__180__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__180__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__180__delta)))
                                                 : (IData)(__Vfunc_delta32__180__delta)));
    __Vfunc_delta32__180__encoded = (((((((((0U == (IData)(__Vfunc_delta32__180__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__180__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__180__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__180__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__180__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__180__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__180__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__180__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__180__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__180__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__180__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__180__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__180__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__180__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__180__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__180__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__180__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__180__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__180__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__180__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__quantized_delta 
        = __Vfunc_delta32__180__Vfuncout;
    __Vfunc_delta32__185__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 0x14U));
    __Vfunc_delta32__185__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 0x14U));
    __Vfunc_delta32__185__delta = (0x3fU & ((IData)(__Vfunc_delta32__185__quantized) 
                                            - (IData)(__Vfunc_delta32__185__zero_point)));
    __Vfunc_delta32__185__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__185__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__185__delta)))
                                                 : (IData)(__Vfunc_delta32__185__delta)));
    __Vfunc_delta32__185__encoded = (((((((((0U == (IData)(__Vfunc_delta32__185__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__185__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__185__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__185__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__185__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__185__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__185__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__185__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__185__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__185__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__185__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__185__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__185__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__185__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__185__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__185__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__185__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__185__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__185__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__185__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__quantized_delta 
        = __Vfunc_delta32__185__Vfuncout;
    __Vfunc_delta32__190__zero_point = (0xfU & (vlSelf->z[4U] 
                                                >> 0x18U));
    __Vfunc_delta32__190__quantized = (0xfU & (vlSelf->q[4U] 
                                               >> 0x18U));
    __Vfunc_delta32__190__delta = (0x3fU & ((IData)(__Vfunc_delta32__190__quantized) 
                                            - (IData)(__Vfunc_delta32__190__zero_point)));
    __Vfunc_delta32__190__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__190__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__190__delta)))
                                                 : (IData)(__Vfunc_delta32__190__delta)));
    __Vfunc_delta32__190__encoded = (((((((((0U == (IData)(__Vfunc_delta32__190__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__190__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__190__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__190__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__190__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__190__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__190__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__190__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__190__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__190__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__190__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__190__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__190__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__190__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__190__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__190__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__190__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__190__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__190__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__190__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__quantized_delta 
        = __Vfunc_delta32__190__Vfuncout;
    __Vfunc_delta32__195__zero_point = (vlSelf->z[4U] 
                                        >> 0x1cU);
    __Vfunc_delta32__195__quantized = (vlSelf->q[4U] 
                                       >> 0x1cU);
    __Vfunc_delta32__195__delta = (0x3fU & ((IData)(__Vfunc_delta32__195__quantized) 
                                            - (IData)(__Vfunc_delta32__195__zero_point)));
    __Vfunc_delta32__195__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__195__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__195__delta)))
                                                 : (IData)(__Vfunc_delta32__195__delta)));
    __Vfunc_delta32__195__encoded = (((((((((0U == (IData)(__Vfunc_delta32__195__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__195__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__195__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__195__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__195__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__195__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__195__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__195__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__195__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__195__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__195__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__195__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__195__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__195__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__195__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__195__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__195__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__195__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__195__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__195__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__quantized_delta 
        = __Vfunc_delta32__195__Vfuncout;
    __Vfunc_delta32__200__zero_point = (0xfU & vlSelf->z[5U]);
    __Vfunc_delta32__200__quantized = (0xfU & vlSelf->q[5U]);
    __Vfunc_delta32__200__delta = (0x3fU & ((IData)(__Vfunc_delta32__200__quantized) 
                                            - (IData)(__Vfunc_delta32__200__zero_point)));
    __Vfunc_delta32__200__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__200__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__200__delta)))
                                                 : (IData)(__Vfunc_delta32__200__delta)));
    __Vfunc_delta32__200__encoded = (((((((((0U == (IData)(__Vfunc_delta32__200__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__200__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__200__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__200__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__200__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__200__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__200__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__200__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__200__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__200__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__200__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__200__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__200__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__200__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__200__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__200__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__200__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__200__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__200__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__200__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__quantized_delta 
        = __Vfunc_delta32__200__Vfuncout;
    __Vfunc_delta32__205__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 4U));
    __Vfunc_delta32__205__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 4U));
    __Vfunc_delta32__205__delta = (0x3fU & ((IData)(__Vfunc_delta32__205__quantized) 
                                            - (IData)(__Vfunc_delta32__205__zero_point)));
    __Vfunc_delta32__205__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__205__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__205__delta)))
                                                 : (IData)(__Vfunc_delta32__205__delta)));
    __Vfunc_delta32__205__encoded = (((((((((0U == (IData)(__Vfunc_delta32__205__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__205__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__205__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__205__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__205__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__205__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__205__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__205__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__205__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__205__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__205__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__205__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__205__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__205__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__205__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__205__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__205__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__205__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__205__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__205__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__quantized_delta 
        = __Vfunc_delta32__205__Vfuncout;
    __Vfunc_delta32__210__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 8U));
    __Vfunc_delta32__210__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 8U));
    __Vfunc_delta32__210__delta = (0x3fU & ((IData)(__Vfunc_delta32__210__quantized) 
                                            - (IData)(__Vfunc_delta32__210__zero_point)));
    __Vfunc_delta32__210__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__210__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__210__delta)))
                                                 : (IData)(__Vfunc_delta32__210__delta)));
    __Vfunc_delta32__210__encoded = (((((((((0U == (IData)(__Vfunc_delta32__210__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__210__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__210__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__210__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__210__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__210__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__210__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__210__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__210__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__210__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__210__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__210__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__210__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__210__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__210__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__210__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__210__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__210__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__210__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__210__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__quantized_delta 
        = __Vfunc_delta32__210__Vfuncout;
    __Vfunc_delta32__215__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 0xcU));
    __Vfunc_delta32__215__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 0xcU));
    __Vfunc_delta32__215__delta = (0x3fU & ((IData)(__Vfunc_delta32__215__quantized) 
                                            - (IData)(__Vfunc_delta32__215__zero_point)));
    __Vfunc_delta32__215__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__215__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__215__delta)))
                                                 : (IData)(__Vfunc_delta32__215__delta)));
    __Vfunc_delta32__215__encoded = (((((((((0U == (IData)(__Vfunc_delta32__215__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__215__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__215__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__215__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__215__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__215__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__215__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__215__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__215__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__215__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__215__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__215__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__215__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__215__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__215__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__215__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__215__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__215__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__215__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__215__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__quantized_delta 
        = __Vfunc_delta32__215__Vfuncout;
    __Vfunc_delta32__220__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 0x10U));
    __Vfunc_delta32__220__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 0x10U));
    __Vfunc_delta32__220__delta = (0x3fU & ((IData)(__Vfunc_delta32__220__quantized) 
                                            - (IData)(__Vfunc_delta32__220__zero_point)));
    __Vfunc_delta32__220__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__220__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__220__delta)))
                                                 : (IData)(__Vfunc_delta32__220__delta)));
    __Vfunc_delta32__220__encoded = (((((((((0U == (IData)(__Vfunc_delta32__220__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__220__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__220__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__220__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__220__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__220__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__220__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__220__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__220__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__220__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__220__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__220__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__220__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__220__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__220__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__220__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__220__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__220__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__220__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__220__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__quantized_delta 
        = __Vfunc_delta32__220__Vfuncout;
    __Vfunc_delta32__225__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 0x14U));
    __Vfunc_delta32__225__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 0x14U));
    __Vfunc_delta32__225__delta = (0x3fU & ((IData)(__Vfunc_delta32__225__quantized) 
                                            - (IData)(__Vfunc_delta32__225__zero_point)));
    __Vfunc_delta32__225__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__225__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__225__delta)))
                                                 : (IData)(__Vfunc_delta32__225__delta)));
    __Vfunc_delta32__225__encoded = (((((((((0U == (IData)(__Vfunc_delta32__225__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__225__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__225__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__225__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__225__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__225__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__225__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__225__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__225__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__225__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__225__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__225__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__225__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__225__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__225__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__225__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__225__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__225__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__225__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__225__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__quantized_delta 
        = __Vfunc_delta32__225__Vfuncout;
    __Vfunc_delta32__230__zero_point = (0xfU & (vlSelf->z[5U] 
                                                >> 0x18U));
    __Vfunc_delta32__230__quantized = (0xfU & (vlSelf->q[5U] 
                                               >> 0x18U));
    __Vfunc_delta32__230__delta = (0x3fU & ((IData)(__Vfunc_delta32__230__quantized) 
                                            - (IData)(__Vfunc_delta32__230__zero_point)));
    __Vfunc_delta32__230__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__230__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__230__delta)))
                                                 : (IData)(__Vfunc_delta32__230__delta)));
    __Vfunc_delta32__230__encoded = (((((((((0U == (IData)(__Vfunc_delta32__230__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__230__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__230__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__230__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__230__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__230__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__230__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__230__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__230__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__230__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__230__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__230__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__230__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__230__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__230__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__230__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__230__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__230__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__230__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__230__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__quantized_delta 
        = __Vfunc_delta32__230__Vfuncout;
    __Vfunc_delta32__235__zero_point = (vlSelf->z[5U] 
                                        >> 0x1cU);
    __Vfunc_delta32__235__quantized = (vlSelf->q[5U] 
                                       >> 0x1cU);
    __Vfunc_delta32__235__delta = (0x3fU & ((IData)(__Vfunc_delta32__235__quantized) 
                                            - (IData)(__Vfunc_delta32__235__zero_point)));
    __Vfunc_delta32__235__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__235__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__235__delta)))
                                                 : (IData)(__Vfunc_delta32__235__delta)));
    __Vfunc_delta32__235__encoded = (((((((((0U == (IData)(__Vfunc_delta32__235__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__235__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__235__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__235__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__235__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__235__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__235__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__235__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__235__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__235__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__235__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__235__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__235__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__235__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__235__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__235__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__235__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__235__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__235__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__235__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__quantized_delta 
        = __Vfunc_delta32__235__Vfuncout;
    __Vfunc_delta32__240__zero_point = (0xfU & vlSelf->z[6U]);
    __Vfunc_delta32__240__quantized = (0xfU & vlSelf->q[6U]);
    __Vfunc_delta32__240__delta = (0x3fU & ((IData)(__Vfunc_delta32__240__quantized) 
                                            - (IData)(__Vfunc_delta32__240__zero_point)));
    __Vfunc_delta32__240__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__240__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__240__delta)))
                                                 : (IData)(__Vfunc_delta32__240__delta)));
    __Vfunc_delta32__240__encoded = (((((((((0U == (IData)(__Vfunc_delta32__240__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__240__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__240__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__240__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__240__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__240__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__240__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__240__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__240__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__240__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__240__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__240__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__240__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__240__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__240__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__240__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__240__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__240__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__240__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__240__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__quantized_delta 
        = __Vfunc_delta32__240__Vfuncout;
    __Vfunc_delta32__245__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 4U));
    __Vfunc_delta32__245__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 4U));
    __Vfunc_delta32__245__delta = (0x3fU & ((IData)(__Vfunc_delta32__245__quantized) 
                                            - (IData)(__Vfunc_delta32__245__zero_point)));
    __Vfunc_delta32__245__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__245__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__245__delta)))
                                                 : (IData)(__Vfunc_delta32__245__delta)));
    __Vfunc_delta32__245__encoded = (((((((((0U == (IData)(__Vfunc_delta32__245__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__245__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__245__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__245__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__245__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__245__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__245__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__245__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__245__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__245__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__245__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__245__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__245__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__245__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__245__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__245__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__245__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__245__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__245__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__245__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__quantized_delta 
        = __Vfunc_delta32__245__Vfuncout;
    __Vfunc_delta32__250__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 8U));
    __Vfunc_delta32__250__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 8U));
    __Vfunc_delta32__250__delta = (0x3fU & ((IData)(__Vfunc_delta32__250__quantized) 
                                            - (IData)(__Vfunc_delta32__250__zero_point)));
    __Vfunc_delta32__250__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__250__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__250__delta)))
                                                 : (IData)(__Vfunc_delta32__250__delta)));
    __Vfunc_delta32__250__encoded = (((((((((0U == (IData)(__Vfunc_delta32__250__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__250__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__250__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__250__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__250__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__250__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__250__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__250__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__250__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__250__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__250__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__250__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__250__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__250__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__250__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__250__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__250__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__250__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__250__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__250__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__quantized_delta 
        = __Vfunc_delta32__250__Vfuncout;
    __Vfunc_delta32__255__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 0xcU));
    __Vfunc_delta32__255__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 0xcU));
    __Vfunc_delta32__255__delta = (0x3fU & ((IData)(__Vfunc_delta32__255__quantized) 
                                            - (IData)(__Vfunc_delta32__255__zero_point)));
    __Vfunc_delta32__255__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__255__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__255__delta)))
                                                 : (IData)(__Vfunc_delta32__255__delta)));
    __Vfunc_delta32__255__encoded = (((((((((0U == (IData)(__Vfunc_delta32__255__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__255__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__255__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__255__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__255__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__255__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__255__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__255__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__255__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__255__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__255__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__255__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__255__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__255__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__255__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__255__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__255__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__255__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__255__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__255__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__quantized_delta 
        = __Vfunc_delta32__255__Vfuncout;
    __Vfunc_delta32__260__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 0x10U));
    __Vfunc_delta32__260__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 0x10U));
    __Vfunc_delta32__260__delta = (0x3fU & ((IData)(__Vfunc_delta32__260__quantized) 
                                            - (IData)(__Vfunc_delta32__260__zero_point)));
    __Vfunc_delta32__260__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__260__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__260__delta)))
                                                 : (IData)(__Vfunc_delta32__260__delta)));
    __Vfunc_delta32__260__encoded = (((((((((0U == (IData)(__Vfunc_delta32__260__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__260__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__260__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__260__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__260__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__260__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__260__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__260__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__260__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__260__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__260__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__260__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__260__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__260__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__260__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__260__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__260__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__260__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__260__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__260__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__quantized_delta 
        = __Vfunc_delta32__260__Vfuncout;
    __Vfunc_delta32__265__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 0x14U));
    __Vfunc_delta32__265__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 0x14U));
    __Vfunc_delta32__265__delta = (0x3fU & ((IData)(__Vfunc_delta32__265__quantized) 
                                            - (IData)(__Vfunc_delta32__265__zero_point)));
    __Vfunc_delta32__265__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__265__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__265__delta)))
                                                 : (IData)(__Vfunc_delta32__265__delta)));
    __Vfunc_delta32__265__encoded = (((((((((0U == (IData)(__Vfunc_delta32__265__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__265__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__265__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__265__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__265__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__265__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__265__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__265__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__265__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__265__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__265__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__265__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__265__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__265__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__265__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__265__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__265__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__265__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__265__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__265__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__quantized_delta 
        = __Vfunc_delta32__265__Vfuncout;
    __Vfunc_delta32__270__zero_point = (0xfU & (vlSelf->z[6U] 
                                                >> 0x18U));
    __Vfunc_delta32__270__quantized = (0xfU & (vlSelf->q[6U] 
                                               >> 0x18U));
    __Vfunc_delta32__270__delta = (0x3fU & ((IData)(__Vfunc_delta32__270__quantized) 
                                            - (IData)(__Vfunc_delta32__270__zero_point)));
    __Vfunc_delta32__270__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__270__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__270__delta)))
                                                 : (IData)(__Vfunc_delta32__270__delta)));
    __Vfunc_delta32__270__encoded = (((((((((0U == (IData)(__Vfunc_delta32__270__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__270__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__270__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__270__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__270__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__270__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__270__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__270__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__270__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__270__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__270__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__270__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__270__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__270__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__270__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__270__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__270__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__270__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__270__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__270__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__quantized_delta 
        = __Vfunc_delta32__270__Vfuncout;
    __Vfunc_delta32__275__zero_point = (vlSelf->z[6U] 
                                        >> 0x1cU);
    __Vfunc_delta32__275__quantized = (vlSelf->q[6U] 
                                       >> 0x1cU);
    __Vfunc_delta32__275__delta = (0x3fU & ((IData)(__Vfunc_delta32__275__quantized) 
                                            - (IData)(__Vfunc_delta32__275__zero_point)));
    __Vfunc_delta32__275__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__275__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__275__delta)))
                                                 : (IData)(__Vfunc_delta32__275__delta)));
    __Vfunc_delta32__275__encoded = (((((((((0U == (IData)(__Vfunc_delta32__275__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__275__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__275__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__275__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__275__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__275__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__275__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__275__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__275__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__275__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__275__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__275__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__275__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__275__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__275__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__275__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__275__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__275__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__275__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__275__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__quantized_delta 
        = __Vfunc_delta32__275__Vfuncout;
    __Vfunc_delta32__280__zero_point = (0xfU & vlSelf->z[7U]);
    __Vfunc_delta32__280__quantized = (0xfU & vlSelf->q[7U]);
    __Vfunc_delta32__280__delta = (0x3fU & ((IData)(__Vfunc_delta32__280__quantized) 
                                            - (IData)(__Vfunc_delta32__280__zero_point)));
    __Vfunc_delta32__280__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__280__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__280__delta)))
                                                 : (IData)(__Vfunc_delta32__280__delta)));
    __Vfunc_delta32__280__encoded = (((((((((0U == (IData)(__Vfunc_delta32__280__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__280__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__280__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__280__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__280__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__280__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__280__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__280__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__280__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__280__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__280__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__280__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__280__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__280__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__280__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__280__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__280__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__280__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__280__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__280__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__quantized_delta 
        = __Vfunc_delta32__280__Vfuncout;
    __Vfunc_delta32__285__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 4U));
    __Vfunc_delta32__285__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 4U));
    __Vfunc_delta32__285__delta = (0x3fU & ((IData)(__Vfunc_delta32__285__quantized) 
                                            - (IData)(__Vfunc_delta32__285__zero_point)));
    __Vfunc_delta32__285__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__285__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__285__delta)))
                                                 : (IData)(__Vfunc_delta32__285__delta)));
    __Vfunc_delta32__285__encoded = (((((((((0U == (IData)(__Vfunc_delta32__285__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__285__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__285__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__285__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__285__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__285__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__285__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__285__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__285__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__285__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__285__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__285__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__285__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__285__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__285__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__285__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__285__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__285__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__285__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__285__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__quantized_delta 
        = __Vfunc_delta32__285__Vfuncout;
    __Vfunc_delta32__290__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 8U));
    __Vfunc_delta32__290__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 8U));
    __Vfunc_delta32__290__delta = (0x3fU & ((IData)(__Vfunc_delta32__290__quantized) 
                                            - (IData)(__Vfunc_delta32__290__zero_point)));
    __Vfunc_delta32__290__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__290__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__290__delta)))
                                                 : (IData)(__Vfunc_delta32__290__delta)));
    __Vfunc_delta32__290__encoded = (((((((((0U == (IData)(__Vfunc_delta32__290__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__290__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__290__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__290__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__290__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__290__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__290__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__290__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__290__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__290__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__290__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__290__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__290__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__290__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__290__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__290__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__290__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__290__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__290__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__290__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__quantized_delta 
        = __Vfunc_delta32__290__Vfuncout;
    __Vfunc_delta32__295__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 0xcU));
    __Vfunc_delta32__295__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 0xcU));
    __Vfunc_delta32__295__delta = (0x3fU & ((IData)(__Vfunc_delta32__295__quantized) 
                                            - (IData)(__Vfunc_delta32__295__zero_point)));
    __Vfunc_delta32__295__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__295__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__295__delta)))
                                                 : (IData)(__Vfunc_delta32__295__delta)));
    __Vfunc_delta32__295__encoded = (((((((((0U == (IData)(__Vfunc_delta32__295__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__295__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__295__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__295__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__295__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__295__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__295__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__295__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__295__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__295__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__295__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__295__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__295__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__295__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__295__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__295__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__295__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__295__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__295__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__295__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__quantized_delta 
        = __Vfunc_delta32__295__Vfuncout;
    __Vfunc_delta32__300__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 0x10U));
    __Vfunc_delta32__300__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 0x10U));
    __Vfunc_delta32__300__delta = (0x3fU & ((IData)(__Vfunc_delta32__300__quantized) 
                                            - (IData)(__Vfunc_delta32__300__zero_point)));
    __Vfunc_delta32__300__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__300__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__300__delta)))
                                                 : (IData)(__Vfunc_delta32__300__delta)));
    __Vfunc_delta32__300__encoded = (((((((((0U == (IData)(__Vfunc_delta32__300__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__300__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__300__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__300__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__300__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__300__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__300__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__300__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__300__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__300__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__300__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__300__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__300__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__300__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__300__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__300__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__300__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__300__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__300__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__300__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__quantized_delta 
        = __Vfunc_delta32__300__Vfuncout;
    __Vfunc_delta32__305__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 0x14U));
    __Vfunc_delta32__305__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 0x14U));
    __Vfunc_delta32__305__delta = (0x3fU & ((IData)(__Vfunc_delta32__305__quantized) 
                                            - (IData)(__Vfunc_delta32__305__zero_point)));
    __Vfunc_delta32__305__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__305__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__305__delta)))
                                                 : (IData)(__Vfunc_delta32__305__delta)));
    __Vfunc_delta32__305__encoded = (((((((((0U == (IData)(__Vfunc_delta32__305__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__305__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__305__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__305__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__305__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__305__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__305__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__305__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__305__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__305__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__305__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__305__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__305__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__305__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__305__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__305__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__305__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__305__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__305__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__305__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__quantized_delta 
        = __Vfunc_delta32__305__Vfuncout;
    __Vfunc_delta32__310__zero_point = (0xfU & (vlSelf->z[7U] 
                                                >> 0x18U));
    __Vfunc_delta32__310__quantized = (0xfU & (vlSelf->q[7U] 
                                               >> 0x18U));
    __Vfunc_delta32__310__delta = (0x3fU & ((IData)(__Vfunc_delta32__310__quantized) 
                                            - (IData)(__Vfunc_delta32__310__zero_point)));
    __Vfunc_delta32__310__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__310__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__310__delta)))
                                                 : (IData)(__Vfunc_delta32__310__delta)));
    __Vfunc_delta32__310__encoded = (((((((((0U == (IData)(__Vfunc_delta32__310__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__310__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__310__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__310__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__310__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__310__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__310__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__310__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__310__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__310__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__310__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__310__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__310__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__310__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__310__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__310__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__310__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__310__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__310__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__310__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__quantized_delta 
        = __Vfunc_delta32__310__Vfuncout;
    __Vfunc_delta32__315__zero_point = (vlSelf->z[7U] 
                                        >> 0x1cU);
    __Vfunc_delta32__315__quantized = (vlSelf->q[7U] 
                                       >> 0x1cU);
    __Vfunc_delta32__315__delta = (0x3fU & ((IData)(__Vfunc_delta32__315__quantized) 
                                            - (IData)(__Vfunc_delta32__315__zero_point)));
    __Vfunc_delta32__315__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__315__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__315__delta)))
                                                 : (IData)(__Vfunc_delta32__315__delta)));
    __Vfunc_delta32__315__encoded = (((((((((0U == (IData)(__Vfunc_delta32__315__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__315__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__315__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__315__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__315__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__315__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__315__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__315__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__315__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__315__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__315__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__315__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__315__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__315__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__315__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__315__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__315__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__315__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__315__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__315__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__quantized_delta 
        = __Vfunc_delta32__315__Vfuncout;
    __Vfunc_delta32__320__zero_point = (0xfU & vlSelf->z[8U]);
    __Vfunc_delta32__320__quantized = (0xfU & vlSelf->q[8U]);
    __Vfunc_delta32__320__delta = (0x3fU & ((IData)(__Vfunc_delta32__320__quantized) 
                                            - (IData)(__Vfunc_delta32__320__zero_point)));
    __Vfunc_delta32__320__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__320__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__320__delta)))
                                                 : (IData)(__Vfunc_delta32__320__delta)));
    __Vfunc_delta32__320__encoded = (((((((((0U == (IData)(__Vfunc_delta32__320__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__320__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__320__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__320__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__320__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__320__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__320__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__320__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__320__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__320__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__320__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__320__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__320__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__320__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__320__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__320__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__320__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__320__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__320__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__320__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__quantized_delta 
        = __Vfunc_delta32__320__Vfuncout;
    __Vfunc_delta32__325__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 4U));
    __Vfunc_delta32__325__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 4U));
    __Vfunc_delta32__325__delta = (0x3fU & ((IData)(__Vfunc_delta32__325__quantized) 
                                            - (IData)(__Vfunc_delta32__325__zero_point)));
    __Vfunc_delta32__325__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__325__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__325__delta)))
                                                 : (IData)(__Vfunc_delta32__325__delta)));
    __Vfunc_delta32__325__encoded = (((((((((0U == (IData)(__Vfunc_delta32__325__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__325__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__325__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__325__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__325__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__325__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__325__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__325__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__325__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__325__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__325__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__325__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__325__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__325__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__325__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__325__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__325__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__325__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__325__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__325__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__quantized_delta 
        = __Vfunc_delta32__325__Vfuncout;
    __Vfunc_delta32__330__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 8U));
    __Vfunc_delta32__330__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 8U));
    __Vfunc_delta32__330__delta = (0x3fU & ((IData)(__Vfunc_delta32__330__quantized) 
                                            - (IData)(__Vfunc_delta32__330__zero_point)));
    __Vfunc_delta32__330__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__330__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__330__delta)))
                                                 : (IData)(__Vfunc_delta32__330__delta)));
    __Vfunc_delta32__330__encoded = (((((((((0U == (IData)(__Vfunc_delta32__330__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__330__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__330__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__330__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__330__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__330__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__330__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__330__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__330__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__330__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__330__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__330__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__330__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__330__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__330__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__330__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__330__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__330__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__330__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__330__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__quantized_delta 
        = __Vfunc_delta32__330__Vfuncout;
    __Vfunc_delta32__335__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 0xcU));
    __Vfunc_delta32__335__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 0xcU));
    __Vfunc_delta32__335__delta = (0x3fU & ((IData)(__Vfunc_delta32__335__quantized) 
                                            - (IData)(__Vfunc_delta32__335__zero_point)));
    __Vfunc_delta32__335__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__335__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__335__delta)))
                                                 : (IData)(__Vfunc_delta32__335__delta)));
    __Vfunc_delta32__335__encoded = (((((((((0U == (IData)(__Vfunc_delta32__335__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__335__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__335__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__335__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__335__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__335__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__335__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__335__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__335__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__335__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__335__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__335__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__335__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__335__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__335__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__335__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__335__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__335__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__335__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__335__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__quantized_delta 
        = __Vfunc_delta32__335__Vfuncout;
    __Vfunc_delta32__340__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 0x10U));
    __Vfunc_delta32__340__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 0x10U));
    __Vfunc_delta32__340__delta = (0x3fU & ((IData)(__Vfunc_delta32__340__quantized) 
                                            - (IData)(__Vfunc_delta32__340__zero_point)));
    __Vfunc_delta32__340__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__340__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__340__delta)))
                                                 : (IData)(__Vfunc_delta32__340__delta)));
    __Vfunc_delta32__340__encoded = (((((((((0U == (IData)(__Vfunc_delta32__340__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__340__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__340__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__340__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__340__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__340__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__340__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__340__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__340__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__340__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__340__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__340__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__340__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__340__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__340__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__340__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__340__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__340__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__340__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__340__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__quantized_delta 
        = __Vfunc_delta32__340__Vfuncout;
    __Vfunc_delta32__345__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 0x14U));
    __Vfunc_delta32__345__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 0x14U));
    __Vfunc_delta32__345__delta = (0x3fU & ((IData)(__Vfunc_delta32__345__quantized) 
                                            - (IData)(__Vfunc_delta32__345__zero_point)));
    __Vfunc_delta32__345__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__345__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__345__delta)))
                                                 : (IData)(__Vfunc_delta32__345__delta)));
    __Vfunc_delta32__345__encoded = (((((((((0U == (IData)(__Vfunc_delta32__345__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__345__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__345__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__345__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__345__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__345__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__345__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__345__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__345__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__345__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__345__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__345__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__345__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__345__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__345__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__345__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__345__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__345__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__345__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__345__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__quantized_delta 
        = __Vfunc_delta32__345__Vfuncout;
    __Vfunc_delta32__350__zero_point = (0xfU & (vlSelf->z[8U] 
                                                >> 0x18U));
    __Vfunc_delta32__350__quantized = (0xfU & (vlSelf->q[8U] 
                                               >> 0x18U));
    __Vfunc_delta32__350__delta = (0x3fU & ((IData)(__Vfunc_delta32__350__quantized) 
                                            - (IData)(__Vfunc_delta32__350__zero_point)));
    __Vfunc_delta32__350__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__350__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__350__delta)))
                                                 : (IData)(__Vfunc_delta32__350__delta)));
    __Vfunc_delta32__350__encoded = (((((((((0U == (IData)(__Vfunc_delta32__350__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__350__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__350__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__350__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__350__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__350__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__350__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__350__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__350__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__350__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__350__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__350__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__350__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__350__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__350__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__350__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__350__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__350__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__350__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__350__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__quantized_delta 
        = __Vfunc_delta32__350__Vfuncout;
    __Vfunc_delta32__355__zero_point = (vlSelf->z[8U] 
                                        >> 0x1cU);
    __Vfunc_delta32__355__quantized = (vlSelf->q[8U] 
                                       >> 0x1cU);
    __Vfunc_delta32__355__delta = (0x3fU & ((IData)(__Vfunc_delta32__355__quantized) 
                                            - (IData)(__Vfunc_delta32__355__zero_point)));
    __Vfunc_delta32__355__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__355__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__355__delta)))
                                                 : (IData)(__Vfunc_delta32__355__delta)));
    __Vfunc_delta32__355__encoded = (((((((((0U == (IData)(__Vfunc_delta32__355__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__355__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__355__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__355__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__355__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__355__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__355__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__355__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__355__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__355__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__355__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__355__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__355__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__355__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__355__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__355__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__355__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__355__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__355__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__355__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__quantized_delta 
        = __Vfunc_delta32__355__Vfuncout;
    __Vfunc_delta32__360__zero_point = (0xfU & vlSelf->z[9U]);
    __Vfunc_delta32__360__quantized = (0xfU & vlSelf->q[9U]);
    __Vfunc_delta32__360__delta = (0x3fU & ((IData)(__Vfunc_delta32__360__quantized) 
                                            - (IData)(__Vfunc_delta32__360__zero_point)));
    __Vfunc_delta32__360__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__360__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__360__delta)))
                                                 : (IData)(__Vfunc_delta32__360__delta)));
    __Vfunc_delta32__360__encoded = (((((((((0U == (IData)(__Vfunc_delta32__360__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__360__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__360__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__360__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__360__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__360__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__360__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__360__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__360__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__360__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__360__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__360__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__360__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__360__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__360__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__360__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__360__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__360__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__360__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__360__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__quantized_delta 
        = __Vfunc_delta32__360__Vfuncout;
    __Vfunc_delta32__365__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 4U));
    __Vfunc_delta32__365__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 4U));
    __Vfunc_delta32__365__delta = (0x3fU & ((IData)(__Vfunc_delta32__365__quantized) 
                                            - (IData)(__Vfunc_delta32__365__zero_point)));
    __Vfunc_delta32__365__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__365__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__365__delta)))
                                                 : (IData)(__Vfunc_delta32__365__delta)));
    __Vfunc_delta32__365__encoded = (((((((((0U == (IData)(__Vfunc_delta32__365__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__365__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__365__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__365__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__365__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__365__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__365__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__365__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__365__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__365__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__365__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__365__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__365__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__365__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__365__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__365__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__365__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__365__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__365__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__365__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__quantized_delta 
        = __Vfunc_delta32__365__Vfuncout;
    __Vfunc_delta32__370__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 8U));
    __Vfunc_delta32__370__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 8U));
    __Vfunc_delta32__370__delta = (0x3fU & ((IData)(__Vfunc_delta32__370__quantized) 
                                            - (IData)(__Vfunc_delta32__370__zero_point)));
    __Vfunc_delta32__370__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__370__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__370__delta)))
                                                 : (IData)(__Vfunc_delta32__370__delta)));
    __Vfunc_delta32__370__encoded = (((((((((0U == (IData)(__Vfunc_delta32__370__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__370__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__370__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__370__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__370__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__370__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__370__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__370__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__370__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__370__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__370__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__370__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__370__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__370__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__370__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__370__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__370__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__370__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__370__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__370__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__quantized_delta 
        = __Vfunc_delta32__370__Vfuncout;
    __Vfunc_delta32__375__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 0xcU));
    __Vfunc_delta32__375__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 0xcU));
    __Vfunc_delta32__375__delta = (0x3fU & ((IData)(__Vfunc_delta32__375__quantized) 
                                            - (IData)(__Vfunc_delta32__375__zero_point)));
    __Vfunc_delta32__375__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__375__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__375__delta)))
                                                 : (IData)(__Vfunc_delta32__375__delta)));
    __Vfunc_delta32__375__encoded = (((((((((0U == (IData)(__Vfunc_delta32__375__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__375__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__375__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__375__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__375__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__375__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__375__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__375__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__375__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__375__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__375__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__375__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__375__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__375__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__375__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__375__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__375__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__375__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__375__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__375__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__quantized_delta 
        = __Vfunc_delta32__375__Vfuncout;
    __Vfunc_delta32__380__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 0x10U));
    __Vfunc_delta32__380__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 0x10U));
    __Vfunc_delta32__380__delta = (0x3fU & ((IData)(__Vfunc_delta32__380__quantized) 
                                            - (IData)(__Vfunc_delta32__380__zero_point)));
    __Vfunc_delta32__380__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__380__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__380__delta)))
                                                 : (IData)(__Vfunc_delta32__380__delta)));
    __Vfunc_delta32__380__encoded = (((((((((0U == (IData)(__Vfunc_delta32__380__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__380__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__380__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__380__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__380__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__380__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__380__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__380__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__380__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__380__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__380__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__380__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__380__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__380__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__380__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__380__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__380__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__380__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__380__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__380__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__quantized_delta 
        = __Vfunc_delta32__380__Vfuncout;
    __Vfunc_delta32__385__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 0x14U));
    __Vfunc_delta32__385__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 0x14U));
    __Vfunc_delta32__385__delta = (0x3fU & ((IData)(__Vfunc_delta32__385__quantized) 
                                            - (IData)(__Vfunc_delta32__385__zero_point)));
    __Vfunc_delta32__385__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__385__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__385__delta)))
                                                 : (IData)(__Vfunc_delta32__385__delta)));
    __Vfunc_delta32__385__encoded = (((((((((0U == (IData)(__Vfunc_delta32__385__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__385__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__385__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__385__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__385__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__385__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__385__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__385__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__385__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__385__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__385__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__385__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__385__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__385__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__385__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__385__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__385__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__385__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__385__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__385__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__quantized_delta 
        = __Vfunc_delta32__385__Vfuncout;
    __Vfunc_delta32__390__zero_point = (0xfU & (vlSelf->z[9U] 
                                                >> 0x18U));
    __Vfunc_delta32__390__quantized = (0xfU & (vlSelf->q[9U] 
                                               >> 0x18U));
    __Vfunc_delta32__390__delta = (0x3fU & ((IData)(__Vfunc_delta32__390__quantized) 
                                            - (IData)(__Vfunc_delta32__390__zero_point)));
    __Vfunc_delta32__390__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__390__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__390__delta)))
                                                 : (IData)(__Vfunc_delta32__390__delta)));
    __Vfunc_delta32__390__encoded = (((((((((0U == (IData)(__Vfunc_delta32__390__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__390__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__390__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__390__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__390__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__390__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__390__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__390__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__390__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__390__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__390__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__390__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__390__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__390__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__390__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__390__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__390__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__390__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__390__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__390__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__quantized_delta 
        = __Vfunc_delta32__390__Vfuncout;
    __Vfunc_delta32__395__zero_point = (vlSelf->z[9U] 
                                        >> 0x1cU);
    __Vfunc_delta32__395__quantized = (vlSelf->q[9U] 
                                       >> 0x1cU);
    __Vfunc_delta32__395__delta = (0x3fU & ((IData)(__Vfunc_delta32__395__quantized) 
                                            - (IData)(__Vfunc_delta32__395__zero_point)));
    __Vfunc_delta32__395__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__395__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__395__delta)))
                                                 : (IData)(__Vfunc_delta32__395__delta)));
    __Vfunc_delta32__395__encoded = (((((((((0U == (IData)(__Vfunc_delta32__395__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__395__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__395__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__395__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__395__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__395__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__395__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__395__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__395__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__395__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__395__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__395__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__395__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__395__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__395__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__395__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__395__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__395__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__395__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__395__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__quantized_delta 
        = __Vfunc_delta32__395__Vfuncout;
    __Vfunc_delta32__400__zero_point = (0xfU & vlSelf->z[0xaU]);
    __Vfunc_delta32__400__quantized = (0xfU & vlSelf->q[0xaU]);
    vlSelf->__Vfunc_delta32__400__delta = (0x3fU & 
                                           ((IData)(__Vfunc_delta32__400__quantized) 
                                            - (IData)(__Vfunc_delta32__400__zero_point)));
    __Vfunc_delta32__400__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(vlSelf->__Vfunc_delta32__400__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(vlSelf->__Vfunc_delta32__400__delta)))
                                                 : (IData)(vlSelf->__Vfunc_delta32__400__delta)));
    vlSelf->__Vfunc_delta32__400__encoded = (((((((
                                                   ((0U 
                                                     == (IData)(__Vfunc_delta32__400__magnitude)) 
                                                    | (1U 
                                                       == (IData)(__Vfunc_delta32__400__magnitude))) 
                                                   | (2U 
                                                      == (IData)(__Vfunc_delta32__400__magnitude))) 
                                                  | (3U 
                                                     == (IData)(__Vfunc_delta32__400__magnitude))) 
                                                 | (4U 
                                                    == (IData)(__Vfunc_delta32__400__magnitude))) 
                                                | (5U 
                                                   == (IData)(__Vfunc_delta32__400__magnitude))) 
                                               | (6U 
                                                  == (IData)(__Vfunc_delta32__400__magnitude))) 
                                              | (7U 
                                                 == (IData)(__Vfunc_delta32__400__magnitude)))
                                              ? ((0U 
                                                  == (IData)(__Vfunc_delta32__400__magnitude))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(__Vfunc_delta32__400__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__400__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__400__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__400__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__400__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__400__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                              : ((8U 
                                                  == (IData)(__Vfunc_delta32__400__magnitude))
                                                  ? 0x41000000U
                                                  : 
                                                 ((9U 
                                                   == (IData)(__Vfunc_delta32__400__magnitude))
                                                   ? 0x41100000U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(__Vfunc_delta32__400__magnitude))
                                                    ? 0x41200000U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_delta32__400__magnitude))
                                                     ? 0x41300000U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_delta32__400__magnitude))
                                                      ? 0x41400000U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_delta32__400__magnitude))
                                                       ? 0x41500000U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_delta32__400__magnitude))
                                                        ? 0x41600000U
                                                        : 0x41700000U))))))));
    __Vfunc_delta32__400__Vfuncout = ((0x80000000U 
                                       & ((IData)(vlSelf->__Vfunc_delta32__400__delta) 
                                          << 0x1aU)) 
                                      | vlSelf->__Vfunc_delta32__400__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__quantized_delta 
        = __Vfunc_delta32__400__Vfuncout;
    __Vfunc_delta32__405__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 4U));
    __Vfunc_delta32__405__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 4U));
    __Vfunc_delta32__405__delta = (0x3fU & ((IData)(__Vfunc_delta32__405__quantized) 
                                            - (IData)(__Vfunc_delta32__405__zero_point)));
    __Vfunc_delta32__405__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__405__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__405__delta)))
                                                 : (IData)(__Vfunc_delta32__405__delta)));
    __Vfunc_delta32__405__encoded = (((((((((0U == (IData)(__Vfunc_delta32__405__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__405__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__405__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__405__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__405__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__405__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__405__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__405__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__405__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__405__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__405__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__405__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__405__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__405__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__405__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__405__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__405__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__405__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__405__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__405__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__quantized_delta 
        = __Vfunc_delta32__405__Vfuncout;
    __Vfunc_delta32__410__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 8U));
    __Vfunc_delta32__410__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 8U));
    __Vfunc_delta32__410__delta = (0x3fU & ((IData)(__Vfunc_delta32__410__quantized) 
                                            - (IData)(__Vfunc_delta32__410__zero_point)));
    __Vfunc_delta32__410__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__410__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__410__delta)))
                                                 : (IData)(__Vfunc_delta32__410__delta)));
    __Vfunc_delta32__410__encoded = (((((((((0U == (IData)(__Vfunc_delta32__410__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__410__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__410__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__410__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__410__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__410__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__410__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__410__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__410__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__410__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__410__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__410__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__410__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__410__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__410__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__410__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__410__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__410__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__410__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__410__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__quantized_delta 
        = __Vfunc_delta32__410__Vfuncout;
    __Vfunc_delta32__415__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 0xcU));
    __Vfunc_delta32__415__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 0xcU));
    __Vfunc_delta32__415__delta = (0x3fU & ((IData)(__Vfunc_delta32__415__quantized) 
                                            - (IData)(__Vfunc_delta32__415__zero_point)));
    __Vfunc_delta32__415__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__415__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__415__delta)))
                                                 : (IData)(__Vfunc_delta32__415__delta)));
    __Vfunc_delta32__415__encoded = (((((((((0U == (IData)(__Vfunc_delta32__415__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__415__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__415__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__415__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__415__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__415__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__415__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__415__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__415__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__415__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__415__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__415__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__415__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__415__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__415__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__415__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__415__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__415__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__415__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__415__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__quantized_delta 
        = __Vfunc_delta32__415__Vfuncout;
    __Vfunc_delta32__420__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 0x10U));
    __Vfunc_delta32__420__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 0x10U));
    __Vfunc_delta32__420__delta = (0x3fU & ((IData)(__Vfunc_delta32__420__quantized) 
                                            - (IData)(__Vfunc_delta32__420__zero_point)));
    __Vfunc_delta32__420__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__420__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__420__delta)))
                                                 : (IData)(__Vfunc_delta32__420__delta)));
    __Vfunc_delta32__420__encoded = (((((((((0U == (IData)(__Vfunc_delta32__420__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__420__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__420__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__420__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__420__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__420__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__420__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__420__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__420__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__420__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__420__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__420__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__420__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__420__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__420__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__420__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__420__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__420__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__420__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__420__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__quantized_delta 
        = __Vfunc_delta32__420__Vfuncout;
    __Vfunc_delta32__425__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 0x14U));
    __Vfunc_delta32__425__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 0x14U));
    __Vfunc_delta32__425__delta = (0x3fU & ((IData)(__Vfunc_delta32__425__quantized) 
                                            - (IData)(__Vfunc_delta32__425__zero_point)));
    __Vfunc_delta32__425__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__425__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__425__delta)))
                                                 : (IData)(__Vfunc_delta32__425__delta)));
    __Vfunc_delta32__425__encoded = (((((((((0U == (IData)(__Vfunc_delta32__425__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__425__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__425__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__425__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__425__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__425__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__425__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__425__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__425__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__425__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__425__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__425__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__425__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__425__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__425__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__425__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__425__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__425__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__425__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__425__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__quantized_delta 
        = __Vfunc_delta32__425__Vfuncout;
    __Vfunc_delta32__430__zero_point = (0xfU & (vlSelf->z[0xaU] 
                                                >> 0x18U));
    __Vfunc_delta32__430__quantized = (0xfU & (vlSelf->q[0xaU] 
                                               >> 0x18U));
    __Vfunc_delta32__430__delta = (0x3fU & ((IData)(__Vfunc_delta32__430__quantized) 
                                            - (IData)(__Vfunc_delta32__430__zero_point)));
    __Vfunc_delta32__430__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__430__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__430__delta)))
                                                 : (IData)(__Vfunc_delta32__430__delta)));
    __Vfunc_delta32__430__encoded = (((((((((0U == (IData)(__Vfunc_delta32__430__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__430__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__430__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__430__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__430__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__430__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__430__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__430__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__430__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__430__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__430__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__430__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__430__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__430__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__430__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__430__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__430__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__430__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__430__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__430__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__quantized_delta 
        = __Vfunc_delta32__430__Vfuncout;
    __Vfunc_delta32__435__zero_point = (vlSelf->z[0xaU] 
                                        >> 0x1cU);
    __Vfunc_delta32__435__quantized = (vlSelf->q[0xaU] 
                                       >> 0x1cU);
    __Vfunc_delta32__435__delta = (0x3fU & ((IData)(__Vfunc_delta32__435__quantized) 
                                            - (IData)(__Vfunc_delta32__435__zero_point)));
    __Vfunc_delta32__435__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__435__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__435__delta)))
                                                 : (IData)(__Vfunc_delta32__435__delta)));
    __Vfunc_delta32__435__encoded = (((((((((0U == (IData)(__Vfunc_delta32__435__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__435__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__435__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__435__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__435__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__435__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__435__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__435__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__435__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__435__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__435__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__435__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__435__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__435__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__435__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__435__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__435__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__435__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__435__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__435__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__quantized_delta 
        = __Vfunc_delta32__435__Vfuncout;
    __Vfunc_delta32__440__zero_point = (0xfU & vlSelf->z[0xbU]);
    __Vfunc_delta32__440__quantized = (0xfU & vlSelf->q[0xbU]);
    __Vfunc_delta32__440__delta = (0x3fU & ((IData)(__Vfunc_delta32__440__quantized) 
                                            - (IData)(__Vfunc_delta32__440__zero_point)));
    __Vfunc_delta32__440__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__440__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__440__delta)))
                                                 : (IData)(__Vfunc_delta32__440__delta)));
    __Vfunc_delta32__440__encoded = (((((((((0U == (IData)(__Vfunc_delta32__440__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__440__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__440__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__440__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__440__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__440__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__440__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__440__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__440__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__440__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__440__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__440__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__440__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__440__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__440__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__440__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__440__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__440__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__440__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__440__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__quantized_delta 
        = __Vfunc_delta32__440__Vfuncout;
    __Vfunc_delta32__445__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 4U));
    __Vfunc_delta32__445__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 4U));
    __Vfunc_delta32__445__delta = (0x3fU & ((IData)(__Vfunc_delta32__445__quantized) 
                                            - (IData)(__Vfunc_delta32__445__zero_point)));
    __Vfunc_delta32__445__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__445__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__445__delta)))
                                                 : (IData)(__Vfunc_delta32__445__delta)));
    __Vfunc_delta32__445__encoded = (((((((((0U == (IData)(__Vfunc_delta32__445__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__445__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__445__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__445__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__445__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__445__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__445__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__445__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__445__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__445__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__445__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__445__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__445__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__445__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__445__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__445__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__445__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__445__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__445__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__445__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__quantized_delta 
        = __Vfunc_delta32__445__Vfuncout;
    __Vfunc_delta32__450__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 8U));
    __Vfunc_delta32__450__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 8U));
    __Vfunc_delta32__450__delta = (0x3fU & ((IData)(__Vfunc_delta32__450__quantized) 
                                            - (IData)(__Vfunc_delta32__450__zero_point)));
    __Vfunc_delta32__450__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__450__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__450__delta)))
                                                 : (IData)(__Vfunc_delta32__450__delta)));
    __Vfunc_delta32__450__encoded = (((((((((0U == (IData)(__Vfunc_delta32__450__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__450__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__450__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__450__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__450__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__450__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__450__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__450__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__450__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__450__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__450__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__450__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__450__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__450__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__450__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__450__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__450__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__450__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__450__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__450__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__quantized_delta 
        = __Vfunc_delta32__450__Vfuncout;
    __Vfunc_delta32__455__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 0xcU));
    __Vfunc_delta32__455__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 0xcU));
    __Vfunc_delta32__455__delta = (0x3fU & ((IData)(__Vfunc_delta32__455__quantized) 
                                            - (IData)(__Vfunc_delta32__455__zero_point)));
    __Vfunc_delta32__455__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__455__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__455__delta)))
                                                 : (IData)(__Vfunc_delta32__455__delta)));
    __Vfunc_delta32__455__encoded = (((((((((0U == (IData)(__Vfunc_delta32__455__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__455__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__455__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__455__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__455__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__455__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__455__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__455__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__455__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__455__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__455__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__455__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__455__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__455__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__455__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__455__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__455__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__455__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__455__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__455__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__quantized_delta 
        = __Vfunc_delta32__455__Vfuncout;
    __Vfunc_delta32__460__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 0x10U));
    __Vfunc_delta32__460__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 0x10U));
    __Vfunc_delta32__460__delta = (0x3fU & ((IData)(__Vfunc_delta32__460__quantized) 
                                            - (IData)(__Vfunc_delta32__460__zero_point)));
    __Vfunc_delta32__460__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__460__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__460__delta)))
                                                 : (IData)(__Vfunc_delta32__460__delta)));
    __Vfunc_delta32__460__encoded = (((((((((0U == (IData)(__Vfunc_delta32__460__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__460__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__460__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__460__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__460__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__460__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__460__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__460__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__460__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__460__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__460__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__460__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__460__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__460__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__460__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__460__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__460__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__460__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__460__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__460__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__quantized_delta 
        = __Vfunc_delta32__460__Vfuncout;
    __Vfunc_delta32__465__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 0x14U));
    __Vfunc_delta32__465__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 0x14U));
    __Vfunc_delta32__465__delta = (0x3fU & ((IData)(__Vfunc_delta32__465__quantized) 
                                            - (IData)(__Vfunc_delta32__465__zero_point)));
    __Vfunc_delta32__465__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__465__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__465__delta)))
                                                 : (IData)(__Vfunc_delta32__465__delta)));
    __Vfunc_delta32__465__encoded = (((((((((0U == (IData)(__Vfunc_delta32__465__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__465__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__465__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__465__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__465__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__465__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__465__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__465__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__465__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__465__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__465__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__465__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__465__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__465__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__465__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__465__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__465__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__465__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__465__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__465__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__quantized_delta 
        = __Vfunc_delta32__465__Vfuncout;
    __Vfunc_delta32__470__zero_point = (0xfU & (vlSelf->z[0xbU] 
                                                >> 0x18U));
    __Vfunc_delta32__470__quantized = (0xfU & (vlSelf->q[0xbU] 
                                               >> 0x18U));
    __Vfunc_delta32__470__delta = (0x3fU & ((IData)(__Vfunc_delta32__470__quantized) 
                                            - (IData)(__Vfunc_delta32__470__zero_point)));
    __Vfunc_delta32__470__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__470__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__470__delta)))
                                                 : (IData)(__Vfunc_delta32__470__delta)));
    __Vfunc_delta32__470__encoded = (((((((((0U == (IData)(__Vfunc_delta32__470__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__470__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__470__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__470__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__470__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__470__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__470__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__470__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__470__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__470__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__470__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__470__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__470__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__470__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__470__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__470__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__470__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__470__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__470__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__470__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__quantized_delta 
        = __Vfunc_delta32__470__Vfuncout;
    __Vfunc_delta32__475__zero_point = (vlSelf->z[0xbU] 
                                        >> 0x1cU);
    __Vfunc_delta32__475__quantized = (vlSelf->q[0xbU] 
                                       >> 0x1cU);
    __Vfunc_delta32__475__delta = (0x3fU & ((IData)(__Vfunc_delta32__475__quantized) 
                                            - (IData)(__Vfunc_delta32__475__zero_point)));
    __Vfunc_delta32__475__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__475__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__475__delta)))
                                                 : (IData)(__Vfunc_delta32__475__delta)));
    __Vfunc_delta32__475__encoded = (((((((((0U == (IData)(__Vfunc_delta32__475__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__475__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__475__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__475__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__475__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__475__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__475__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__475__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__475__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__475__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__475__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__475__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__475__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__475__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__475__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__475__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__475__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__475__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__475__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__475__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__quantized_delta 
        = __Vfunc_delta32__475__Vfuncout;
    __Vfunc_delta32__480__zero_point = (0xfU & vlSelf->z[0xcU]);
    __Vfunc_delta32__480__quantized = (0xfU & vlSelf->q[0xcU]);
    __Vfunc_delta32__480__delta = (0x3fU & ((IData)(__Vfunc_delta32__480__quantized) 
                                            - (IData)(__Vfunc_delta32__480__zero_point)));
    __Vfunc_delta32__480__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__480__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__480__delta)))
                                                 : (IData)(__Vfunc_delta32__480__delta)));
    __Vfunc_delta32__480__encoded = (((((((((0U == (IData)(__Vfunc_delta32__480__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__480__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__480__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__480__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__480__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__480__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__480__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__480__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__480__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__480__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__480__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__480__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__480__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__480__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__480__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__480__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__480__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__480__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__480__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__480__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__quantized_delta 
        = __Vfunc_delta32__480__Vfuncout;
    __Vfunc_delta32__485__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 4U));
    __Vfunc_delta32__485__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 4U));
    __Vfunc_delta32__485__delta = (0x3fU & ((IData)(__Vfunc_delta32__485__quantized) 
                                            - (IData)(__Vfunc_delta32__485__zero_point)));
    __Vfunc_delta32__485__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__485__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__485__delta)))
                                                 : (IData)(__Vfunc_delta32__485__delta)));
    __Vfunc_delta32__485__encoded = (((((((((0U == (IData)(__Vfunc_delta32__485__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__485__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__485__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__485__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__485__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__485__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__485__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__485__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__485__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__485__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__485__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__485__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__485__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__485__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__485__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__485__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__485__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__485__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__485__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__485__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__quantized_delta 
        = __Vfunc_delta32__485__Vfuncout;
    __Vfunc_delta32__490__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 8U));
    __Vfunc_delta32__490__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 8U));
    __Vfunc_delta32__490__delta = (0x3fU & ((IData)(__Vfunc_delta32__490__quantized) 
                                            - (IData)(__Vfunc_delta32__490__zero_point)));
    __Vfunc_delta32__490__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__490__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__490__delta)))
                                                 : (IData)(__Vfunc_delta32__490__delta)));
    __Vfunc_delta32__490__encoded = (((((((((0U == (IData)(__Vfunc_delta32__490__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__490__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__490__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__490__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__490__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__490__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__490__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__490__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__490__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__490__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__490__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__490__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__490__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__490__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__490__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__490__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__490__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__490__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__490__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__490__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__quantized_delta 
        = __Vfunc_delta32__490__Vfuncout;
    __Vfunc_delta32__495__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 0xcU));
    __Vfunc_delta32__495__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 0xcU));
    __Vfunc_delta32__495__delta = (0x3fU & ((IData)(__Vfunc_delta32__495__quantized) 
                                            - (IData)(__Vfunc_delta32__495__zero_point)));
    __Vfunc_delta32__495__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__495__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__495__delta)))
                                                 : (IData)(__Vfunc_delta32__495__delta)));
    __Vfunc_delta32__495__encoded = (((((((((0U == (IData)(__Vfunc_delta32__495__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__495__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__495__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__495__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__495__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__495__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__495__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__495__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__495__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__495__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__495__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__495__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__495__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__495__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__495__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__495__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__495__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__495__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__495__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__495__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__quantized_delta 
        = __Vfunc_delta32__495__Vfuncout;
    __Vfunc_delta32__500__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 0x10U));
    __Vfunc_delta32__500__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 0x10U));
    __Vfunc_delta32__500__delta = (0x3fU & ((IData)(__Vfunc_delta32__500__quantized) 
                                            - (IData)(__Vfunc_delta32__500__zero_point)));
    __Vfunc_delta32__500__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__500__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__500__delta)))
                                                 : (IData)(__Vfunc_delta32__500__delta)));
    __Vfunc_delta32__500__encoded = (((((((((0U == (IData)(__Vfunc_delta32__500__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__500__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__500__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__500__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__500__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__500__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__500__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__500__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__500__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__500__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__500__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__500__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__500__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__500__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__500__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__500__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__500__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__500__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__500__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__500__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__quantized_delta 
        = __Vfunc_delta32__500__Vfuncout;
    __Vfunc_delta32__505__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 0x14U));
    __Vfunc_delta32__505__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 0x14U));
    __Vfunc_delta32__505__delta = (0x3fU & ((IData)(__Vfunc_delta32__505__quantized) 
                                            - (IData)(__Vfunc_delta32__505__zero_point)));
    __Vfunc_delta32__505__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(__Vfunc_delta32__505__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(__Vfunc_delta32__505__delta)))
                                                 : (IData)(__Vfunc_delta32__505__delta)));
    __Vfunc_delta32__505__encoded = (((((((((0U == (IData)(__Vfunc_delta32__505__magnitude)) 
                                            | (1U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                           | (2U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                          | (3U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                         | (4U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                        | (5U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                       | (6U == (IData)(__Vfunc_delta32__505__magnitude))) 
                                      | (7U == (IData)(__Vfunc_delta32__505__magnitude)))
                                      ? ((0U == (IData)(__Vfunc_delta32__505__magnitude))
                                          ? 0U : ((1U 
                                                   == (IData)(__Vfunc_delta32__505__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__505__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__505__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__505__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__505__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__505__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                      : ((8U == (IData)(__Vfunc_delta32__505__magnitude))
                                          ? 0x41000000U
                                          : ((9U == (IData)(__Vfunc_delta32__505__magnitude))
                                              ? 0x41100000U
                                              : ((0xaU 
                                                  == (IData)(__Vfunc_delta32__505__magnitude))
                                                  ? 0x41200000U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__Vfunc_delta32__505__magnitude))
                                                   ? 0x41300000U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(__Vfunc_delta32__505__magnitude))
                                                    ? 0x41400000U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(__Vfunc_delta32__505__magnitude))
                                                     ? 0x41500000U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(__Vfunc_delta32__505__magnitude))
                                                      ? 0x41600000U
                                                      : 0x41700000U))))))));
    __Vfunc_delta32__505__Vfuncout = ((0x80000000U 
                                       & ((IData)(__Vfunc_delta32__505__delta) 
                                          << 0x1aU)) 
                                      | __Vfunc_delta32__505__encoded);
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__quantized_delta 
        = __Vfunc_delta32__505__Vfuncout;
    __Vfunc_delta32__510__zero_point = (0xfU & (vlSelf->z[0xcU] 
                                                >> 0x18U));
    __Vfunc_delta32__510__quantized = (0xfU & (vlSelf->q[0xcU] 
                                               >> 0x18U));
    vlSelf->__Vfunc_delta32__510__delta = (0x3fU & 
                                           ((IData)(__Vfunc_delta32__510__quantized) 
                                            - (IData)(__Vfunc_delta32__510__zero_point)));
    __Vfunc_delta32__510__magnitude = (0x1fU & ((0x20U 
                                                 & (IData)(vlSelf->__Vfunc_delta32__510__delta))
                                                 ? 
                                                (0x3fU 
                                                 & (- (IData)(vlSelf->__Vfunc_delta32__510__delta)))
                                                 : (IData)(vlSelf->__Vfunc_delta32__510__delta)));
    vlSelf->__Vfunc_delta32__510__encoded = (((((((
                                                   ((0U 
                                                     == (IData)(__Vfunc_delta32__510__magnitude)) 
                                                    | (1U 
                                                       == (IData)(__Vfunc_delta32__510__magnitude))) 
                                                   | (2U 
                                                      == (IData)(__Vfunc_delta32__510__magnitude))) 
                                                  | (3U 
                                                     == (IData)(__Vfunc_delta32__510__magnitude))) 
                                                 | (4U 
                                                    == (IData)(__Vfunc_delta32__510__magnitude))) 
                                                | (5U 
                                                   == (IData)(__Vfunc_delta32__510__magnitude))) 
                                               | (6U 
                                                  == (IData)(__Vfunc_delta32__510__magnitude))) 
                                              | (7U 
                                                 == (IData)(__Vfunc_delta32__510__magnitude)))
                                              ? ((0U 
                                                  == (IData)(__Vfunc_delta32__510__magnitude))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(__Vfunc_delta32__510__magnitude))
                                                   ? 0x3f800000U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_delta32__510__magnitude))
                                                    ? 0x40000000U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_delta32__510__magnitude))
                                                     ? 0x40400000U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_delta32__510__magnitude))
                                                      ? 0x40800000U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_delta32__510__magnitude))
                                                       ? 0x40a00000U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_delta32__510__magnitude))
                                                        ? 0x40c00000U
                                                        : 0x40e00000U)))))))
                                              : ((8U 
                                                  == (IData)(__Vfunc_delta32__510__magnitude))
                                                  ? 0x41000000U
                                                  : 
                                                 ((9U 
                                                   == (IData)(__Vfunc_delta32__510__magnitude))
                                                   ? 0x41100000U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(__Vfunc_delta32__510__magnitude))
                                                    ? 0x41200000U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(__Vfunc_delta32__510__magnitude))
                                                     ? 0x41300000U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(__Vfunc_delta32__510__magnitude))
                                                      ? 0x41400000U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(__Vfunc_delta32__510__magnitude))
                                                       ? 0x41500000U
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(__Vfunc_delta32__510__magnitude))
                                                        ? 0x41600000U
                                                        : 0x41700000U))))))));
}
