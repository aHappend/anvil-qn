
#include "Vanvil_qn1_top.h"
#include "verilated.h"
#include <array>
#include <chrono>
#include <cstdint>
#include <deque>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
using U=uint32_t;
using L=uint64_t;
static void check(bool ok,const std::string& message) {
  if (!ok) throw std::runtime_error(message);
}
static std::vector<U> load(const std::string& path) {
  std::ifstream input(path);check(bool(input),"missing image "+path);
  std::vector<U> result;U value;
  while (input>>std::hex>>value) result.push_back(value);
  check(input.eof(),"invalid image "+path);return result;
}
struct Response { L tag; U data; };
int main(int argc,char** argv) {
  try {
    check(argc==9,"layer driver arguments");
    const std::string images=argv[1];
    const U H=std::stoul(argv[2]),I=std::stoul(argv[3]),QH=std::stoul(argv[4]);
    const U KH=std::stoul(argv[5]),D=std::stoul(argv[6]),G=std::stoul(argv[7]);
    const U threads=std::stoul(argv[8]);
    const U QD=QH*D,KD=KH*D,MAX=std::max(I,std::max(H,QD));
    const std::array<U,7> inputs={H,H,H,QD,H,H,I};
    const std::array<U,7> outputs={QD,KD,KD,H,I,I,H};
    auto expected=load(images+"/scratch.hex"),initial=load(images+"/initial.hex");
    auto gamma=load(images+"/gamma.hex");
    check(expected.size()==15*MAX && initial.size()==H &&
          gamma.size()==16*MAX,"reference image shapes");
    std::vector<U> scratch(15*MAX),keys(KD),values(KD),writes(15*MAX);
    std::vector<bool> valid(15*MAX),key_valid(KD),value_valid(KD);
    std::array<std::deque<Response>,8> pending;
    std::array<std::array<L,4>,7> projection_reads{};
    std::array<L,16> kind_reads{};
    L cycles=0,requests=0,compared=0,key_writes=0,value_writes=0;
    L accepted_cycle=0,last_write_response=0;
    const std::array<U,8> shifts={0,16,4,20,8,24,12,28};
    auto context=std::make_unique<VerilatedContext>();
    context->threads(threads);
    auto dut=std::make_unique<Vanvil_qn1_top>(context.get());
    dut->clk=0;dut->rst_n=0;dut->cancel=0;dut->token_valid=0;
    dut->new_sequence=0;dut->token_phase=0;dut->token_id=3;dut->token_pos=0;
    dut->logit_ready=1;dut->commit_ready=1;dut->draft_valid=0;
    dut->draft_count=0;dut->draft_parents=0;dut->draft_tokens=VlWide<4>{};
    dut->csr_valid=0;dut->csr_write=0;dut->csr_addr=0;dut->csr_wdata=0;
    dut->csr_wstrb=0;dut->csr_rsp_ready=1;
    dut->mem_req_ready=255;dut->mem_rsp_valid=0;dut->mem_rsp_error=0;
    for (unsigned b=0;b<8;++b) {
      dut->mem_rsp_rdata[b]=0;dut->mem_rsp_tag[2*b]=0;dut->mem_rsp_tag[2*b+1]=0;
    }
    dut->eval();
    check(!dut->token_ready && !dut->mem_req_valid && !dut->logit_valid &&
          !dut->done && !dut->error && !dut->commit_valid && !dut->think_active,
          "layer reset outputs");
    auto edge=[&] {
      dut->clk=1;dut->eval();context->timeInc(5);
      dut->clk=0;dut->eval();context->timeInc(5);
    };
    edge();edge();dut->rst_n=1;dut->eval();
    bool started=false,finished=false;
    auto last_progress=std::chrono::steady_clock::now();
    while (!finished) {
      dut->token_valid=!started;dut->new_sequence=!started;
      dut->mem_rsp_valid=0;
      for (unsigned b=0;b<8;++b) if (!pending[b].empty()) {
        dut->mem_rsp_valid|=1U<<b;
        dut->mem_rsp_rdata[b]=pending[b].front().data;
        dut->mem_rsp_tag[2*b]=U(pending[b].front().tag);
        dut->mem_rsp_tag[2*b+1]=U(pending[b].front().tag>>32);
      }
      dut->eval();
      check(!dut->error && !dut->cancel_done && !dut->done &&
            !dut->logit_valid && !dut->commit_valid && !dut->draft_ready,
            "unexpected layer status cycle="+std::to_string(cycles));
      if (dut->token_valid && dut->token_ready) {
        check(!started,"duplicate input acceptance");started=true;accepted_cycle=cycles;
      }
      for (unsigned b=0;b<8;++b) {
        if ((dut->mem_rsp_valid & dut->mem_rsp_ready) & (1U<<b)) {
          check(!pending[b].empty(),"unowned memory response");
          pending[b].pop_front();last_write_response=cycles;
        }
      }
      for (unsigned b=0;b<8;++b) if (dut->mem_req_valid & (1U<<b)) {
        U kind=(dut->mem_req_kind>>(4*b))&15,proj=(dut->mem_req_proj>>(3*b))&7;
        U layer=dut->mem_req_layer[b],row=dut->mem_req_row[b],col=dut->mem_req_col[b];
        U data=0;bool write=dut->mem_req_write & (1U<<b);
        if (!write && kind==8 && row==0 && col==0 && writes[H-1]==2) {
          for (const auto& queue:pending) check(queue.empty(),"unsettled layer boundary");
          check(cycles>last_write_response,"layer boundary preceded settlement");
          finished=true;break;
        }
        check(layer==0,"layer address before layer completion");
        check(col<MAX,"memory column bound");
        if (write) {
          U got=dut->mem_req_wdata[b];
          check((got>>16)==0,"write reserved payload");
          if (kind==8) {
            check(row<13 && col<(row==2 || row==5 ? QD:
                  row==3 || row==4 ? KD:row==9 || row==10 || row==11 ? I:H),
                  "scratch write extent");
            U a=row*MAX+col;
            U want=row==0 && writes[a]==0 ? initial[col]:expected[a];
            check(got==want,"LAYER_WRITE_COMPARE slot="+std::to_string(row)+
                  " coordinate="+std::to_string(col)+" got="+std::to_string(got)+
                  " expected="+std::to_string(want));
            check(writes[a]<(row==0 ? 2U:1U),"duplicate scratch write");
            scratch[a]=got;valid[a]=true;++writes[a];++compared;
          } else {
            check((kind==9 || kind==10) && row==0 && col<KD,"KV write address");
            auto& seen=kind==9 ? key_valid:value_valid;
            auto& storage=kind==9 ? keys:values;
            check(!seen[col],"duplicate KV position");
            check(got==expected[(kind==9 ? 3:4)*MAX+col],"LAYER_KV_COMPARE");
            seen[col]=true;storage[col]=got;
            if (kind==9) ++key_writes;else ++value_writes;
            ++compared;
          }
        } else {
          ++kind_reads[kind];
          switch (kind) {
            case 0:
              check(row==3 && col<H,"input embedding address");data=initial[col];break;
            case 1:case 2:case 3: {
              check(proj<7,"projection ID");
              check(kind==1 ? row<inputs[proj]:row<inputs[proj]/G,
                    "projection input/group extent");
              check(kind==3 ? col<outputs[proj]:col<(outputs[proj]+7)/8,
                    "projection output extent");
              ++projection_reads[proj][kind];
              if (kind==3) {
                const std::array<U,3> scales={0x3a80,0x3b00,0x3b40};
                data=scales[(row+col+proj)%3];
              } else for (U lane=0;lane<8;++lane) {
                U output=col*8+lane;
                U q=kind==2 ? 8:8+(row*3+output*5+proj*2)%7-3;
                data|=q<<shifts[lane];
              }
              break;
            }
            case 5:case 6:case 12:case 13:
              check(row==0 && col<(kind>=12 ? D:H),"norm gamma address");
              data=gamma[kind*MAX+col];break;
            case 8: {
              check(row<13 && valid[row*MAX+col],"uninitialized scratch read");
              data=scratch[row*MAX+col];break;
            }
            case 9:case 10:
              check(row==0 && col<KD && (kind==9 ? key_valid[col]:value_valid[col]),
                    "uninitialized/uncaused KV read");
              data=kind==9 ? keys[col]:values[col];break;
            case 11:
              check(row==0 && col<D,"RoPE address");
              data=col%2 ? 0:0x3f80;break;
            default: throw std::runtime_error("forbidden layer memory kind");
          }
        }
        L tag=L(dut->mem_req_tag[2*b])|(L(dut->mem_req_tag[2*b+1])<<32);
        for (const auto& queue:pending) for (const auto& item:queue)
          check(item.tag!=tag,"duplicate outstanding bank tag");
        pending[b].push_back({tag,data});++requests;
      }
      if (finished) break;
      edge();++cycles;
      if ((cycles&4095)==0 && std::chrono::steady_clock::now()-last_progress>
          std::chrono::seconds(30)) {
        std::cout<<"LAYER_PROGRESS cycles="<<cycles<<" requests="<<requests
          <<" compared_writes="<<compared<<std::endl;
        last_progress=std::chrono::steady_clock::now();
      }
    }
    check(started && cycles>accepted_cycle && key_writes==KD && value_writes==KD,
          "layer input/KV coverage");
    for (U slot=0;slot<13;++slot) {
      U extent=slot==2 || slot==5 ? QD:slot==3 || slot==4 ? KD:
        slot==9 || slot==10 || slot==11 ? I:H;
      for (U col=0;col<extent;++col)
        check(writes[slot*MAX+col]==(slot==0 ? 2U:1U),"missing layer write");
    }
    for (U p=0;p<7;++p) {
      check(projection_reads[p][1]==L(inputs[p])*outputs[p] &&
            projection_reads[p][2]==L(inputs[p]/G)*outputs[p] &&
            projection_reads[p][3]==L(inputs[p]/G)*outputs[p],
            "incomplete projection extent p="+std::to_string(p));
    }
    check(kind_reads[5]==H && kind_reads[6]==H &&
          kind_reads[12]==D && kind_reads[13]==D && kind_reads[11]==D,
          "missing normalization/rotary reads");
    std::cout<<"LAYER_SUMMARY cycles="<<cycles-accepted_cycle
      <<" requests="<<requests<<" compared_writes="<<compared
      <<" key_writes="<<key_writes<<" value_writes="<<value_writes<<std::endl;
    dut->final();return 0;
  } catch (const std::exception& error) {
    std::cerr<<error.what()<<std::endl;return 1;
  }
}
