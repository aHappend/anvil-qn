# Anvil-QN Series — Autonomous Qwen3 / Qwen3.5 Hybrid `<think>` Reasoning & Fine-Grained MoE FPGA Accelerators

[**中文主页 (`README.zh-CN.md`)**](README.zh-CN.md) · [**Anvil-Q Series**](https://github.com/aHappend/anvil-q) · [**Anvil-D Series**](https://github.com/aHappend/anvil-d) · [**Anvil-QN Series**](https://github.com/aHappend/anvil-qn) · [**Anvil-E Series**](https://github.com/aHappend/anvil-e) · [**Anvil-EN Series**](https://github.com/aHappend/anvil-en) · [**Furnace-X SoCs**](https://github.com/aHappend/furnace-x) · [**Hammer-V RISC-V SoCs**](https://github.com/aHappend/hammer-v)

Peer flagship series alongside **Anvil-Q**, **Anvil-D**, **Anvil-E**, and **Anvil-EN**. Evolved from parent **Anvil-Q4** (`Qwen2.5` static GQA) into dynamic `<think>.../think>` budget-controlled reasoning, fused per-head QK-RMSNorm, and 128-expert Top-8 sparse MoE, verified across **6 model scales** (`Qwen3-0.6B/1.7B/4B/8B`, `Qwen3-30B-A3B`, plus backward-compatible `Qwen2.5-0.5B..7B`) and **8 physical Arria 10 HIL profiles**.

## Top-Level Chip Generations (Promoted to Repository Root)

| Chip Generation (Top-Level Dir) | Microarchitecture & Target Model Scope | Silicon Status | Top-Conference Whitepapers & RTL |
| :--- | :--- | :---: | :--- |
| **[`Anvil-QN1` (`/anvil_qn1/`)](anvil_qn1/)** | Qwen3 / Qwen3.5 Hybrid <think>/No-Think & Fused QK-RMSNorm Engine (28 SV, 113.02 MHz) | **SIGNED OFF (50 SV, 113.02 MHz, 8-Profile HIL)** | [`SHOWCASE_REPORT.pdf`](anvil_qn1/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_qn1/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_qn1/REPORT.pdf) |
| **[`Anvil-QN2` (`/anvil_qn2/`)](anvil_qn2/)** | Qwen3-MoE (30B-A3B Profile) 128-Expert Top-8 Fine-Grained Sparse Engine (31 SV, 113.02 MHz) | **Active Evolution (0 SV)** | [`SHOWCASE_REPORT.pdf`](anvil_qn2/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_qn2/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_qn2/REPORT.pdf) |
| **[`Anvil-QN3` (`/anvil_qn3/`)](anvil_qn3/)** | Qwen3-Long 128K Dual-Chunk YaRN Dynamic RoPE Scaling Engine | **Active Evolution (0 SV)** | [`anvil_qn3/rtl/`](anvil_qn3/rtl/) |
| **[`Anvil-QN4` (`/anvil_qn4/`)](anvil_qn4/)** | Qwen3.5 Flagship Speculative Hybrid-Reasoning & Vision-Text Engine | **Active Evolution (0 SV)** | [`anvil_qn4/rtl/`](anvil_qn4/rtl/) |

## Multi-Scale Model Matrix, Generational (`N-1`) Evolution & 8-Profile Arria 10 HIL

- **6 Evaluated Model Scales per Chip**: 4 native parameter scales + 2 backward-compatible parent-architecture model families, benchmarked against dual-socket Intel Xeon CPU (FP32) and NVIDIA Tesla V100 32GB GPU (FP16) across context lengths `128..4096`.
- **8-Profile Physical FPGA Board HIL**: 8 distinct on-board M20K weight/activation/token stimulus profiles executed on physical Intel Arria 10 GX1150 (`10AX115N2F45E1SG`, Chip ID `23645547322997765`) with 0 bit errors, plus heterogeneous multi-IP SoC board co-execution (`evidence/soc-board-coexecution.json`).
