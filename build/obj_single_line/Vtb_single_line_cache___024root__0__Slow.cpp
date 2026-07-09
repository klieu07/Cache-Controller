// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_line_cache.h for the primary calling header

#include "Vtb_single_line_cache__pch.h"

void Vtb_single_line_cache___024root___timing_ready(Vtb_single_line_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_single_line_cache___024root___eval_static(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_static\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_single_line_cache__DOT__errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0 
        = vlSelfRef.tb_single_line_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__rst_n__0 
        = vlSelfRef.tb_single_line_cache__DOT__rst_n;
    Vtb_single_line_cache___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_single_line_cache___024root___eval_final(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_final\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_line_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_single_line_cache___024root___eval_phase__stl(Vtb_single_line_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_single_line_cache___024root___eval_settle(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_settle\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_single_line_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_single_line_cache.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_single_line_cache___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_single_line_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_line_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_single_line_cache___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_single_line_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool Vtb_single_line_cache___024root___eval_phase__stl(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_phase__stl\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_single_line_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_single_line_cache___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit 
                        = ((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__valid) 
                           & (vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_tag 
                              == (vlSelfRef.tb_single_line_cache__DOT__addr 
                                  >> 2U)));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_single_line_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_line_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_single_line_cache___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_single_line_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_single_line_cache.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_single_line_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_single_line_cache___024root___ctor_var_reset(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___ctor_var_reset\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_single_line_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9673504177432914622ull);
    vlSelf->tb_single_line_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7134384740515822124ull);
    vlSelf->tb_single_line_cache__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9209237677945758999ull);
    vlSelf->tb_single_line_cache__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10557764759497068266ull);
    vlSelf->tb_single_line_cache__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4341519822576872464ull);
    vlSelf->tb_single_line_cache__DOT__dut__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746838397438436488ull);
    vlSelf->tb_single_line_cache__DOT__dut__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14487080095276285844ull);
    vlSelf->tb_single_line_cache__DOT__dut__DOT__stored_tag = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 3399172733634201908ull);
    vlSelf->tb_single_line_cache__DOT__dut__DOT__stored_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6911436019486212250ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
