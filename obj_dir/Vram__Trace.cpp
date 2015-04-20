// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


//======================

void Vram::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vram* t=(Vram*)userthis;
    Vram__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vram::traceChgThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vram::traceChgThis__2(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__data[0]),4);
	vcdp->chgBus  (c+2,(vlTOPp->v__DOT__data[1]),4);
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__data[2]),4);
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__data[3]),4);
	vcdp->chgBus  (c+5,(vlTOPp->v__DOT__data[4]),4);
	vcdp->chgBus  (c+6,(vlTOPp->v__DOT__data[5]),4);
	vcdp->chgBus  (c+7,(vlTOPp->v__DOT__data[6]),4);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__data[7]),4);
	vcdp->chgBus  (c+9,(vlTOPp->v__DOT__data[8]),4);
	vcdp->chgBus  (c+10,(vlTOPp->v__DOT__data[9]),4);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__data[10]),4);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__data[11]),4);
	vcdp->chgBus  (c+13,(vlTOPp->v__DOT__data[12]),4);
	vcdp->chgBus  (c+14,(vlTOPp->v__DOT__data[13]),4);
	vcdp->chgBus  (c+15,(vlTOPp->v__DOT__data[14]),4);
	vcdp->chgBus  (c+16,(vlTOPp->v__DOT__data[15]),4);
    }
}

void Vram::traceChgThis__3(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+17,(vlTOPp->clk));
	vcdp->chgBit  (c+18,(vlTOPp->rst));
	vcdp->chgBit  (c+19,(vlTOPp->rw));
	vcdp->chgBus  (c+20,(vlTOPp->addr),4);
	vcdp->chgBus  (c+21,(vlTOPp->datain),4);
	vcdp->chgBus  (c+22,(vlTOPp->dataout),4);
	vcdp->chgBus  (c+23,(vlTOPp->data[0]),4);
	vcdp->chgBus  (c+24,(vlTOPp->data[1]),4);
	vcdp->chgBus  (c+25,(vlTOPp->data[2]),4);
	vcdp->chgBus  (c+26,(vlTOPp->data[3]),4);
	vcdp->chgBus  (c+27,(vlTOPp->data[4]),4);
	vcdp->chgBus  (c+28,(vlTOPp->data[5]),4);
	vcdp->chgBus  (c+29,(vlTOPp->data[6]),4);
	vcdp->chgBus  (c+30,(vlTOPp->data[7]),4);
	vcdp->chgBus  (c+31,(vlTOPp->data[8]),4);
	vcdp->chgBus  (c+32,(vlTOPp->data[9]),4);
	vcdp->chgBus  (c+33,(vlTOPp->data[10]),4);
	vcdp->chgBus  (c+34,(vlTOPp->data[11]),4);
	vcdp->chgBus  (c+35,(vlTOPp->data[12]),4);
	vcdp->chgBus  (c+36,(vlTOPp->data[13]),4);
	vcdp->chgBus  (c+37,(vlTOPp->data[14]),4);
	vcdp->chgBus  (c+38,(vlTOPp->data[15]),4);
	vcdp->chgBus  (c+39,(vlTOPp->i),4);
    }
}
