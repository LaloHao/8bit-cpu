// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcpu_H_
#define _Vcpu_H_

#include "verilated.h"
class Vcpu__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vcpu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(instruction,7,0);
    VL_OUT8(a,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__datain,3,0);
    VL_SIG8(v__DOT__dataout,3,0);
    VL_SIG8(v__DOT__addr,3,0);
    VL_SIG8(v__DOT__currentState,3,0);
    VL_SIG8(v__DOT__nextState,3,0);
    VL_SIG8(v__DOT__pc,7,0);
    VL_SIG8(v__DOT__ir,7,0);
    VL_SIG8(v__DOT__dir,0,0);
    VL_SIG8(v__DOT__cpu_mem__DOT__i,3,0);
    //char	__VpadToAlign17[7];
    VL_SIG8(v__DOT__cpu_mem__DOT__data[16],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__v__DOT__dataout,3,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__rst,0,0);
    //char	__VpadToAlign47[1];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcpu__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vcpu& operator= (const Vcpu&);	///< Copying not allowed
    Vcpu(const Vcpu&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vcpu(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcpu();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcpu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcpu__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vcpu__Syms* __restrict vlSymsp);
  public:
    static void	_eval(Vcpu__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vcpu__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vcpu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vcpu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vcpu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vcpu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vcpu__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vcpu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
