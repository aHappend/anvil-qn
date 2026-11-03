
#include "Vanvil_qn1_dual_think_ctrl.h"
#include "verilated.h"
#include <array>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
struct Request {unsigned parent,pos,argmax;};
struct Case {
    unsigned mode,pos,count,fault,cancel,accepted;
    std::array<unsigned,4> nodes,parents;
    std::vector<Request> requests;
    std::vector<unsigned> generated;
};
void require(bool condition,const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
int main(int argc,char**argv) {
  try {
    Verilated::commandArgs(argc,argv);
    require(argc==2,"scenario filename");
    std::ifstream input(argv[1]);require(bool(input),"open scenarios");
    Vanvil_qn1_dual_think_ctrl dut;
    unsigned cases=0,commits=0,requests_total=0,faults=0,cancels=0;
    auto edge=[&]() {dut.clk=0;dut.eval();dut.clk=1;dut.eval();};
    auto defaults=[&]() {
      dut.start_valid=0;dut.mode_valid=0;dut.observed_valid=0;dut.observed_token=0;
      dut.draft_valid=0;dut.verify_ready=0;dut.verify_rsp_valid=0;dut.verify_error=0;
      dut.commit_ready=0;dut.publish_ready=0;dut.flush=0;dut.cancel=0;
    };
    std::string name;
    while (input>>name) {
      Case c;unsigned nr,ng;
      input>>c.mode>>c.pos>>c.count>>c.fault>>c.cancel>>c.accepted;
      for(auto&v:c.nodes) input>>v;
      for(auto&v:c.parents) input>>v;
      input>>nr;
      for(unsigned i=0;i<nr;++i) {
        Request r;input>>r.parent>>r.pos>>r.argmax;c.requests.push_back(r);
      }
      input>>ng;
      for(unsigned i=0;i<ng;++i) {unsigned t;input>>t;c.generated.push_back(t);}
      require(bool(input),"malformed scenario");
      defaults();dut.clk=0;dut.rst_n=0;dut.eval();
      require(!(dut.start_ready||dut.busy||dut.done||dut.error||dut.think_active||
        dut.draft_ready||dut.commit_valid||dut.commit_count||dut.commit_pos||
        dut.verify_valid||dut.verify_rsp_ready||dut.event_draft_nodes||
        dut.event_verified_nodes||dut.event_accepted_nodes||dut.event_rejected_nodes),
        name+" reset status");
      for(unsigned i=0;i<5;++i) require(dut.commit_tokens[i]==0,name+" reset payload");
      edge();dut.clk=0;dut.rst_n=1;dut.eval();
      dut.mode_valid=1;dut.mode_value=c.mode;edge();dut.mode_valid=0;
      require(dut.think_active==c.mode,name+" idle mode write");
      for(unsigned i=0;i<4;++i) dut.draft_tokens[i]=c.nodes[i];
      dut.draft_parents=0;
      for(unsigned i=0;i<4;++i) dut.draft_parents|=c.parents[i]<<(3*i);
      dut.draft_count=c.count;dut.draft_valid=1;
      dut.clk=0;dut.eval();
      require(!dut.draft_ready,name+" idle draft must not transfer");
      edge();
      dut.start_valid=1;dut.start_pos=c.pos;
      bool started=false,drafted=false,pending=false,published=false,finished=false;
      unsigned request_index=0,response_index=0,pending_cycle=0,pending_argmax=0;
      unsigned commit_stalls=0,last_commit=0,last_response=0;
      unsigned draft_events=0,verified_events=0,accepted_events=0,rejected_events=0;
      unsigned mode=c.mode;
      for(unsigned cycle=0;cycle<1000 && !finished;++cycle) {
        dut.clk=0;
        dut.start_valid=!started;dut.draft_valid=!drafted;
        dut.verify_ready=cycle%5>=2;
        dut.verify_rsp_valid=pending && cycle>=pending_cycle+3;
        dut.verify_argmax=pending_argmax;
        dut.publish_ready=response_index==c.requests.size() && cycle>last_response+4;
        dut.commit_ready=commit_stalls>=5;
        dut.cancel=(c.cancel==1 && pending && response_index==0) ||
                   (c.cancel==2 && response_index==1 && cycle==last_response+1) ||
                   (c.cancel==3 && commit_stalls==2) ||
                   (c.cancel==4 && published && cycle==last_commit+1);
        dut.eval();
        require(dut.think_active==mode,name+" mode changed without publication");
        if (dut.cancel) {
          require(!(dut.commit_valid||dut.verify_valid||dut.draft_ready),
                  name+" cancel must immediately suppress new transfers");
          edge();
          require(!(dut.busy||dut.commit_valid||dut.verify_valid||dut.done||dut.error),
                  name+" cancel ownership");
          ++cancels;finished=true;break;
        }
        if (dut.error) {
          require(c.fault && !published && !dut.done,name+" unexpected error");
          if(c.fault==1) require(drafted && response_index==1,name+" malformed tree ordering");
          if(c.fault==2) require(!request_index,name+" terminal start issued backend");
          ++faults;finished=true;break;
        }
        if(dut.start_valid && dut.start_ready) {
          require(!started && !dut.draft_ready && !dut.commit_valid,name+" start ordering");
          started=true;
        }
        if(dut.draft_valid && dut.draft_ready) {
          require(started && response_index==1 && !drafted && mode,
                  name+" token-first/draft-second ordering");
          drafted=true;
        }
        if(dut.verify_valid && dut.verify_ready) {
          require(request_index<c.requests.size() && !pending,
                  name+" unsolicited/extra backend request");
          const auto&r=c.requests[request_index];
          require(dut.verify_parent==r.parent && dut.verify_pos==r.pos,
                  name+" backend parent/position comparison");
          if(request_index) require(drafted,name+" node request before draft transfer");
          pending=true;pending_cycle=cycle;pending_argmax=r.argmax;
          ++request_index;++requests_total;
        }
        if(dut.verify_rsp_valid && dut.verify_rsp_ready) {
          require(pending,name+" unowned backend response");
          pending=false;++response_index;last_response=cycle;
        }
        if(dut.commit_valid) {
          require(!c.fault && response_index==c.requests.size() && !pending,
                  name+" publication before verification settlement");
          require(dut.commit_count==c.generated.size() && dut.commit_pos==c.pos+1,
                  name+" commit count/position");
          for(unsigned i=0;i<5;++i)
            require(dut.commit_tokens[i]==(i<c.generated.size()?c.generated[i]:0),
                    name+" commit token/slice comparison");
          if(!dut.commit_ready) ++commit_stalls;
          else {
            require(!published,name+" duplicate stalled commit");
            published=true;last_commit=cycle;++commits;
            for(auto token:c.generated) {
              if(token==151667) mode=1;
              if(token==151668) mode=0;
            }
          }
        }
        if(dut.done) {
          require(published && cycle>last_commit && !dut.start_ready,
                  name+" done ordering");
          require(draft_events==(c.mode?c.count:0) &&
                  verified_events==c.requests.size()-1 &&
                  accepted_events==c.accepted &&
                  rejected_events==(c.mode?c.count-c.accepted:0),
                  name+" event conservation");
          finished=true;
        }
        edge();
        draft_events+=dut.event_draft_nodes;verified_events+=dut.event_verified_nodes;
        accepted_events+=dut.event_accepted_nodes;rejected_events+=dut.event_rejected_nodes;
        require(dut.think_active==mode,name+" post-publication mode");
        if(cycle==0) require(!dut.start_ready && !dut.commit_valid && !dut.done,
                            name+" accepted start cannot complete immediately");
      }
      require(finished,name+" missing required response/commit/error/cancel");++cases;
    }
    require(input.eof() && cases && commits && faults && cancels,"controller coverage");
    // Unsolicited backend response must never be treated as work.
    defaults();dut.rst_n=0;edge();dut.rst_n=1;dut.verify_rsp_valid=1;
    dut.verify_argmax=10;dut.clk=0;dut.eval();
    require(!dut.verify_rsp_ready,"unsolicited response readiness");
    edge();require(dut.error && !dut.commit_valid,"unsolicited response fault");
    // Committed close wins over idle configuration; cancel wins over marker.
    defaults();dut.rst_n=0;edge();dut.rst_n=1;
    dut.mode_valid=1;dut.mode_value=1;dut.observed_valid=1;dut.observed_token=151668;
    edge();require(!dut.think_active,"close marker priority");
    dut.observed_token=151667;dut.cancel=1;edge();
    require(!dut.think_active,"cancel marker priority");
    dut.cancel=0;edge();require(dut.think_active,"committed opening marker");
    dut.observed_valid=0;dut.mode_valid=0;dut.final();
    std::cout<<"SUMMARY controller_cases="<<cases<<" commits="<<commits
      <<" requests="<<requests_total<<" faults="<<faults<<" cancels="<<cancels<<"\n";
    return 0;
  } catch(const std::exception& e) {std::cerr<<"FAIL "<<e.what()<<"\n";return 1;}
}
