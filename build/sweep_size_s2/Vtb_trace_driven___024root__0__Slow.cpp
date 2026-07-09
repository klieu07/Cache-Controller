// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trace_driven.h for the primary calling header

#include "Vtb_trace_driven__pch.h"

void Vtb_trace_driven___024root___timing_ready(Vtb_trace_driven___024root* vlSelf);

VL_ATTR_COLD void Vtb_trace_driven___024root___eval_static(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_static\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2329612361806016887ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0 
        = vlSelfRef.tb_trace_driven__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_trace_driven__DOT__rst_n__0 
        = vlSelfRef.tb_trace_driven__DOT__rst_n;
    Vtb_trace_driven___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_trace_driven___024root___eval_final(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_final\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trace_driven___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_trace_driven___024root___eval_phase__stl(Vtb_trace_driven___024root* vlSelf);

VL_ATTR_COLD void Vtb_trace_driven___024root___eval_settle(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_settle\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_trace_driven___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_trace_driven.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_trace_driven___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_trace_driven___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trace_driven___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_trace_driven___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_trace_driven___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_trace_driven___024root___stl_sequent__TOP__0(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___stl_sequent__TOP__0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 5U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 0U;
    }
    if (vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_written
        [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                         >> 4U))]) {
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][0U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[1U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][1U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[2U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][2U];
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[3U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__backing_data
            [(0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                             >> 4U))][3U];
    } else {
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[0U] 
            = vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched;
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[1U] 
            = ((IData)(4U) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[2U] 
            = ((IData)(8U) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
        vlSelfRef.tb_trace_driven__DOT__mem_rdata[3U] 
            = ((IData)(0x0000000cU) + vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched);
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 0U;
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][0U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][0U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 5U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    }
    if ((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                 >> 4U))][1U] & (vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                                 [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                         >> 4U))][1U] 
                                 == (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 5U)))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter
                         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][1U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                         [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 4U))][0U])))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 0U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                          [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                  >> 4U))][1U])) & 
               (~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r))))) {
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r = 1U;
        vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = 1U;
    }
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__cpu_stall 
        = ((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
           | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
              & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)));
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[0U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][0U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[1U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][1U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[2U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][2U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r[3U] 
        = vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
        [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r][3U];
    vlSelfRef.tb_trace_driven__DOT__dut__DOT__need_writeback 
        = (vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
           [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
           & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
           [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r]);
}

VL_ATTR_COLD bool Vtb_trace_driven___024root___eval_phase__stl(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___eval_phase__stl\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_trace_driven___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_trace_driven___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_trace_driven___024root___stl_sequent__TOP__0(vlSelf);
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

bool Vtb_trace_driven___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trace_driven___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_trace_driven___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_trace_driven.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_trace_driven.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_trace_driven___024root___ctor_var_reset(Vtb_trace_driven___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root___ctor_var_reset\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_trace_driven__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7768847963322417889ull);
    vlSelf->tb_trace_driven__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18221109601666425176ull);
    vlSelf->tb_trace_driven__DOT__cpu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2695978000019738945ull);
    vlSelf->tb_trace_driven__DOT__cpu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348436366906601241ull);
    vlSelf->tb_trace_driven__DOT__cpu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5503453330214696895ull);
    vlSelf->tb_trace_driven__DOT__cpu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11381443723066916519ull);
    vlSelf->tb_trace_driven__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10913197853511718324ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_trace_driven__DOT__mem_rdata, __VscopeHash, 6588454070066471157ull);
    vlSelf->tb_trace_driven__DOT__mem_wr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13208017769420303749ull);
    vlSelf->tb_trace_driven__DOT__hits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2334655856146557895ull);
    vlSelf->tb_trace_driven__DOT__misses = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14199925756578421850ull);
    vlSelf->tb_trace_driven__DOT__do_op__Vstatic__rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17268703683751636397ull);
    vlSelf->tb_trace_driven__DOT__do_op__Vstatic__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14876943065382892716ull);
    vlSelf->tb_trace_driven__DOT__do_op__Vstatic__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14066537665777035382ull);
    vlSelf->tb_trace_driven__DOT__fd = 0;
    vlSelf->tb_trace_driven__DOT__scan_ret = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16311053900977177794ull);
    vlSelf->tb_trace_driven__DOT__op_str = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8231297985165631720ull);
    vlSelf->tb_trace_driven__DOT__trace_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14293713526550648123ull);
    vlSelf->tb_trace_driven__DOT__n_ops = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 400929475806906684ull);
    vlSelf->tb_trace_driven__DOT__hit_rate = 0;
    vlSelf->tb_trace_driven__DOT__amat = 0;
    vlSelf->tb_trace_driven__DOT__dut__DOT__cpu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16921958248426665861ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_trace_driven__DOT__dut__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16510875504064604286ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_trace_driven__DOT__dut__DOT__dirty_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071377004749126779ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_trace_driven__DOT__dut__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 11664759797837800195ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->tb_trace_driven__DOT__dut__DOT__data_array[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5210989182876123311ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_trace_driven__DOT__dut__DOT__lru_counter[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225334324054896450ull);
        }
    }
    vlSelf->tb_trace_driven__DOT__dut__DOT__hit_comb_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 261158611476993590ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__hit_way_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16482410997116152453ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__victim_way_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10136221461134810343ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4205182892764279281ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__need_writeback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15007319990318091576ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6554261522594129441ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_trace_driven__DOT__dut__DOT__mem_wr_data_r, __VscopeHash, 17859261826502381910ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__si = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4415937985228721499ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__wi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2280912850554042561ull);
    vlSelf->tb_trace_driven__DOT__dut__DOT__wj = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2681289333872160998ull);
    vlSelf->tb_trace_driven__DOT__mem__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1283147698090535845ull);
    vlSelf->tb_trace_driven__DOT__mem__DOT__op_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13246638358453649330ull);
    vlSelf->tb_trace_driven__DOT__mem__DOT__cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5380135975188432953ull);
    vlSelf->tb_trace_driven__DOT__mem__DOT__addr_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2539842292521829406ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_trace_driven__DOT__mem__DOT__wdata_latched, __VscopeHash, 2032179381189236238ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_trace_driven__DOT__mem__DOT__backing_written[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16623918015956803049ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_trace_driven__DOT__mem__DOT__backing_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11678689666774225394ull);
        }
    }
    vlSelf->tb_trace_driven__DOT__mem__DOT__li = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7235190152833181329ull);
    vlSelf->tb_trace_driven__DOT__mem__DOT__wj = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 454216701892958928ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_trace_driven__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
