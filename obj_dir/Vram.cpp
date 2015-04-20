// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "Vram.h"              // For This
#include "Vram__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vram) {
    Vram__Syms* __restrict vlSymsp = __VlSymsp = new Vram__Syms(this, name());
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    rw = VL_RAND_RESET_I(1);
    addr = VL_RAND_RESET_I(4);
    datain = VL_RAND_RESET_I(4);
    dataout = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    data[__Vi0] = VL_RAND_RESET_I(4);
    }}
    i = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    v__DOT__data[__Vi0] = VL_RAND_RESET_I(4);
    }}
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rst = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vram::__Vconfigure(Vram__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vram::~Vram() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vram::eval() {
    Vram__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vram::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vram::_eval_initial_loop(Vram__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vram::_sequent__TOP__1(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_sequent__TOP__1\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__data__v0,0,0);
    VL_SIG8(__Vdlyvset__data__v1,0,0);
    VL_SIG8(__Vdlyvset__data__v2,0,0);
    VL_SIG8(__Vdlyvset__data__v3,0,0);
    VL_SIG8(__Vdlyvset__data__v4,0,0);
    VL_SIG8(__Vdlyvset__data__v5,0,0);
    VL_SIG8(__Vdlyvset__data__v6,0,0);
    VL_SIG8(__Vdlyvset__data__v7,0,0);
    VL_SIG8(__Vdlyvset__data__v8,0,0);
    VL_SIG8(__Vdlyvset__data__v9,0,0);
    VL_SIG8(__Vdlyvset__data__v10,0,0);
    VL_SIG8(__Vdlyvset__data__v11,0,0);
    VL_SIG8(__Vdlyvset__data__v12,0,0);
    VL_SIG8(__Vdlyvset__data__v13,0,0);
    VL_SIG8(__Vdlyvset__data__v14,0,0);
    VL_SIG8(__Vdlyvset__data__v15,0,0);
    VL_SIG8(__Vdlyvdim0__data__v16,3,0);
    VL_SIG8(__Vdlyvval__data__v16,3,0);
    VL_SIG8(__Vdlyvset__data__v16,0,0);
    //char	__VpadToAlign23[1];
    // Body
    __Vdlyvset__data__v0 = 0U;
    __Vdlyvset__data__v1 = 0U;
    __Vdlyvset__data__v2 = 0U;
    __Vdlyvset__data__v3 = 0U;
    __Vdlyvset__data__v4 = 0U;
    __Vdlyvset__data__v5 = 0U;
    __Vdlyvset__data__v6 = 0U;
    __Vdlyvset__data__v7 = 0U;
    __Vdlyvset__data__v8 = 0U;
    __Vdlyvset__data__v9 = 0U;
    __Vdlyvset__data__v10 = 0U;
    __Vdlyvset__data__v11 = 0U;
    __Vdlyvset__data__v12 = 0U;
    __Vdlyvset__data__v13 = 0U;
    __Vdlyvset__data__v14 = 0U;
    __Vdlyvset__data__v15 = 0U;
    __Vdlyvset__data__v16 = 0U;
    // ALWAYS at ram.v:12
    if (vlTOPp->rst) {
	__Vdlyvset__data__v0 = 1U;
	vlTOPp->i = 1U;
	__Vdlyvset__data__v1 = 1U;
	vlTOPp->i = 2U;
	__Vdlyvset__data__v2 = 1U;
	vlTOPp->i = 3U;
	__Vdlyvset__data__v3 = 1U;
	vlTOPp->i = 4U;
	__Vdlyvset__data__v4 = 1U;
	vlTOPp->i = 5U;
	__Vdlyvset__data__v5 = 1U;
	vlTOPp->i = 6U;
	__Vdlyvset__data__v6 = 1U;
	vlTOPp->i = 7U;
	__Vdlyvset__data__v7 = 1U;
	vlTOPp->i = 8U;
	__Vdlyvset__data__v8 = 1U;
	vlTOPp->i = 9U;
	__Vdlyvset__data__v9 = 1U;
	vlTOPp->i = 0xaU;
	__Vdlyvset__data__v10 = 1U;
	vlTOPp->i = 0xbU;
	__Vdlyvset__data__v11 = 1U;
	vlTOPp->i = 0xcU;
	__Vdlyvset__data__v12 = 1U;
	vlTOPp->i = 0xdU;
	__Vdlyvset__data__v13 = 1U;
	vlTOPp->i = 0xeU;
	__Vdlyvset__data__v14 = 1U;
	vlTOPp->i = 0xfU;
	__Vdlyvset__data__v15 = 1U;
	vlTOPp->dataout = 0U;
    } else {
	if (vlTOPp->rw) {
	    __Vdlyvval__data__v16 = vlTOPp->datain;
	    __Vdlyvset__data__v16 = 1U;
	    __Vdlyvdim0__data__v16 = vlTOPp->addr;
	} else {
	    vlTOPp->dataout = (IData)(vlTOPp->data)
		[(IData)(vlTOPp->addr)];
	}
    }
    // ALWAYSPOST at ram.v:15
    if (__Vdlyvset__data__v0) {
	vlTOPp->data[0U] = 0U;
    }
    if (__Vdlyvset__data__v1) {
	vlTOPp->data[1U] = 0U;
    }
    if (__Vdlyvset__data__v2) {
	vlTOPp->data[2U] = 0U;
    }
    if (__Vdlyvset__data__v3) {
	vlTOPp->data[3U] = 0U;
    }
    if (__Vdlyvset__data__v4) {
	vlTOPp->data[4U] = 0U;
    }
    if (__Vdlyvset__data__v5) {
	vlTOPp->data[5U] = 0U;
    }
    if (__Vdlyvset__data__v6) {
	vlTOPp->data[6U] = 0U;
    }
    if (__Vdlyvset__data__v7) {
	vlTOPp->data[7U] = 0U;
    }
    if (__Vdlyvset__data__v8) {
	vlTOPp->data[8U] = 0U;
    }
    if (__Vdlyvset__data__v9) {
	vlTOPp->data[9U] = 0U;
    }
    if (__Vdlyvset__data__v10) {
	vlTOPp->data[0xaU] = 0U;
    }
    if (__Vdlyvset__data__v11) {
	vlTOPp->data[0xbU] = 0U;
    }
    if (__Vdlyvset__data__v12) {
	vlTOPp->data[0xcU] = 0U;
    }
    if (__Vdlyvset__data__v13) {
	vlTOPp->data[0xdU] = 0U;
    }
    if (__Vdlyvset__data__v14) {
	vlTOPp->data[0xeU] = 0U;
    }
    if (__Vdlyvset__data__v15) {
	vlTOPp->data[0xfU] = 0U;
    }
    if (__Vdlyvset__data__v16) {
	vlTOPp->data[(IData)(__Vdlyvdim0__data__v16)] 
	    = __Vdlyvval__data__v16;
    }
    vlTOPp->v__DOT__data[0xfU] = (IData)(vlTOPp->data)
	[0xfU];
    vlTOPp->v__DOT__data[0xeU] = (IData)(vlTOPp->data)
	[0xeU];
    vlTOPp->v__DOT__data[0xdU] = (IData)(vlTOPp->data)
	[0xdU];
    vlTOPp->v__DOT__data[0xcU] = (IData)(vlTOPp->data)
	[0xcU];
    vlTOPp->v__DOT__data[0xbU] = (IData)(vlTOPp->data)
	[0xbU];
    vlTOPp->v__DOT__data[0xaU] = (IData)(vlTOPp->data)
	[0xaU];
    vlTOPp->v__DOT__data[9U] = (IData)(vlTOPp->data)
	[9U];
    vlTOPp->v__DOT__data[8U] = (IData)(vlTOPp->data)
	[8U];
    vlTOPp->v__DOT__data[7U] = (IData)(vlTOPp->data)
	[7U];
    vlTOPp->v__DOT__data[6U] = (IData)(vlTOPp->data)
	[6U];
    vlTOPp->v__DOT__data[5U] = (IData)(vlTOPp->data)
	[5U];
    vlTOPp->v__DOT__data[4U] = (IData)(vlTOPp->data)
	[4U];
    vlTOPp->v__DOT__data[3U] = (IData)(vlTOPp->data)
	[3U];
    vlTOPp->v__DOT__data[2U] = (IData)(vlTOPp->data)
	[2U];
    vlTOPp->v__DOT__data[1U] = (IData)(vlTOPp->data)
	[1U];
    vlTOPp->v__DOT__data[0U] = (IData)(vlTOPp->data)
	[0U];
}

void Vram::_settle__TOP__2(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_settle__TOP__2\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__data[0xfU] = (IData)(vlTOPp->data)
	[0xfU];
    vlTOPp->v__DOT__data[0xeU] = (IData)(vlTOPp->data)
	[0xeU];
    vlTOPp->v__DOT__data[0xdU] = (IData)(vlTOPp->data)
	[0xdU];
    vlTOPp->v__DOT__data[0xcU] = (IData)(vlTOPp->data)
	[0xcU];
    vlTOPp->v__DOT__data[0xbU] = (IData)(vlTOPp->data)
	[0xbU];
    vlTOPp->v__DOT__data[0xaU] = (IData)(vlTOPp->data)
	[0xaU];
    vlTOPp->v__DOT__data[9U] = (IData)(vlTOPp->data)
	[9U];
    vlTOPp->v__DOT__data[8U] = (IData)(vlTOPp->data)
	[8U];
    vlTOPp->v__DOT__data[7U] = (IData)(vlTOPp->data)
	[7U];
    vlTOPp->v__DOT__data[6U] = (IData)(vlTOPp->data)
	[6U];
    vlTOPp->v__DOT__data[5U] = (IData)(vlTOPp->data)
	[5U];
    vlTOPp->v__DOT__data[4U] = (IData)(vlTOPp->data)
	[4U];
    vlTOPp->v__DOT__data[3U] = (IData)(vlTOPp->data)
	[3U];
    vlTOPp->v__DOT__data[2U] = (IData)(vlTOPp->data)
	[2U];
    vlTOPp->v__DOT__data[1U] = (IData)(vlTOPp->data)
	[1U];
    vlTOPp->v__DOT__data[0U] = (IData)(vlTOPp->data)
	[0U];
}

void Vram::_eval(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_eval\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vram::_eval_initial(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_eval_initial\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vram::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vram::final\n"); );
    // Variables
    Vram__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vram::_eval_settle(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_eval_settle\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

QData Vram::_change_request(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vram::_change_request\n"); );
    Vram* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
