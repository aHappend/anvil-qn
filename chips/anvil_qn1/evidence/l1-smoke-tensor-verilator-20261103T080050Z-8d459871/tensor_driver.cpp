
#include "Vanvil_qn1_tensor_array.h"
#include "verilated.h"
#include <array>
#include <cstdint>
#include <deque>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

template <size_t N> std::array<uint32_t,N> words(const std::string& hex) {
    std::array<uint32_t,N> result{};
    size_t end=hex.size(), index=0;
    while (end) {
        if (index>=N) throw std::runtime_error("wide vector overflow");
        size_t begin=end>8 ? end-8 : 0;
        result[index++]=std::stoul(hex.substr(begin,end-begin),nullptr,16);
        end=begin;
    }
    return result;
}
template <size_t N, class Port> void drive(Port& port,const std::array<uint32_t,N>& value) {
    for (size_t i=0;i<N;++i) port[i]=value[i];
}
struct Vector {
    unsigned w4,error,tag,result;
    std::array<uint32_t,8> mask;
    std::array<uint32_t,32> q,z;
    std::array<uint32_t,128> scale,activation,weight;
};
struct Pending {Vector vector; unsigned birth;};
int main(int argc,char** argv) {
    try {
        Verilated::commandArgs(argc,argv);
        if (argc!=2) throw std::runtime_error("vector filename required");
        std::ifstream input(argv[1]);
        if (!input) throw std::runtime_error("cannot open vectors");
        std::deque<Vector> vectors;
        unsigned w4,error;std::string mask,q,z,scale,activation,weight,tag,result;
        while (input>>w4>>mask>>q>>z>>scale>>activation>>weight>>tag>>result>>error)
            vectors.push_back({w4,error,unsigned(std::stoul(tag,nullptr,16)),
              unsigned(std::stoul(result,nullptr,16)),words<8>(mask),words<32>(q),
              words<32>(z),words<128>(scale),words<128>(activation),words<128>(weight)});
        if (!input.eof() || vectors.empty()) throw std::runtime_error("malformed or empty vectors");
        const auto count=vectors.size();
        Vanvil_qn1_tensor_array dut;
        dut.clk=0;dut.rst_n=0;dut.flush=0;dut.in_valid=0;dut.out_ready=0;dut.eval();
        if (dut.in_ready || dut.out_valid || dut.out_error || dut.out_sum || dut.out_tag)
            throw std::runtime_error("reset outputs");
        dut.clk=1;dut.eval();
        dut.clk=0;dut.rst_n=1;dut.eval();
        std::deque<Pending> queue;
        unsigned enabled=0,retired=0,blocked=0,cycles=0;
        bool holding=false;uint32_t held_sum=0,held_tag=0;unsigned held_error=0;
        while (!vectors.empty() || !queue.empty()) {
            if (cycles>=500000) throw std::runtime_error("cycle bound");
            dut.clk=0;dut.out_ready=cycles%67<49;dut.in_valid=!vectors.empty();
            if (!vectors.empty()) {
                const auto& v=vectors.front();
                dut.in_w4=v.w4;dut.in_tag=v.tag;drive(dut.q,v.q);drive(dut.z,v.z);
                drive(dut.scale_bf16,v.scale);drive(dut.activation_bf16,v.activation);
                drive(dut.weight_bf16,v.weight);drive(dut.lane_mask,v.mask);
            }
            dut.eval();
            if (holding && (!dut.out_valid || dut.out_sum!=held_sum ||
                            dut.out_tag!=held_tag || dut.out_error!=held_error))
                throw std::runtime_error("global output stall");
            holding=dut.out_valid && !dut.out_ready;
            held_sum=dut.out_sum;held_tag=dut.out_tag;held_error=dut.out_error;
            if (holding) ++blocked;
            const bool ce=!dut.out_valid || dut.out_ready;
            if (dut.out_valid && dut.out_ready) {
                if (queue.empty()) throw std::runtime_error("unsolicited tensor result");
                const auto& v=queue.front().vector;
                if (dut.out_tag!=v.tag || dut.out_error!=v.error ||
                    (!v.error && dut.out_sum!=v.result)) {
                    std::cerr<<"TENSOR_COMPARE record="<<retired<<" tag="<<dut.out_tag
                      <<" expected_tag="<<v.tag<<" got="<<std::hex<<dut.out_sum
                      <<" expected="<<v.result<<std::dec<<" error="<<unsigned(dut.out_error)
                      <<" expected_error="<<v.error<<"\n";
                    return 1;
                }
                queue.pop_front();++retired;
            }
            if (ce) ++enabled;
            if (dut.in_valid && dut.in_ready) {
                queue.push_back({vectors.front(),enabled});vectors.pop_front();
            }
            dut.clk=1;dut.eval();
            bool due=!queue.empty() && enabled-queue.front().birth>=48;
            if (bool(dut.out_valid)!=due || (due && dut.out_tag!=queue.front().vector.tag))
                throw std::runtime_error("48 enabled-edge latency");
            ++cycles;
        }
        if (retired!=count || !blocked) throw std::runtime_error("coverage/conservation");
        dut.final();
        std::cout<<"SUMMARY tensor_cases="<<retired<<" latency=48 blocked_cycles="
                 <<blocked<<" cycles="<<cycles<<"\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr<<"FAIL "<<error.what()<<"\n";return 1;
    }
}
