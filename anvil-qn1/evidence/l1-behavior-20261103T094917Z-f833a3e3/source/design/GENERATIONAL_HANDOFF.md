# Generational Silicon Handoff Brief: anvil_q3_reference -> Anvil-QN1

## 1. Parent Silicon Signoff & Post-Fit PPA Summary
- **Parent Chip**: `anvil_q3_reference` (`/data/sufeng/anvil-q3-line/workspace/project`)
- **Quartus 17.1 STA Status**: `N/A` (`N/A`)
- **Setup WNS (100 MHz / 10.0 ns)**: `N/A ns` (`Fmax = N/A MHz`)
- **Hold WNS**: `N/A ns`
- **Arria 10 Post-Fit Area**: `N/A ALMs (N/A)`, `N/A Registers`, `N/A M20K (N/A bits)`, `N/A DSP Blocks`
- **Arria 10 GX Physical PCIe HIL**: `N/A` (`tier=N/A`, `deterministic=N/A`)

## 2. Inherited RTL Modules
- `anvil_q3_00_pkg.sv` (100 lines)
- `anvil_q3_accumulator.sv` (66 lines)
- `anvil_q3_add128.sv` (45 lines)
- `anvil_q3_awq_dot8.sv` (93 lines)
- `anvil_q3_bank_scheduler.sv` (361 lines)
- `anvil_q3_cache_codec.sv` (209 lines)
- `anvil_q3_decoder_layer.sv` (182 lines)
- `anvil_q3_divider.sv` (114 lines)
- `anvil_q3_elementwise.sv` (129 lines)
- `anvil_q3_exp.sv` (131 lines)
- `anvil_q3_gemv.sv` (176 lines)
- `anvil_q3_gqa_attention.sv` (245 lines)
- `anvil_q3_isqrt.sv` (84 lines)
- `anvil_q3_kv_cache.sv` (208 lines)
- `anvil_q3_mem_port.sv` (77 lines)
- `anvil_q3_multiplier.sv` (99 lines)
- `anvil_q3_parameters.sv` (52 lines)
- `anvil_q3_rmsnorm.sv` (197 lines)
- `anvil_q3_rope.sv` (153 lines)
- `anvil_q3_signed_divider.sv` (81 lines)
- `anvil_q3_silu.sv` (118 lines)
- `anvil_q3_swiglu_mlp.sv` (76 lines)
- `anvil_q3_tensor_array.sv` (281 lines)
- `anvil_q3_token_io.sv` (130 lines)
- `anvil_q3_top.sv` (208 lines)
- `anvil_q3_weight_prefetcher.sv` (329 lines)

## 3. Architectural Evolution Guidelines for Coordinator
- Preserve 100% backward compatibility with parent interfaces and verified numerical modes.
- All large memories (`>= 2 KB`) with byte enables must use explicit byte-lane unpacked arrays (`logic [7:0] mem_b0..bN [0:DEPTH-1]`) so Quartus 17.1 infers hard M20K blocks in <45 seconds.
- Maintain `<= 10.0 ns` (100 MHz+) synchronous register-to-register logic depth.
