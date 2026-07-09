// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_trace_driven__Syms.h"


void Vtb_trace_driven___024root__trace_chg_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_trace_driven___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_0\n"); );
    // Body
    Vtb_trace_driven___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_trace_driven___024root*>(voidSelf);
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_trace_driven___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_trace_driven___024root__trace_chg_0_sub_0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_0_sub_0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_trace_driven__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_trace_driven__DOT__cpu_req));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_trace_driven__DOT__cpu_we));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_trace_driven__DOT__cpu_addr),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_trace_driven__DOT__cpu_wdata),32);
        bufp->chgIData(oldp+5,((0xfffffff0U & vlSelfRef.tb_trace_driven__DOT__cpu_addr)),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_trace_driven__DOT__hits),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_trace_driven__DOT__misses),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__rw));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__addr),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__wdata),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_trace_driven__DOT__fd),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_trace_driven__DOT__scan_ret),32);
        bufp->chgQData(oldp+13,(vlSelfRef.tb_trace_driven__DOT__op_str),64);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_trace_driven__DOT__trace_addr),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_trace_driven__DOT__n_ops),32);
        bufp->chgDouble(oldp+17,(vlSelfRef.tb_trace_driven__DOT__hit_rate));
        bufp->chgDouble(oldp+19,(vlSelfRef.tb_trace_driven__DOT__amat));
        bufp->chgCData(oldp+21,((0x0000001fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                                >> 4U))),5);
        bufp->chgIData(oldp+22,((vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 9U)),23);
        bufp->chgCData(oldp+23,((3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                       >> 2U))),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgWData(oldp+24,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__mem_wr_data_r),128);
        bufp->chgBit(oldp+28,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+32,((2U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))));
        bufp->chgBit(oldp+33,(vlSelfRef.tb_trace_driven__DOT__mem_ready));
        bufp->chgWData(oldp+34,(vlSelfRef.tb_trace_driven__DOT__mem_rdata),128);
        bufp->chgBit(oldp+38,((1U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_trace_driven__DOT__mem_wr_done));
        bufp->chgCData(oldp+40,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__si),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wi),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wj),32);
        bufp->chgBit(oldp+44,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write));
        bufp->chgCData(oldp+46,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt),3);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched),32);
        bufp->chgWData(oldp+48,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched),128);
        bufp->chgCData(oldp+52,((0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                                >> 4U))),8);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__li),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wj),32);
    }
    bufp->chgBit(oldp+55,(vlSelfRef.tb_trace_driven__DOT__clk));
    bufp->chgBit(oldp+56,(((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                           & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r) 
                              & (0U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))))));
    bufp->chgIData(oldp+57,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
                            [(0x0000001fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                             >> 4U))]
                            [vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r]
                            [(3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                    >> 2U))]),32);
    bufp->chgBit(oldp+58,(((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
                           | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
                              & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)))));
    bufp->chgIData(oldp+59,(((vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                              [(0x0000001fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                               >> 4U))]
                              [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                              << 9U) | (0x000001f0U 
                                        & vlSelfRef.tb_trace_driven__DOT__cpu_addr))),32);
    bufp->chgBit(oldp+60,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss));
    bufp->chgBit(oldp+61,((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                           [(0x0000001fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                            >> 4U))]
                           [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                           & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
                           [(0x0000001fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                            >> 4U))]
                           [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r])));
}

void Vtb_trace_driven___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_cleanup\n"); );
    // Body
    Vtb_trace_driven___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_trace_driven___024root*>(voidSelf);
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
