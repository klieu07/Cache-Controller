// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_set_associative_cache.h for the primary calling header

#include "Vtb_set_associative_cache__pch.h"

void Vtb_set_associative_cache___024root___timing_ready(Vtb_set_associative_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_set_associative_cache___024root___eval_static(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_static\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_set_associative_cache__DOT__do_op__Vstatic__was_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6869885035311099615ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0 
        = vlSelfRef.tb_set_associative_cache__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__rst_n__0 
        = vlSelfRef.tb_set_associative_cache__DOT__rst_n;
    Vtb_set_associative_cache___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_set_associative_cache___024root___eval_final(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_final\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_set_associative_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_set_associative_cache___024root___eval_phase__stl(Vtb_set_associative_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_set_associative_cache___024root___eval_settle(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_settle\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_set_associative_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_set_associative_cache.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_set_associative_cache___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_set_associative_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_set_associative_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_set_associative_cache___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_set_associative_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_set_associative_cache___024root___stl_sequent__TOP__0(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___stl_sequent__TOP__0\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_written
        [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                         >> 4U))]) {
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][0U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[1U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][1U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[2U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][2U];
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[3U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched 
                             >> 4U))][3U];
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched;
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[1U] 
            = ((IData)(4U) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[2U] 
            = ((IData)(8U) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_set_associative_cache__DOT__mem_rdata[3U] 
            = ((IData)(0x0000000cU) + vlSelfRef.tb_set_associative_cache__DOT__mem__DOT__addr_latched);
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 0U;
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    } else {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 0U;
    }
    if ((vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__tag_array
                                 [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                     >> 7U)))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__lru_counter
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                         [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
                          [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_set_associative_cache__DOT__cpu_req)));
    vlSelfRef.tb_set_associative_cache__DOT__cpu_rdata 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__hit_way_r]
        [(3U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 2U))];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__data_array
        [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__valid_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__dirty_array
           [(7U & (vlSelfRef.tb_set_associative_cache__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_set_associative_cache__DOT__dut__DOT__victim_way_r]);
}

VL_ATTR_COLD bool Vtb_set_associative_cache___024root___eval_phase__stl(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___eval_phase__stl\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_set_associative_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_set_associative_cache___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_set_associative_cache___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_set_associative_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_set_associative_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_set_associative_cache___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_set_associative_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_set_associative_cache.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_set_associative_cache___024root___ctor_var_reset(Vtb_set_associative_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_set_associative_cache___024root___ctor_var_reset\n"); );
    Vtb_set_associative_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_set_associative_cache__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17130237692322729564ull);
    vlSelf->tb_set_associative_cache__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15594775553410679678ull);
    vlSelf->tb_set_associative_cache__DOT__cpu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17794661304302015966ull);
    vlSelf->tb_set_associative_cache__DOT__cpu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13390294361613337311ull);
    vlSelf->tb_set_associative_cache__DOT__cpu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11717118158479852036ull);
    vlSelf->tb_set_associative_cache__DOT__cpu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4137576536595412750ull);
    vlSelf->tb_set_associative_cache__DOT__cpu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6478422813918703633ull);
    vlSelf->tb_set_associative_cache__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16087508928331503976ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_set_associative_cache__DOT__mem_rdata, __VscopeHash, 12094205239803692638ull);
    vlSelf->tb_set_associative_cache__DOT__mem_wr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4279567837216962293ull);
    vlSelf->tb_set_associative_cache__DOT__hits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3122982142680497685ull);
    vlSelf->tb_set_associative_cache__DOT__misses = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9784245877362149438ull);
    vlSelf->tb_set_associative_cache__DOT__do_op__Vstatic__rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15529190911846617893ull);
    vlSelf->tb_set_associative_cache__DOT__do_op__Vstatic__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7598753348866107870ull);
    vlSelf->tb_set_associative_cache__DOT__do_op__Vstatic__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3801393681396006731ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_set_associative_cache__DOT__do_op__Vstatic__label, __VscopeHash, 5776512395438774790ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__cpu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10026968047052080692ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_set_associative_cache__DOT__dut__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1353040765967857241ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_set_associative_cache__DOT__dut__DOT__dirty_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15428689955673881105ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_set_associative_cache__DOT__dut__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2787770842917617105ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->tb_set_associative_cache__DOT__dut__DOT__data_array[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14406233800831204358ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_set_associative_cache__DOT__dut__DOT__lru_counter[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17757738016491952471ull);
        }
    }
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__hit_comb_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10065074164825763076ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__hit_way_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1347822516816249849ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__victim_way_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7430711359566101801ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__victim_is_invalid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11344612093795837513ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__need_writeback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2208213894285982009ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1529082536732232255ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_set_associative_cache__DOT__dut__DOT__mem_wr_data_r, __VscopeHash, 7677177325765251057ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__si = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16384022697226262979ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__wi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17036634245907757207ull);
    vlSelf->tb_set_associative_cache__DOT__dut__DOT__wj = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8137082666148518284ull);
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16171564062378693677ull);
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__op_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15975242305083873317ull);
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 557494486491527025ull);
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__addr_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1477175533479966926ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_set_associative_cache__DOT__mem__DOT__wdata_latched, __VscopeHash, 3671394985689094541ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_set_associative_cache__DOT__mem__DOT__backing_written[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8243942758514239644ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_set_associative_cache__DOT__mem__DOT__backing_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8157837145725919809ull);
        }
    }
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__li = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11877835675903365470ull);
    vlSelf->tb_set_associative_cache__DOT__mem__DOT__wj = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2899268240041340658ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_set_associative_cache__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
