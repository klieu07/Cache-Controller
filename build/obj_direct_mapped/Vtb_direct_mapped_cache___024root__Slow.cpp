// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direct_mapped_cache.h for the primary calling header

#include "Vtb_direct_mapped_cache__pch.h"

void Vtb_direct_mapped_cache___024root___ctor_var_reset(Vtb_direct_mapped_cache___024root* vlSelf);

Vtb_direct_mapped_cache___024root::Vtb_direct_mapped_cache___024root(Vtb_direct_mapped_cache__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_direct_mapped_cache___024root___ctor_var_reset(this);
}

void Vtb_direct_mapped_cache___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_direct_mapped_cache___024root::~Vtb_direct_mapped_cache___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
