// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_single_line_cache.h for the primary calling header

#include "Vtb_single_line_cache__pch.h"

VlCoroutine Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_single_line_cache___024root* vlSelf);
VlCoroutine Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_single_line_cache___024root* vlSelf);

void Vtb_single_line_cache___024root___eval_initial(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_initial\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(Vtb_single_line_cache___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_single_line_cache__ConstPool__CONST_hbabd2bef_0;
extern const VlWide<8>/*255:0*/ Vtb_single_line_cache__ConstPool__CONST_h1b5e7712_0;
extern const VlWide<8>/*255:0*/ Vtb_single_line_cache__ConstPool__CONST_h0b7a17c7_0;
extern const VlWide<8>/*255:0*/ Vtb_single_line_cache__ConstPool__CONST_hbaa55d1f_0;
extern const VlWide<8>/*255:0*/ Vtb_single_line_cache__ConstPool__CONST_hc49091ec_0;

VlCoroutine Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__0__expected_hit;
    __Vtask_tb_single_line_cache__DOT__check_hit__0__expected_hit = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__0__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__0__label);
    CData/*0:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__1__expected_hit;
    __Vtask_tb_single_line_cache__DOT__check_hit__1__expected_hit = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__1__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__1__label);
    IData/*31:0*/ __Vtask_tb_single_line_cache__DOT__check_data__2__expected_data;
    __Vtask_tb_single_line_cache__DOT__check_data__2__expected_data = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_data__2__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_data__2__label);
    CData/*0:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__3__expected_hit;
    __Vtask_tb_single_line_cache__DOT__check_hit__3__expected_hit = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__3__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__3__label);
    CData/*0:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__4__expected_hit;
    __Vtask_tb_single_line_cache__DOT__check_hit__4__expected_hit = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__4__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__4__label);
    IData/*31:0*/ __Vtask_tb_single_line_cache__DOT__check_data__5__expected_data;
    __Vtask_tb_single_line_cache__DOT__check_data__5__expected_data = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_data__5__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_data__5__label);
    CData/*0:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__6__expected_hit;
    __Vtask_tb_single_line_cache__DOT__check_hit__6__expected_hit = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_single_line_cache__DOT__check_hit__6__label;
    VL_ZERO_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__6__label);
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_single_line_cache.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_single_line_cache__DOT__clk = 0U;
    vlSelfRef.tb_single_line_cache__DOT__rst_n = 0U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0U;
    vlSelfRef.tb_single_line_cache__DOT__write_enable = 0U;
    vlSelfRef.tb_single_line_cache__DOT__write_data = 0U;
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__rst_n = 1U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000100U;
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__0__label, Vtb_single_line_cache__ConstPool__CONST_hbabd2bef_0);
    __Vtask_tb_single_line_cache__DOT__check_hit__0__expected_hit = 0U;
    if (((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit) 
         != (IData)(__Vtask_tb_single_line_cache__DOT__check_hit__0__expected_hit))) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: hit=%b, expected=%b\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__0__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit)
                     , '#',1,__Vtask_tb_single_line_cache__DOT__check_hit__0__expected_hit);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: hit=%b as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__0__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit));
    }
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000100U;
    vlSelfRef.tb_single_line_cache__DOT__write_enable = 1U;
    vlSelfRef.tb_single_line_cache__DOT__write_data = 0xdeadbeefU;
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__write_enable = 0U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000100U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_single_line_cache.v", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__1__label, Vtb_single_line_cache__ConstPool__CONST_h1b5e7712_0);
    __Vtask_tb_single_line_cache__DOT__check_hit__1__expected_hit = 1U;
    if (((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit) 
         != (IData)(__Vtask_tb_single_line_cache__DOT__check_hit__1__expected_hit))) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: hit=%b, expected=%b\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__1__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit)
                     , '#',1,__Vtask_tb_single_line_cache__DOT__check_hit__1__expected_hit);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: hit=%b as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__1__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit));
    }
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_data__2__label, Vtb_single_line_cache__ConstPool__CONST_h1b5e7712_0);
    __Vtask_tb_single_line_cache__DOT__check_data__2__expected_data = 0xdeadbeefU;
    if ((vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data 
         != __Vtask_tb_single_line_cache__DOT__check_data__2__expected_data)) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: read_data=%h, expected=%h\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_data__2__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data
                     , '#',32,__Vtask_tb_single_line_cache__DOT__check_data__2__expected_data);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: read_data=%h as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_data__2__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data);
    }
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000104U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_single_line_cache.v", 
                                         101);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__3__label, Vtb_single_line_cache__ConstPool__CONST_h0b7a17c7_0);
    __Vtask_tb_single_line_cache__DOT__check_hit__3__expected_hit = 0U;
    if (((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit) 
         != (IData)(__Vtask_tb_single_line_cache__DOT__check_hit__3__expected_hit))) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: hit=%b, expected=%b\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__3__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit)
                     , '#',1,__Vtask_tb_single_line_cache__DOT__check_hit__3__expected_hit);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: hit=%b as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__3__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit));
    }
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000200U;
    vlSelfRef.tb_single_line_cache__DOT__write_enable = 1U;
    vlSelfRef.tb_single_line_cache__DOT__write_data = 0xcafef00dU;
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__write_enable = 0U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000200U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_single_line_cache.v", 
                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__4__label, Vtb_single_line_cache__ConstPool__CONST_hbaa55d1f_0);
    __Vtask_tb_single_line_cache__DOT__check_hit__4__expected_hit = 1U;
    if (((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit) 
         != (IData)(__Vtask_tb_single_line_cache__DOT__check_hit__4__expected_hit))) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: hit=%b, expected=%b\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__4__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit)
                     , '#',1,__Vtask_tb_single_line_cache__DOT__check_hit__4__expected_hit);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: hit=%b as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__4__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit));
    }
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_data__5__label, Vtb_single_line_cache__ConstPool__CONST_hbaa55d1f_0);
    __Vtask_tb_single_line_cache__DOT__check_data__5__expected_data = 0xcafef00dU;
    if ((vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data 
         != __Vtask_tb_single_line_cache__DOT__check_data__5__expected_data)) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: read_data=%h, expected=%h\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_data__5__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data
                     , '#',32,__Vtask_tb_single_line_cache__DOT__check_data__5__expected_data);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: read_data=%h as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_data__5__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data);
    }
    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(vlSelf, 
                                                                "@(negedge tb_single_line_cache.clk)");
    co_await vlSelfRef.__VtrigSched_h4bda7a2b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_single_line_cache.clk)", 
                                                         "tb/tb_single_line_cache.v", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_single_line_cache__DOT__addr = 0x00000100U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_single_line_cache.v", 
                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_ASSIGN_W(256, __Vtask_tb_single_line_cache__DOT__check_hit__6__label, Vtb_single_line_cache__ConstPool__CONST_hc49091ec_0);
    __Vtask_tb_single_line_cache__DOT__check_hit__6__expected_hit = 0U;
    if (((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit) 
         != (IData)(__Vtask_tb_single_line_cache__DOT__check_hit__6__expected_hit))) {
        VL_WRITEF_NX("FAIL [%s] at t=%0t: hit=%b, expected=%b\n",5, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__6__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit)
                     , '#',1,__Vtask_tb_single_line_cache__DOT__check_hit__6__expected_hit);
        vlSelfRef.tb_single_line_cache__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_single_line_cache__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [%s] at t=%0t: hit=%b as predicted\n",4, 'T',-9
                     , '#',256,__Vtask_tb_single_line_cache__DOT__check_hit__6__label.data()
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',1,(IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__hit));
    }
    if ((0U == vlSelfRef.tb_single_line_cache__DOT__errors)) {
        VL_WRITEF_NX("\n=== ALL TESTS PASSED ===\n",0);
    } else {
        VL_WRITEF_NX("\n=== %0d TEST(S) FAILED ===\n",1
                     , '~',32,vlSelfRef.tb_single_line_cache__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_single_line_cache.v", 133, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_single_line_cache.v", 
                                             33);
        vlSelfRef.tb_single_line_cache__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_single_line_cache__DOT__clk)));
    }
    co_return;
}

bool Vtb_single_line_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___trigger_anySet__act\n"); );
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

void Vtb_single_line_cache___024root___timing_ready(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___timing_ready\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready("@(negedge tb_single_line_cache.clk)");
    }
}

void Vtb_single_line_cache___024root___timing_resume(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___timing_resume\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4bda7a2b__0.moveToResumeQueue(
                                                          "@(negedge tb_single_line_cache.clk)");
    vlSelfRef.__VtrigSched_h4bda7a2b__0.resume("@(negedge tb_single_line_cache.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_single_line_cache___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_single_line_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_single_line_cache___024root___eval_phase__act(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_phase__act\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.tb_single_line_cache__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.tb_single_line_cache__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_single_line_cache__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0 
            = vlSelfRef.tb_single_line_cache__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__rst_n__0 
            = vlSelfRef.tb_single_line_cache__DOT__rst_n;
    }
    Vtb_single_line_cache___024root___timing_ready(vlSelf);
    Vtb_single_line_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_single_line_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_single_line_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_single_line_cache___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_single_line_cache___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
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
    return (__VactExecute);
}

bool Vtb_single_line_cache___024root___eval_phase__inact(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_phase__inact\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_single_line_cache.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_single_line_cache___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_single_line_cache___024root___eval_phase__nba(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_phase__nba\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_single_line_cache___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.tb_single_line_cache__DOT__rst_n) {
                        if (vlSelfRef.tb_single_line_cache__DOT__write_enable) {
                            vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data 
                                = vlSelfRef.tb_single_line_cache__DOT__write_data;
                            vlSelfRef.tb_single_line_cache__DOT__dut__DOT__valid = 1U;
                            vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_tag 
                                = (vlSelfRef.tb_single_line_cache__DOT__addr 
                                   >> 2U);
                        }
                    } else {
                        vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data = 0U;
                        vlSelfRef.tb_single_line_cache__DOT__dut__DOT__valid = 0U;
                        vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_tag = 0U;
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
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
        Vtb_single_line_cache___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_single_line_cache___024root___eval(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_single_line_cache___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_single_line_cache.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_single_line_cache.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_single_line_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_single_line_cache.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_single_line_cache___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_single_line_cache___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_single_line_cache___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0(Vtb_single_line_cache___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root____VbeforeTrig_h4bda7a2b__0\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_single_line_cache__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0 
        = vlSelfRef.tb_single_line_cache__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4bda7a2b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_single_line_cache___024root___eval_debug_assertions(Vtb_single_line_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root___eval_debug_assertions\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
