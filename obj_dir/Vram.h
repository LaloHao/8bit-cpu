// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vram_H_
#define _Vram_H_

#include "verilated.h"
class Vram__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vram) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(rw,0,0);
    VL_IN8(addr,3,0);
    VL_IN8(datain,3,0);
    VL_OUT8(dataout,3,0);
    VL_OUT8(i,3,0);
    //char	__VpadToAlign7[1];
    VL_OUT8(data[16],3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    //char	__VpadToAlign28[4];
    VL_SIG8(v__DOT__data[16],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__rst,0,0);
    //char	__VpadToAlign54[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vram__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vram& operator= (const Vram&);	///< Copying not allowed
    Vram(const Vram&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vram(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vram();
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
    static void _eval_initial_loop(Vram__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vram__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vram__Syms* __restrict vlSymsp);
  public:
    static void	_eval(Vram__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vram__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vram__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vram__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vram__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vram__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
