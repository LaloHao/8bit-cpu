// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


//======================

void Vcpu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcpu* t=(Vcpu*)userthis;
    Vcpu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vcpu::traceChgThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcpu::traceChgThis__2(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__nextState),4);
    }
}

void Vcpu::traceChgThis__3(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->v__DOT__cpu_mem__DOT__data[0]),4);
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__cpu_mem__DOT__data[1]),4);
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__cpu_mem__DOT__data[2]),4);
	vcdp->chgBus  (c+5,(vlTOPp->v__DOT__cpu_mem__DOT__data[3]),4);
	vcdp->chgBus  (c+6,(vlTOPp->v__DOT__cpu_mem__DOT__data[4]),4);
	vcdp->chgBus  (c+7,(vlTOPp->v__DOT__cpu_mem__DOT__data[5]),4);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__cpu_mem__DOT__data[6]),4);
	vcdp->chgBus  (c+9,(vlTOPp->v__DOT__cpu_mem__DOT__data[7]),4);
	vcdp->chgBus  (c+10,(vlTOPp->v__DOT__cpu_mem__DOT__data[8]),4);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__cpu_mem__DOT__data[9]),4);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__cpu_mem__DOT__data[10]),4);
	vcdp->chgBus  (c+13,(vlTOPp->v__DOT__cpu_mem__DOT__data[11]),4);
	vcdp->chgBus  (c+14,(vlTOPp->v__DOT__cpu_mem__DOT__data[12]),4);
	vcdp->chgBus  (c+15,(vlTOPp->v__DOT__cpu_mem__DOT__data[13]),4);
	vcdp->chgBus  (c+16,(vlTOPp->v__DOT__cpu_mem__DOT__data[14]),4);
	vcdp->chgBus  (c+17,(vlTOPp->v__DOT__cpu_mem__DOT__data[15]),4);
	vcdp->chgBus  (c+18,(vlTOPp->v__DOT__cpu_mem__DOT__i),4);
    }
}

void Vcpu::traceChgThis__4(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+19,(vlTOPp->v__DOT__datain),4);
	vcdp->chgBus  (c+20,(vlTOPp->v__DOT__addr),4);
	vcdp->chgBus  (c+21,(vlTOPp->v__DOT__pc),8);
	vcdp->chgBus  (c+22,(vlTOPp->v__DOT__ir),8);
	vcdp->chgBit  (c+23,(vlTOPp->v__DOT__dir));
    }
}

void Vcpu::traceChgThis__5(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+24,(vlTOPp->v__DOT__dataout),4);
	vcdp->chgBus  (c+25,(vlTOPp->v__DOT__currentState),4);
    }
}

void Vcpu::traceChgThis__6(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+28,(vlTOPp->instruction),8);
	vcdp->chgBus  (c+29,(vlTOPp->a),4);
	vcdp->chgBit  (c+26,(vlTOPp->clk));
	vcdp->chgBit  (c+27,(vlTOPp->rst));
    }
}
