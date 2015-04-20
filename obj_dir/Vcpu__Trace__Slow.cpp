// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


//======================

void Vcpu::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vcpu::traceInit, &Vcpu::traceFull, &Vcpu::traceChg, this);
}
void Vcpu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vcpu* t=(Vcpu*)userthis;
    Vcpu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vcpu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcpu* t=(Vcpu*)userthis;
    Vcpu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vcpu::traceInitThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vcpu::traceFullThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcpu::traceInitThis__1(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+26,"clk",-1);
	vcdp->declBit  (c+27,"rst",-1);
	vcdp->declBus  (c+28,"instruction",-1,7,0);
	vcdp->declBus  (c+29,"a",-1,3,0);
	vcdp->declBus  (c+30,"v data_width",-1,31,0);
	vcdp->declBus  (c+30,"v addr_width",-1,31,0);
	vcdp->declBus  (c+30,"v op_width",-1,31,0);
	vcdp->declBus  (c+30,"v op_param",-1,31,0);
	vcdp->declBus  (c+31,"v pc_width",-1,31,0);
	vcdp->declBit  (c+26,"v clk",-1);
	vcdp->declBit  (c+27,"v rst",-1);
	vcdp->declBus  (c+28,"v instruction",-1,7,0);
	vcdp->declBus  (c+29,"v a",-1,3,0);
	vcdp->declBus  (c+19,"v datain",-1,3,0);
	vcdp->declBus  (c+24,"v dataout",-1,3,0);
	vcdp->declBus  (c+20,"v addr",-1,3,0);
	vcdp->declBus  (c+25,"v currentState",-1,3,0);
	vcdp->declBus  (c+1,"v nextState",-1,3,0);
	vcdp->declBus  (c+21,"v pc",-1,7,0);
	vcdp->declBus  (c+22,"v ir",-1,7,0);
	vcdp->declBit  (c+23,"v dir",-1);
	vcdp->declBus  (c+32,"v START",-1,31,0);
	vcdp->declBus  (c+33,"v FETCH",-1,31,0);
	vcdp->declBus  (c+34,"v DECODE",-1,31,0);
	vcdp->declBus  (c+35,"v EXECUTE",-1,31,0);
	vcdp->declBus  (c+30,"v WAIT",-1,31,0);
	vcdp->declBus  (c+32,"v ldaxx",-1,31,0);
	vcdp->declBus  (c+33,"v ldxxa",-1,31,0);
	vcdp->declBus  (c+34,"v andaxx",-1,31,0);
	vcdp->declBus  (c+35,"v addaxx",-1,31,0);
	vcdp->declBus  (c+30,"v subaxx",-1,31,0);
	vcdp->declBus  (c+36,"v jzxx",-1,31,0);
	vcdp->declBus  (c+37,"v jmpxx",-1,31,0);
	vcdp->declBus  (c+38,"v nop",-1,31,0);
	vcdp->declBus  (c+31,"v movaxx",-1,31,0);
	vcdp->declBus  (c+39,"v nandaxx",-1,31,0);
	vcdp->declBus  (c+40,"v oraxx",-1,31,0);
	vcdp->declBus  (c+41,"v noraxx",-1,31,0);
	vcdp->declBus  (c+42,"v xoraxx",-1,31,0);
	vcdp->declBus  (c+43,"v xnoraxx",-1,31,0);
	vcdp->declBus  (c+44,"v nota",-1,31,0);
	vcdp->declBus  (c+30,"v cpu_mem data_width",-1,31,0);
	vcdp->declBus  (c+30,"v cpu_mem addr_width",-1,31,0);
	vcdp->declBit  (c+26,"v cpu_mem clk",-1);
	vcdp->declBit  (c+27,"v cpu_mem rst",-1);
	vcdp->declBit  (c+23,"v cpu_mem rw",-1);
	vcdp->declBus  (c+20,"v cpu_mem addr",-1,3,0);
	vcdp->declBus  (c+19,"v cpu_mem datain",-1,3,0);
	vcdp->declBus  (c+24,"v cpu_mem dataout",-1,3,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+2+i*1,"v cpu_mem data",(i+0),3,0);}}
	vcdp->declBus  (c+18,"v cpu_mem i",-1,3,0);
	vcdp->declBus  (c+33,"v cpu_mem WRITE",-1,31,0);
	vcdp->declBus  (c+32,"v cpu_mem READ",-1,31,0);
    }
}

void Vcpu::traceFullThis__1(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__nextState),4);
	vcdp->fullBus  (c+2,(vlTOPp->v__DOT__cpu_mem__DOT__data[0]),4);
	vcdp->fullBus  (c+3,(vlTOPp->v__DOT__cpu_mem__DOT__data[1]),4);
	vcdp->fullBus  (c+4,(vlTOPp->v__DOT__cpu_mem__DOT__data[2]),4);
	vcdp->fullBus  (c+5,(vlTOPp->v__DOT__cpu_mem__DOT__data[3]),4);
	vcdp->fullBus  (c+6,(vlTOPp->v__DOT__cpu_mem__DOT__data[4]),4);
	vcdp->fullBus  (c+7,(vlTOPp->v__DOT__cpu_mem__DOT__data[5]),4);
	vcdp->fullBus  (c+8,(vlTOPp->v__DOT__cpu_mem__DOT__data[6]),4);
	vcdp->fullBus  (c+9,(vlTOPp->v__DOT__cpu_mem__DOT__data[7]),4);
	vcdp->fullBus  (c+10,(vlTOPp->v__DOT__cpu_mem__DOT__data[8]),4);
	vcdp->fullBus  (c+11,(vlTOPp->v__DOT__cpu_mem__DOT__data[9]),4);
	vcdp->fullBus  (c+12,(vlTOPp->v__DOT__cpu_mem__DOT__data[10]),4);
	vcdp->fullBus  (c+13,(vlTOPp->v__DOT__cpu_mem__DOT__data[11]),4);
	vcdp->fullBus  (c+14,(vlTOPp->v__DOT__cpu_mem__DOT__data[12]),4);
	vcdp->fullBus  (c+15,(vlTOPp->v__DOT__cpu_mem__DOT__data[13]),4);
	vcdp->fullBus  (c+16,(vlTOPp->v__DOT__cpu_mem__DOT__data[14]),4);
	vcdp->fullBus  (c+17,(vlTOPp->v__DOT__cpu_mem__DOT__data[15]),4);
	vcdp->fullBus  (c+18,(vlTOPp->v__DOT__cpu_mem__DOT__i),4);
	vcdp->fullBus  (c+19,(vlTOPp->v__DOT__datain),4);
	vcdp->fullBus  (c+20,(vlTOPp->v__DOT__addr),4);
	vcdp->fullBus  (c+21,(vlTOPp->v__DOT__pc),8);
	vcdp->fullBus  (c+22,(vlTOPp->v__DOT__ir),8);
	vcdp->fullBit  (c+23,(vlTOPp->v__DOT__dir));
	vcdp->fullBus  (c+24,(vlTOPp->v__DOT__dataout),4);
	vcdp->fullBus  (c+25,(vlTOPp->v__DOT__currentState),4);
	vcdp->fullBus  (c+28,(vlTOPp->instruction),8);
	vcdp->fullBus  (c+29,(vlTOPp->a),4);
	vcdp->fullBit  (c+26,(vlTOPp->clk));
	vcdp->fullBit  (c+27,(vlTOPp->rst));
	vcdp->fullBus  (c+31,(8U),32);
	vcdp->fullBus  (c+34,(2U),32);
	vcdp->fullBus  (c+35,(3U),32);
	vcdp->fullBus  (c+36,(5U),32);
	vcdp->fullBus  (c+37,(6U),32);
	vcdp->fullBus  (c+38,(7U),32);
	vcdp->fullBus  (c+39,(9U),32);
	vcdp->fullBus  (c+40,(0xaU),32);
	vcdp->fullBus  (c+41,(0xbU),32);
	vcdp->fullBus  (c+42,(0xcU),32);
	vcdp->fullBus  (c+43,(0xdU),32);
	vcdp->fullBus  (c+44,(0xeU),32);
	vcdp->fullBus  (c+30,(4U),32);
	vcdp->fullBus  (c+33,(1U),32);
	vcdp->fullBus  (c+32,(0U),32);
    }
}
