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

void Vtb_trace_driven___024root__trace_chg_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*26:0*/, 2>, 2>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 2>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____4(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar);

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
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 4U))));
        bufp->chgIData(oldp+22,((vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 5U)),27);
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
        Vtb_trace_driven___024root__trace_chg_dtype____0(vlSelf, bufp, 40, vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array);
        Vtb_trace_driven___024root__trace_chg_dtype____1(vlSelf, bufp, 44, vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array);
        Vtb_trace_driven___024root__trace_chg_dtype____2(vlSelf, bufp, 48, vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array);
        Vtb_trace_driven___024root__trace_chg_dtype____3(vlSelf, bufp, 52, vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array);
        Vtb_trace_driven___024root__trace_chg_dtype____4(vlSelf, bufp, 68, vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__si),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wi),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wj),32);
        bufp->chgBit(oldp+76,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write));
        bufp->chgCData(oldp+78,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt),3);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched),32);
        bufp->chgWData(oldp+80,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched),128);
        bufp->chgCData(oldp+84,((0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                                >> 4U))),8);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__li),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wj),32);
    }
    bufp->chgBit(oldp+87,(vlSelfRef.tb_trace_driven__DOT__clk));
    bufp->chgBit(oldp+88,(((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                           & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r) 
                              & (0U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))))));
    bufp->chgIData(oldp+89,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
                            [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                    >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r]
                            [(3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                    >> 2U))]),32);
    bufp->chgBit(oldp+90,(((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
                           | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
                              & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)))));
    bufp->chgIData(oldp+91,(((vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                              [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                      >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                              << 5U) | (0x00000010U 
                                        & vlSelfRef.tb_trace_driven__DOT__cpu_addr))),32);
    bufp->chgBit(oldp+92,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss));
    bufp->chgBit(oldp+93,((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                           [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                           & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
                           [(1U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                   >> 4U))][vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r])));
}

void Vtb_trace_driven___024root__trace_chg_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
}

void Vtb_trace_driven___024root__trace_chg_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
}

void Vtb_trace_driven___024root__trace_chg_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*26:0*/, 2>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____2\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),27);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),27);
    bufp->chgIData(oldp+2,(__VdtypeVar[1U][0U]),27);
    bufp->chgIData(oldp+3,(__VdtypeVar[1U][1U]),27);
}

void Vtb_trace_driven___024root__trace_chg_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____3\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[0U][1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[0U][1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[0U][1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[0U][1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[1U][0U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[1U][0U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[1U][0U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[1U][0U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[1U][1U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[1U][1U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[1U][1U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[1U][1U][3U]),32);
}

void Vtb_trace_driven___024root__trace_chg_dtype____4(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____4\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
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
