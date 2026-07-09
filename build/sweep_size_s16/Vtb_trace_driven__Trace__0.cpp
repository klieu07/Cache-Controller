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

void Vtb_trace_driven___024root__trace_chg_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*23:0*/, 2>, 16>& __VdtypeVar);
void Vtb_trace_driven___024root__trace_chg_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar);

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
        bufp->chgCData(oldp+21,((0x0000000fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                                >> 4U))),4);
        bufp->chgIData(oldp+22,((vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                 >> 8U)),24);
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
        Vtb_trace_driven___024root__trace_chg_dtype____1(vlSelf, bufp, 72, vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array);
        Vtb_trace_driven___024root__trace_chg_dtype____2(vlSelf, bufp, 104, vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array);
        Vtb_trace_driven___024root__trace_chg_dtype____3(vlSelf, bufp, 136, vlSelfRef.tb_trace_driven__DOT__dut__DOT__lru_counter);
        bufp->chgCData(oldp+168,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+169,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__si),32);
        bufp->chgIData(oldp+170,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wi),32);
        bufp->chgIData(oldp+171,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__wj),32);
        bufp->chgBit(oldp+172,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__busy));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__op_is_write));
        bufp->chgCData(oldp+174,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__cnt),3);
        bufp->chgIData(oldp+175,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched),32);
        bufp->chgWData(oldp+176,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wdata_latched),128);
        bufp->chgCData(oldp+180,((0x000000ffU & (vlSelfRef.tb_trace_driven__DOT__mem__DOT__addr_latched 
                                                 >> 4U))),8);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__li),32);
        bufp->chgIData(oldp+182,(vlSelfRef.tb_trace_driven__DOT__mem__DOT__wj),32);
    }
    bufp->chgBit(oldp+183,(vlSelfRef.tb_trace_driven__DOT__clk));
    bufp->chgBit(oldp+184,(((IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req) 
                            & ((IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r) 
                               & (0U == (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state))))));
    bufp->chgIData(oldp+185,(vlSelfRef.tb_trace_driven__DOT__dut__DOT__data_array
                             [(0x0000000fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                              >> 4U))]
                             [vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_way_r]
                             [(3U & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                     >> 2U))]),32);
    bufp->chgBit(oldp+186,(((0U != (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__state)) 
                            | ((~ (IData)(vlSelfRef.tb_trace_driven__DOT__dut__DOT__hit_comb_r)) 
                               & (IData)(vlSelfRef.tb_trace_driven__DOT__cpu_req)))));
    bufp->chgIData(oldp+187,(((vlSelfRef.tb_trace_driven__DOT__dut__DOT__tag_array
                               [(0x0000000fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                                >> 4U))]
                               [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                               << 8U) | (0x000000f0U 
                                         & vlSelfRef.tb_trace_driven__DOT__cpu_addr))),32);
    bufp->chgBit(oldp+188,(vlSelfRef.tb_trace_driven__DOT__do_op__Vstatic__was_miss));
    bufp->chgBit(oldp+189,((vlSelfRef.tb_trace_driven__DOT__dut__DOT__valid_array
                            [(0x0000000fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                             >> 4U))]
                            [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r] 
                            & vlSelfRef.tb_trace_driven__DOT__dut__DOT__dirty_array
                            [(0x0000000fU & (vlSelfRef.tb_trace_driven__DOT__cpu_addr 
                                             >> 4U))]
                            [vlSelfRef.tb_trace_driven__DOT__dut__DOT__victim_way_r])));
}

void Vtb_trace_driven___024root__trace_chg_dtype____0(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____0\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
    bufp->chgBit(oldp+16,(__VdtypeVar[8U][0U]));
    bufp->chgBit(oldp+17,(__VdtypeVar[8U][1U]));
    bufp->chgBit(oldp+18,(__VdtypeVar[9U][0U]));
    bufp->chgBit(oldp+19,(__VdtypeVar[9U][1U]));
    bufp->chgBit(oldp+20,(__VdtypeVar[10U][0U]));
    bufp->chgBit(oldp+21,(__VdtypeVar[10U][1U]));
    bufp->chgBit(oldp+22,(__VdtypeVar[11U][0U]));
    bufp->chgBit(oldp+23,(__VdtypeVar[11U][1U]));
    bufp->chgBit(oldp+24,(__VdtypeVar[12U][0U]));
    bufp->chgBit(oldp+25,(__VdtypeVar[12U][1U]));
    bufp->chgBit(oldp+26,(__VdtypeVar[13U][0U]));
    bufp->chgBit(oldp+27,(__VdtypeVar[13U][1U]));
    bufp->chgBit(oldp+28,(__VdtypeVar[14U][0U]));
    bufp->chgBit(oldp+29,(__VdtypeVar[14U][1U]));
    bufp->chgBit(oldp+30,(__VdtypeVar[15U][0U]));
    bufp->chgBit(oldp+31,(__VdtypeVar[15U][1U]));
}

void Vtb_trace_driven___024root__trace_chg_dtype____1(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____1\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
    bufp->chgBit(oldp+16,(__VdtypeVar[8U][0U]));
    bufp->chgBit(oldp+17,(__VdtypeVar[8U][1U]));
    bufp->chgBit(oldp+18,(__VdtypeVar[9U][0U]));
    bufp->chgBit(oldp+19,(__VdtypeVar[9U][1U]));
    bufp->chgBit(oldp+20,(__VdtypeVar[10U][0U]));
    bufp->chgBit(oldp+21,(__VdtypeVar[10U][1U]));
    bufp->chgBit(oldp+22,(__VdtypeVar[11U][0U]));
    bufp->chgBit(oldp+23,(__VdtypeVar[11U][1U]));
    bufp->chgBit(oldp+24,(__VdtypeVar[12U][0U]));
    bufp->chgBit(oldp+25,(__VdtypeVar[12U][1U]));
    bufp->chgBit(oldp+26,(__VdtypeVar[13U][0U]));
    bufp->chgBit(oldp+27,(__VdtypeVar[13U][1U]));
    bufp->chgBit(oldp+28,(__VdtypeVar[14U][0U]));
    bufp->chgBit(oldp+29,(__VdtypeVar[14U][1U]));
    bufp->chgBit(oldp+30,(__VdtypeVar[15U][0U]));
    bufp->chgBit(oldp+31,(__VdtypeVar[15U][1U]));
}

void Vtb_trace_driven___024root__trace_chg_dtype____2(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*23:0*/, 2>, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____2\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),24);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),24);
    bufp->chgIData(oldp+2,(__VdtypeVar[1U][0U]),24);
    bufp->chgIData(oldp+3,(__VdtypeVar[1U][1U]),24);
    bufp->chgIData(oldp+4,(__VdtypeVar[2U][0U]),24);
    bufp->chgIData(oldp+5,(__VdtypeVar[2U][1U]),24);
    bufp->chgIData(oldp+6,(__VdtypeVar[3U][0U]),24);
    bufp->chgIData(oldp+7,(__VdtypeVar[3U][1U]),24);
    bufp->chgIData(oldp+8,(__VdtypeVar[4U][0U]),24);
    bufp->chgIData(oldp+9,(__VdtypeVar[4U][1U]),24);
    bufp->chgIData(oldp+10,(__VdtypeVar[5U][0U]),24);
    bufp->chgIData(oldp+11,(__VdtypeVar[5U][1U]),24);
    bufp->chgIData(oldp+12,(__VdtypeVar[6U][0U]),24);
    bufp->chgIData(oldp+13,(__VdtypeVar[6U][1U]),24);
    bufp->chgIData(oldp+14,(__VdtypeVar[7U][0U]),24);
    bufp->chgIData(oldp+15,(__VdtypeVar[7U][1U]),24);
    bufp->chgIData(oldp+16,(__VdtypeVar[8U][0U]),24);
    bufp->chgIData(oldp+17,(__VdtypeVar[8U][1U]),24);
    bufp->chgIData(oldp+18,(__VdtypeVar[9U][0U]),24);
    bufp->chgIData(oldp+19,(__VdtypeVar[9U][1U]),24);
    bufp->chgIData(oldp+20,(__VdtypeVar[10U][0U]),24);
    bufp->chgIData(oldp+21,(__VdtypeVar[10U][1U]),24);
    bufp->chgIData(oldp+22,(__VdtypeVar[11U][0U]),24);
    bufp->chgIData(oldp+23,(__VdtypeVar[11U][1U]),24);
    bufp->chgIData(oldp+24,(__VdtypeVar[12U][0U]),24);
    bufp->chgIData(oldp+25,(__VdtypeVar[12U][1U]),24);
    bufp->chgIData(oldp+26,(__VdtypeVar[13U][0U]),24);
    bufp->chgIData(oldp+27,(__VdtypeVar[13U][1U]),24);
    bufp->chgIData(oldp+28,(__VdtypeVar[14U][0U]),24);
    bufp->chgIData(oldp+29,(__VdtypeVar[14U][1U]),24);
    bufp->chgIData(oldp+30,(__VdtypeVar[15U][0U]),24);
    bufp->chgIData(oldp+31,(__VdtypeVar[15U][1U]),24);
}

void Vtb_trace_driven___024root__trace_chg_dtype____3(Vtb_trace_driven___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trace_driven___024root__trace_chg_dtype____3\n"); );
    Vtb_trace_driven__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[5U][0U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[5U][1U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[6U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[6U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[7U][0U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[7U][1U]));
    bufp->chgBit(oldp+16,(__VdtypeVar[8U][0U]));
    bufp->chgBit(oldp+17,(__VdtypeVar[8U][1U]));
    bufp->chgBit(oldp+18,(__VdtypeVar[9U][0U]));
    bufp->chgBit(oldp+19,(__VdtypeVar[9U][1U]));
    bufp->chgBit(oldp+20,(__VdtypeVar[10U][0U]));
    bufp->chgBit(oldp+21,(__VdtypeVar[10U][1U]));
    bufp->chgBit(oldp+22,(__VdtypeVar[11U][0U]));
    bufp->chgBit(oldp+23,(__VdtypeVar[11U][1U]));
    bufp->chgBit(oldp+24,(__VdtypeVar[12U][0U]));
    bufp->chgBit(oldp+25,(__VdtypeVar[12U][1U]));
    bufp->chgBit(oldp+26,(__VdtypeVar[13U][0U]));
    bufp->chgBit(oldp+27,(__VdtypeVar[13U][1U]));
    bufp->chgBit(oldp+28,(__VdtypeVar[14U][0U]));
    bufp->chgBit(oldp+29,(__VdtypeVar[14U][1U]));
    bufp->chgBit(oldp+30,(__VdtypeVar[15U][0U]));
    bufp->chgBit(oldp+31,(__VdtypeVar[15U][1U]));
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
