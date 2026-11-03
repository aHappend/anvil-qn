// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VANVIL_QN1_TOP_H_
#define VERILATED_VANVIL_QN1_TOP_H_  // guard

#include "verilated.h"

class Vanvil_qn1_top__Syms;
class Vanvil_qn1_top___024root;
class Vanvil_qn1_top_anvil_qn1_scalar;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vanvil_qn1_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vanvil_qn1_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&cancel,0,0);
    VL_IN8(&token_valid,0,0);
    VL_IN8(&new_sequence,0,0);
    VL_IN8(&token_phase,0,0);
    VL_IN8(&logit_ready,0,0);
    VL_OUT8(&token_ready,0,0);
    VL_OUT8(&logit_valid,0,0);
    VL_OUT8(&done,0,0);
    VL_OUT8(&error,0,0);
    VL_OUT8(&cancel_done,0,0);
    VL_OUT8(&mem_req_valid,7,0);
    VL_OUT8(&mem_req_write,7,0);
    VL_IN8(&mem_req_ready,7,0);
    VL_IN8(&mem_rsp_valid,7,0);
    VL_IN8(&mem_rsp_error,7,0);
    VL_OUT8(&mem_rsp_ready,7,0);
    VL_IN8(&draft_valid,0,0);
    VL_OUT8(&draft_ready,0,0);
    VL_IN8(&draft_count,2,0);
    VL_OUT8(&commit_valid,0,0);
    VL_IN8(&commit_ready,0,0);
    VL_OUT8(&commit_count,2,0);
    VL_OUT8(&think_active,0,0);
    VL_IN8(&csr_valid,0,0);
    VL_IN8(&csr_write,0,0);
    VL_OUT8(&csr_ready,0,0);
    VL_IN8(&csr_wstrb,3,0);
    VL_OUT8(&csr_rsp_valid,0,0);
    VL_IN8(&csr_rsp_ready,0,0);
    VL_OUT8(&csr_error,0,0);
    VL_IN16(&draft_parents,11,0);
    VL_IN16(&csr_addr,11,0);
    VL_IN(&token_id,31,0);
    VL_IN(&token_pos,31,0);
    VL_OUT(&logit_index,31,0);
    VL_OUT(&logit_data,31,0);
    VL_OUT(&mem_req_kind,31,0);
    VL_OUTW(&mem_req_layer,255,0,8);
    VL_OUTW(&mem_req_row,255,0,8);
    VL_OUTW(&mem_req_col,255,0,8);
    VL_OUTW(&mem_req_wdata,255,0,8);
    VL_OUT(&mem_req_proj,23,0);
    VL_OUTW(&mem_req_tag,511,0,16);
    VL_INW(&mem_rsp_rdata,255,0,8);
    VL_INW(&mem_rsp_tag,511,0,16);
    VL_INW(&draft_tokens,127,0,4);
    VL_OUTW(&commit_tokens,159,0,5);
    VL_OUT(&commit_pos,31,0);
    VL_IN(&csr_wdata,31,0);
    VL_OUT(&csr_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic;
    Vanvil_qn1_top_anvil_qn1_scalar* const __PVT__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vanvil_qn1_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vanvil_qn1_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vanvil_qn1_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vanvil_qn1_top();
  private:
    VL_UNCOPYABLE(Vanvil_qn1_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
