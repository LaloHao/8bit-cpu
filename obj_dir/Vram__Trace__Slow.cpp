// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


//======================

void Vram::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vram::traceInit, &Vram::traceFull, &Vram::traceChg, this);
}
void Vram::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vram* t=(Vram*)userthis;
    Vram__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vram::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vram* t=(Vram*)userthis;
    Vram__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vram::traceInitThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vram::traceFullThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vram::traceInitThis__1(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+17,"clk",-1);
	vcdp->declBit  (c+18,"rst",-1);
	vcdp->declBit  (c+19,"rw",-1);
	vcdp->declBus  (c+20,"addr",-1,3,0);
	vcdp->declBus  (c+21,"datain",-1,3,0);
	vcdp->declBus  (c+22,"dataout",-1,3,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+23+i*1,"data",(i+0),3,0);}}
	vcdp->declBus  (c+39,"i",-1,3,0);
	vcdp->declBus  (c+40,"v data_width",-1,31,0);
	vcdp->declBus  (c+40,"v addr_width",-1,31,0);
	vcdp->declBit  (c+17,"v clk",-1);
	vcdp->declBit  (c+18,"v rst",-1);
	vcdp->declBit  (c+19,"v rw",-1);
	vcdp->declBus  (c+20,"v addr",-1,3,0);
	vcdp->declBus  (c+21,"v datain",-1,3,0);
	vcdp->declBus  (c+22,"v dataout",-1,3,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+1+i*1,"v data",(i+0),3,0);}}
	vcdp->declBus  (c+39,"v i",-1,3,0);
    }
}

void Vram::traceFullThis__1(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__data[0]),4);
	vcdp->fullBus  (c+2,(vlTOPp->v__DOT__data[1]),4);
	vcdp->fullBus  (c+3,(vlTOPp->v__DOT__data[2]),4);
	vcdp->fullBus  (c+4,(vlTOPp->v__DOT__data[3]),4);
	vcdp->fullBus  (c+5,(vlTOPp->v__DOT__data[4]),4);
	vcdp->fullBus  (c+6,(vlTOPp->v__DOT__data[5]),4);
	vcdp->fullBus  (c+7,(vlTOPp->v__DOT__data[6]),4);
	vcdp->fullBus  (c+8,(vlTOPp->v__DOT__data[7]),4);
	vcdp->fullBus  (c+9,(vlTOPp->v__DOT__data[8]),4);
	vcdp->fullBus  (c+10,(vlTOPp->v__DOT__data[9]),4);
	vcdp->fullBus  (c+11,(vlTOPp->v__DOT__data[10]),4);
	vcdp->fullBus  (c+12,(vlTOPp->v__DOT__data[11]),4);
	vcdp->fullBus  (c+13,(vlTOPp->v__DOT__data[12]),4);
	vcdp->fullBus  (c+14,(vlTOPp->v__DOT__data[13]),4);
	vcdp->fullBus  (c+15,(vlTOPp->v__DOT__data[14]),4);
	vcdp->fullBus  (c+16,(vlTOPp->v__DOT__data[15]),4);
	vcdp->fullBit  (c+17,(vlTOPp->clk));
	vcdp->fullBit  (c+18,(vlTOPp->rst));
	vcdp->fullBit  (c+19,(vlTOPp->rw));
	vcdp->fullBus  (c+20,(vlTOPp->addr),4);
	vcdp->fullBus  (c+21,(vlTOPp->datain),4);
	vcdp->fullBus  (c+22,(vlTOPp->dataout),4);
	vcdp->fullBus  (c+23,(vlTOPp->data[0]),4);
	vcdp->fullBus  (c+24,(vlTOPp->data[1]),4);
	vcdp->fullBus  (c+25,(vlTOPp->data[2]),4);
	vcdp->fullBus  (c+26,(vlTOPp->data[3]),4);
	vcdp->fullBus  (c+27,(vlTOPp->data[4]),4);
	vcdp->fullBus  (c+28,(vlTOPp->data[5]),4);
	vcdp->fullBus  (c+29,(vlTOPp->data[6]),4);
	vcdp->fullBus  (c+30,(vlTOPp->data[7]),4);
	vcdp->fullBus  (c+31,(vlTOPp->data[8]),4);
	vcdp->fullBus  (c+32,(vlTOPp->data[9]),4);
	vcdp->fullBus  (c+33,(vlTOPp->data[10]),4);
	vcdp->fullBus  (c+34,(vlTOPp->data[11]),4);
	vcdp->fullBus  (c+35,(vlTOPp->data[12]),4);
	vcdp->fullBus  (c+36,(vlTOPp->data[13]),4);
	vcdp->fullBus  (c+37,(vlTOPp->data[14]),4);
	vcdp->fullBus  (c+38,(vlTOPp->data[15]),4);
	vcdp->fullBus  (c+39,(vlTOPp->i),4);
	vcdp->fullBus  (c+40,(4U),32);
    }
}
