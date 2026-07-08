// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_single_line_cache__Syms.h"


void Vtb_single_line_cache___024root__trace_chg_0_sub_0(Vtb_single_line_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_single_line_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root__trace_chg_0\n"); );
    // Body
    Vtb_single_line_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_line_cache___024root*>(voidSelf);
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_single_line_cache___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_single_line_cache___024root__trace_chg_0_sub_0(Vtb_single_line_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root__trace_chg_0_sub_0\n"); );
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_single_line_cache__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_single_line_cache__DOT__addr),32);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_single_line_cache__DOT__write_enable));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_single_line_cache__DOT__write_data),32);
        bufp->chgIData(oldp+4,((vlSelfRef.tb_single_line_cache__DOT__addr 
                                >> 2U)),30);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+5,(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_data),32);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__valid));
        bufp->chgIData(oldp+7,(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_tag),30);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.tb_single_line_cache__DOT__clk));
    bufp->chgBit(oldp+9,(((IData)(vlSelfRef.tb_single_line_cache__DOT__dut__DOT__valid) 
                          & (vlSelfRef.tb_single_line_cache__DOT__dut__DOT__stored_tag 
                             == (vlSelfRef.tb_single_line_cache__DOT__addr 
                                 >> 2U)))));
    bufp->chgIData(oldp+10,(vlSelfRef.tb_single_line_cache__DOT__errors),32);
}

void Vtb_single_line_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_single_line_cache___024root__trace_cleanup\n"); );
    // Body
    Vtb_single_line_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_single_line_cache___024root*>(voidSelf);
    Vtb_single_line_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
