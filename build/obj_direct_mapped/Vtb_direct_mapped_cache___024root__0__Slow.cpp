// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direct_mapped_cache.h for the primary calling header

#include "Vtb_direct_mapped_cache__pch.h"

void Vtb_direct_mapped_cache___024root___timing_ready(Vtb_direct_mapped_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___eval_static(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_static\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15228885284133920427ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0 
        = vlSelfRef.tb_direct_mapped_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__rst_n__0 
        = vlSelfRef.tb_direct_mapped_cache__DOT__rst_n;
    Vtb_direct_mapped_cache___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___eval_final(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_final\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_direct_mapped_cache___024root___eval_phase__stl(Vtb_direct_mapped_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___eval_settle(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_settle\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_direct_mapped_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_direct_mapped_cache.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_direct_mapped_cache___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_direct_mapped_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_direct_mapped_cache___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_direct_mapped_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_direct_mapped_cache___024root___eval_phase__stl(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___eval_phase__stl\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_direct_mapped_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_direct_mapped_cache___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[0U] 
                        = vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched;
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[1U] 
                        = (IData)((((QData)((IData)(
                                                    ((IData)(8U) 
                                                     + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((IData)(4U) 
                                                      + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched)))));
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[2U] 
                        = (IData)(((((QData)((IData)(
                                                     ((IData)(8U) 
                                                      + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched)))) 
                                   >> 0x00000020U));
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata[3U] 
                        = ((IData)(0x0000000cU) + vlSelfRef.tb_direct_mapped_cache__DOT__mem__DOT__addr_latched);
                    vlSelfRef.tb_direct_mapped_cache__DOT__cpu_rdata 
                        = vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__data_array
                        [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                >> 4U))][(3U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                >> 2U))];
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb 
                        = (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__valid_array
                           [(7U & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                   >> 4U))] & (vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__tag_array
                                               [(7U 
                                                 & (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                    >> 4U))] 
                                               == (vlSelfRef.tb_direct_mapped_cache__DOT__cpu_addr 
                                                   >> 7U)));
                    vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall 
                        = ((IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__state) 
                           | ((~ (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__dut__DOT__hit_comb)) 
                              & (IData)(vlSelfRef.tb_direct_mapped_cache__DOT__cpu_req)));
                }
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_direct_mapped_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_direct_mapped_cache___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_direct_mapped_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_direct_mapped_cache.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_direct_mapped_cache___024root___ctor_var_reset(Vtb_direct_mapped_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direct_mapped_cache___024root___ctor_var_reset\n"); );
    Vtb_direct_mapped_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_direct_mapped_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14764604218249625583ull);
    vlSelf->tb_direct_mapped_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082253699327799285ull);
    vlSelf->tb_direct_mapped_cache__DOT__cpu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5147554617972598983ull);
    vlSelf->tb_direct_mapped_cache__DOT__cpu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17298149478151570723ull);
    vlSelf->tb_direct_mapped_cache__DOT__cpu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1910246857090442435ull);
    vlSelf->tb_direct_mapped_cache__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707500654378693487ull);
    vlSelf->tb_direct_mapped_cache__DOT__hits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 321631094885947753ull);
    vlSelf->tb_direct_mapped_cache__DOT__misses = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6631396985067754509ull);
    vlSelf->tb_direct_mapped_cache__DOT__do_read__Vstatic__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8026489533030672053ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_direct_mapped_cache__DOT__do_read__Vstatic__label, __VscopeHash, 15861520968461463170ull);
    vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 808524068063467276ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata, __VscopeHash, 4852837526298832616ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__valid_array[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13925509838261328819ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__tag_array[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5563750490305463947ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__data_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17349404558837383006ull);
        }
    }
    vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 347184748900441480ull);
    vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__hit_comb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1177319560979550917ull);
    vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16725216742669708855ull);
    vlSelf->tb_direct_mapped_cache__DOT__dut__DOT__w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4073207035354369249ull);
    vlSelf->tb_direct_mapped_cache__DOT__mem__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7383581463817407650ull);
    vlSelf->tb_direct_mapped_cache__DOT__mem__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16004186312193656574ull);
    vlSelf->tb_direct_mapped_cache__DOT__mem__DOT__addr_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14378518224658142131ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
