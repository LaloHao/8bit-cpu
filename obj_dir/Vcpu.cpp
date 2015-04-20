// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"              // For This
#include "Vcpu__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu) {
    Vcpu__Syms* __restrict vlSymsp = __VlSymsp = new Vcpu__Syms(this, name());
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    instruction = VL_RAND_RESET_I(8);
    a = VL_RAND_RESET_I(4);
    v__DOT__datain = VL_RAND_RESET_I(4);
    v__DOT__dataout = VL_RAND_RESET_I(4);
    v__DOT__addr = VL_RAND_RESET_I(4);
    v__DOT__currentState = VL_RAND_RESET_I(4);
    v__DOT__nextState = VL_RAND_RESET_I(4);
    v__DOT__pc = VL_RAND_RESET_I(8);
    v__DOT__ir = VL_RAND_RESET_I(8);
    v__DOT__dir = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    v__DOT__cpu_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(4);
    }}
    v__DOT__cpu_mem__DOT__i = VL_RAND_RESET_I(4);
    __Vdly__v__DOT__dataout = VL_RAND_RESET_I(4);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rst = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vcpu::__Vconfigure(Vcpu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu::~Vcpu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcpu::eval() {
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vcpu::eval\n"); );
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

void Vcpu::_eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
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

void Vcpu::_sequent__TOP__1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_sequent__TOP__1\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__v__DOT__cpu_mem__DOT__data__v0,0,0);
    VL_SIG8(__Vdlyvset__v__DOT__cpu_mem__DOT__data__v1,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__cpu_mem__DOT__data__v16,3,0);
    VL_SIG8(__Vdlyvval__v__DOT__cpu_mem__DOT__data__v16,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__cpu_mem__DOT__data__v16,0,0);
    //char	__VpadToAlign9[3];
    // Body
    vlTOPp->__Vdly__v__DOT__dataout = vlTOPp->v__DOT__dataout;
    __Vdlyvset__v__DOT__cpu_mem__DOT__data__v0 = 0U;
    __Vdlyvset__v__DOT__cpu_mem__DOT__data__v1 = 0U;
    __Vdlyvset__v__DOT__cpu_mem__DOT__data__v16 = 0U;
    // ALWAYS at ram.v:15
    if (vlTOPp->rst) {
	vlTOPp->v__DOT__cpu_mem__DOT__i = 0xfU;
	__Vdlyvset__v__DOT__cpu_mem__DOT__data__v0 = 1U;
	vlTOPp->__Vdly__v__DOT__dataout = 0U;
	__Vdlyvset__v__DOT__cpu_mem__DOT__data__v1 = 1U;
    } else {
	if (vlTOPp->v__DOT__dir) {
	    __Vdlyvval__v__DOT__cpu_mem__DOT__data__v16 
		= vlTOPp->v__DOT__datain;
	    __Vdlyvset__v__DOT__cpu_mem__DOT__data__v16 = 1U;
	    __Vdlyvdim0__v__DOT__cpu_mem__DOT__data__v16 
		= vlTOPp->v__DOT__addr;
	    vlTOPp->__Vdly__v__DOT__dataout = vlTOPp->v__DOT__datain;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->v__DOT__dir)))) {
		vlTOPp->__Vdly__v__DOT__dataout = (IData)(vlTOPp->v__DOT__cpu_mem__DOT__data)
		    [(IData)(vlTOPp->v__DOT__addr)];
	    }
	}
    }
    // ALWAYSPOST at ram.v:19
    if (__Vdlyvset__v__DOT__cpu_mem__DOT__data__v0) {
	vlTOPp->v__DOT__cpu_mem__DOT__data[0U] = 0U;
    }
    if (__Vdlyvset__v__DOT__cpu_mem__DOT__data__v1) {
	vlTOPp->v__DOT__cpu_mem__DOT__data[1U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[2U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[3U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[4U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[5U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[6U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[7U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[8U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[9U] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xaU] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xbU] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xcU] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xdU] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xeU] = 0U;
	vlTOPp->v__DOT__cpu_mem__DOT__data[0xfU] = 0U;
    }
    if (__Vdlyvset__v__DOT__cpu_mem__DOT__data__v16) {
	vlTOPp->v__DOT__cpu_mem__DOT__data[(IData)(__Vdlyvdim0__v__DOT__cpu_mem__DOT__data__v16)] 
	    = __Vdlyvval__v__DOT__cpu_mem__DOT__data__v16;
    }
}

void Vcpu::_sequent__TOP__2(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_sequent__TOP__2\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__pc,7,0);
    VL_SIG8(__Vdly__v__DOT__ir,7,0);
    VL_SIG8(__Vdly__a,3,0);
    VL_SIG8(__Vdly__v__DOT__addr,3,0);
    // Body
    __Vdly__v__DOT__pc = vlTOPp->v__DOT__pc;
    __Vdly__a = vlTOPp->a;
    __Vdly__v__DOT__addr = vlTOPp->v__DOT__addr;
    __Vdly__v__DOT__ir = vlTOPp->v__DOT__ir;
    // ALWAYS at cpu.v:52
    if ((0U == (IData)(vlTOPp->v__DOT__currentState))) {
	vlTOPp->v__DOT__dir = 0U;
	__Vdly__v__DOT__pc = 0U;
	__Vdly__v__DOT__ir = 0U;
	__Vdly__a = 0U;
	vlTOPp->v__DOT__datain = 0U;
	__Vdly__v__DOT__addr = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->v__DOT__currentState))) {
	    __Vdly__v__DOT__pc = (0xffU & ((IData)(1U) 
					   + (IData)(vlTOPp->v__DOT__pc)));
	    vlTOPp->v__DOT__dir = 0U;
	    __Vdly__v__DOT__ir = vlTOPp->instruction;
	    __Vdly__v__DOT__addr = (0xfU & (IData)(vlTOPp->instruction));
	} else {
	    if ((3U == (IData)(vlTOPp->v__DOT__currentState))) {
		vlTOPp->v__DOT__dir = 0U;
		__Vdly__v__DOT__addr = (0xfU & (IData)(vlTOPp->v__DOT__ir));
		if (((((((((0U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					   >> 4U))) 
			   | (1U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					     >> 4U)))) 
			  | (2U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					    >> 4U)))) 
			 | (3U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					   >> 4U)))) 
			| (4U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					  >> 4U)))) 
		       | (5U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					 >> 4U)))) 
		      | (6U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					>> 4U)))) | 
		     (8U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
				     >> 4U))))) {
		    if ((0U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					>> 4U)))) {
			__Vdly__a = vlTOPp->v__DOT__dataout;
		    } else {
			if ((1U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					    >> 4U)))) {
			    vlTOPp->v__DOT__dir = 1U;
			    vlTOPp->v__DOT__datain 
				= vlTOPp->a;
			} else {
			    if ((2U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
						>> 4U)))) {
				__Vdly__a = ((IData)(vlTOPp->a) 
					     & (IData)(vlTOPp->v__DOT__dataout));
			    } else {
				if ((3U == (0xfU & 
					    ((IData)(vlTOPp->v__DOT__ir) 
					     >> 4U)))) {
				    __Vdly__a = (0xfU 
						 & ((IData)(vlTOPp->a) 
						    + (IData)(vlTOPp->v__DOT__dataout)));
				} else {
				    if ((4U == (0xfU 
						& ((IData)(vlTOPp->v__DOT__ir) 
						   >> 4U)))) {
					__Vdly__a = 
					    (0xfU & 
					     ((IData)(vlTOPp->a) 
					      - (IData)(vlTOPp->v__DOT__dataout)));
				    } else {
					if ((5U == 
					     (0xfU 
					      & ((IData)(vlTOPp->v__DOT__ir) 
						 >> 4U)))) {
					    if ((0U 
						 == (IData)(vlTOPp->a))) {
						__Vdly__v__DOT__pc 
						    = vlTOPp->v__DOT__addr;
					    }
					} else {
					    if ((6U 
						 == 
						 (0xfU 
						  & ((IData)(vlTOPp->v__DOT__ir) 
						     >> 4U)))) {
						__Vdly__v__DOT__pc 
						    = vlTOPp->v__DOT__addr;
					    } else {
						__Vdly__a 
						    = 
						    (0xfU 
						     & (IData)(vlTOPp->v__DOT__ir));
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((9U == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					>> 4U)))) {
			__Vdly__a = (0xfU & (~ ((IData)(vlTOPp->a) 
						& (IData)(vlTOPp->v__DOT__dataout))));
		    } else {
			if ((0xaU == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
					      >> 4U)))) {
			    __Vdly__a = ((IData)(vlTOPp->a) 
					 | (IData)(vlTOPp->v__DOT__dataout));
			} else {
			    if ((0xbU == (0xfU & ((IData)(vlTOPp->v__DOT__ir) 
						  >> 4U)))) {
				__Vdly__a = (0xfU & 
					     (~ ((IData)(vlTOPp->a) 
						 | (IData)(vlTOPp->v__DOT__dataout))));
			    } else {
				if ((0xcU == (0xfU 
					      & ((IData)(vlTOPp->v__DOT__ir) 
						 >> 4U)))) {
				    __Vdly__a = ((IData)(vlTOPp->a) 
						 ^ (IData)(vlTOPp->v__DOT__dataout));
				} else {
				    if ((0xdU == (0xfU 
						  & ((IData)(vlTOPp->v__DOT__ir) 
						     >> 4U)))) {
					__Vdly__a = 
					    (0xfU & 
					     (~ ((IData)(vlTOPp->a) 
						 ^ (IData)(vlTOPp->v__DOT__dataout))));
				    } else {
					if ((0xeU == 
					     (0xfU 
					      & ((IData)(vlTOPp->v__DOT__ir) 
						 >> 4U)))) {
					    __Vdly__a 
						= (0xfU 
						   & (~ (IData)(vlTOPp->a)));
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__pc = __Vdly__v__DOT__pc;
    vlTOPp->a = __Vdly__a;
    vlTOPp->v__DOT__addr = __Vdly__v__DOT__addr;
    vlTOPp->v__DOT__ir = __Vdly__v__DOT__ir;
}

void Vcpu::_sequent__TOP__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_sequent__TOP__3\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dataout = vlTOPp->__Vdly__v__DOT__dataout;
    // ALWAYS at cpu.v:33
    vlTOPp->v__DOT__currentState = ((IData)(vlTOPp->rst)
				     ? 0U : (IData)(vlTOPp->v__DOT__nextState));
    // ALWAYS at cpu.v:37
    if ((0U == (IData)(vlTOPp->v__DOT__currentState))) {
	vlTOPp->v__DOT__nextState = 1U;
    } else {
	if ((1U == (IData)(vlTOPp->v__DOT__currentState))) {
	    vlTOPp->v__DOT__nextState = 2U;
	} else {
	    if ((2U == (IData)(vlTOPp->v__DOT__currentState))) {
		vlTOPp->v__DOT__nextState = ((7U == 
					      (0xfU 
					       & ((IData)(vlTOPp->v__DOT__ir) 
						  >> 4U)))
					      ? 4U : 3U);
	    } else {
		if ((3U == (IData)(vlTOPp->v__DOT__currentState))) {
		    vlTOPp->v__DOT__nextState = 4U;
		} else {
		    if ((4U == (IData)(vlTOPp->v__DOT__currentState))) {
			vlTOPp->v__DOT__nextState = 1U;
		    }
		}
	    }
	}
    }
}

void Vcpu::_settle__TOP__4(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_settle__TOP__4\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at cpu.v:37
    if ((0U == (IData)(vlTOPp->v__DOT__currentState))) {
	vlTOPp->v__DOT__nextState = 1U;
    } else {
	if ((1U == (IData)(vlTOPp->v__DOT__currentState))) {
	    vlTOPp->v__DOT__nextState = 2U;
	} else {
	    if ((2U == (IData)(vlTOPp->v__DOT__currentState))) {
		vlTOPp->v__DOT__nextState = ((7U == 
					      (0xfU 
					       & ((IData)(vlTOPp->v__DOT__ir) 
						  >> 4U)))
					      ? 4U : 3U);
	    } else {
		if ((3U == (IData)(vlTOPp->v__DOT__currentState))) {
		    vlTOPp->v__DOT__nextState = 4U;
		} else {
		    if ((4U == (IData)(vlTOPp->v__DOT__currentState))) {
			vlTOPp->v__DOT__nextState = 1U;
		    }
		}
	    }
	}
    }
}

void Vcpu::_eval(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_eval\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vcpu::_eval_initial(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_eval_initial\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::final\n"); );
    // Variables
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu::_eval_settle(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_eval_settle\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

QData Vcpu::_change_request(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu::_change_request\n"); );
    Vcpu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
