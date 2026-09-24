// Optional integration check: private/publicly supplied RIFF XMA fixture.
// Never embeds or uploads compressed game audio or decoded PCM.
#include <apu/xma_stream.h>
#include <apu/xma_device.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <cstring>
uint32_t LE(std::span<const uint8_t> data, size_t p, unsigned n) {
    if (p + n > data.size()) throw std::runtime_error("Truncated RIFF");
    uint32_t v = 0; for (unsigned i=0;i<n;++i) v |= uint32_t(data[p+i]) << (8*i); return v;
}
int main(int argc, char** argv) {
    if (argc != 2) return 2;
    try {
        std::ifstream file(argv[1], std::ios::binary);
        std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(file), {}};
        if (bytes.size() < 12 || std::memcmp(bytes.data(), "RIFF", 4) || std::memcmp(bytes.data()+8,"WAVE",4))
            throw std::runtime_error("Expected RIFF/WAVE XMA");
        std::span<const uint8_t> fmt, data, oldXma2;
        for (size_t offset = 12; offset + 8 <= bytes.size();) {
            uint32_t length = LE(bytes, offset+4,4);
            if (uint64_t(offset) + 8 + length > bytes.size()) throw std::runtime_error("Truncated chunk");
            auto chunk = std::span<const uint8_t>(bytes).subspan(offset+8,length);
            if (!std::memcmp(bytes.data()+offset,"fmt ",4)) fmt=chunk;
            if (!std::memcmp(bytes.data()+offset,"data",4)) data=chunk;
            if (!std::memcmp(bytes.data()+offset,"XMA2",4)) oldXma2=chunk;
            offset += 8 + length + (length & 1);
        }
        // Early XMA2 encoders stored the versioned XMA2 structure in fmt,
        // not in a separate XMA2 chunk (version 4 + one stream reads as 0x104).
        if (oldXma2.empty() && fmt.size() >= 36 && (fmt[0] == 3 || fmt[0] == 4) &&
            fmt.size() == (fmt[0] == 3 ? 32u : 40u) + size_t(fmt[1]) * 4)
            oldXma2 = fmt;
        int rate, channels;
        uint32_t tag=fmt.empty() ? 0 : LE(fmt,0,2);
        std::cout << "::notice::RIFF fmt tag=" << tag << " fmt bytes=" << fmt.size() << " XMA2 chunk=" << oldXma2.size() << '\n';
        if (!oldXma2.empty()) {
            if (oldXma2.size() < 36 || oldXma2[1] != 1 || (oldXma2[0] != 3 && oldXma2[0] != 4))
                throw std::runtime_error("Unsupported legacy XMA2 chunk");
            rate=(uint32_t(oldXma2[12])<<24)|(uint32_t(oldXma2[13])<<16)|(uint32_t(oldXma2[14])<<8)|oldXma2[15];
            channels=LE(oldXma2, oldXma2[0] == 3 ? 32 : 40, 1);
        } else if (tag==0x165) {
            if (LE(fmt,8,2)!=1) throw std::runtime_error("Sample checker needs a single-stream fixture");
            rate=LE(fmt,16,4); channels=LE(fmt,29,1);
        } else if (tag==0x166) {
            channels=LE(fmt,2,2); rate=LE(fmt,4,4);
        } else throw std::runtime_error("Unsupported fixture fmt tag=" + std::to_string(tag));
        std::cout << "Fixture tag=" << tag << " rate=" << rate << " channels=" << channels << " data=" << data.size() << '\n';
        if ((channels!=1 && channels!=2) || data.empty() || data.size()%2048 || data.size()>4095*2048)
            throw std::runtime_error("Unsupported fixture layout");
        int rateIndex=-1;
        const int rates[]={24000,32000,44100,48000};
        for(int i=0;i<4;++i) if(rate==rates[i]) rateIndex=i;
        if(rateIndex<0) throw std::runtime_error("Unsupported rate");
        constexpr uint32_t input=0x1000;
        uint32_t output=input+uint32_t(data.size());
        std::vector<uint8_t> ram(output+31*256);
        std::copy(data.begin(),data.end(),ram.begin()+input);
        static xma::Device device;
        std::array<uint8_t,xma::Device::ContextBytes> contexts{};
        constexpr uint32_t contextAddress=0xA0000000;
        device.Init(contextAddress,contexts);
        if(device.Allocate()!=contextAddress) throw std::runtime_error("Fixture context allocation failed");
        auto context=std::span<uint8_t>(contexts).first(64);
        xma::ContextView c(context);
        c.Set(0,0,12,uint32_t(data.size()/2048)); c.Set(0,20,1,1); c.Set(0,22,5,31);
        c.Set(1,20,4,15); c.Set(1,27,2,rateIndex); c.Set(1,29,1,channels-1);
        c.Set(5,0,32,input); c.Set(7,0,32,output);
        auto memory=[&](uint32_t p,size_t n) {
            if(uint64_t(p)+n>ram.size()) throw std::runtime_error("Fixture guest pointer out of bounds");
            return std::span<uint8_t>(ram).subspan(p,n);
        };
        device.SetMemory(memory);
        std::array<uint8_t,64> initialContext{};
        std::copy(context.begin(),context.end(),initialContext.begin());
        size_t firstTotal=0, firstNonzero=0;
        uint64_t firstHash=0;
        for(unsigned replay=0;replay<2;++replay) {
            size_t total=0, nonzero=0;
            uint64_t hash=14695981039346656037ull;
            for(unsigned kick=0;kick<10000;++kick) {
                uint32_t before=c.Get(0,27,5);
                c.Set(9,0,5,before); c.Set(1,31,1,1);
                device.Write(0x1940,1); // real MMIO kick -> frame assembler -> pinned FFmpeg -> guest ring
                if(!device.LastError(0).empty()) throw std::runtime_error(device.LastError(0));
                uint32_t written=(c.Get(0,27,5)+31-before)%31;
                for(size_t i=0;i<written*256;++i) {
                    const auto byte=ram[output+(before*256+i)%(31*256)];
                    nonzero+=byte!=0; hash=(hash^byte)*1099511628211ull;
                }
                total+=written*256;
                if(!written && !c.Get(0,20,2)) {
                    if (device.HasIncompleteFrame(0)) throw std::runtime_error("Fixture ended in a truncated XMA frame");
                    break;
                }
                if(kick==9999) throw std::runtime_error("Fixture failed to complete");
            }
            if(!total || !nonzero) throw std::runtime_error("Fixture produced no nonzero PCM");
            std::cout << "Decoded " << total/(2*channels) << " samples/channel; nonzero PCM bytes=" << nonzero << '\n';
            if(!replay) { firstTotal=total; firstNonzero=nonzero; firstHash=hash; }
            else if(total!=firstTotal || nonzero!=firstNonzero || hash!=firstHash)
                throw std::runtime_error("Context reuse retained stale frame/decoder state");
            if(!device.Release(contextAddress) || device.HasIncompleteFrame(0))
                throw std::runtime_error("Fixture context release failed");
            if(!replay) {
                if(device.Allocate()!=contextAddress) throw std::runtime_error("Fixture context reuse failed");
                std::copy(initialContext.begin(),initialContext.end(),context.begin());
                std::fill(ram.begin()+output,ram.end(),0);
            }
        }
        std::cout << "MMIO compressed sample and release/reuse PCM equivalence passed; hash=" << firstHash << '\n';
    } catch(const std::exception& error) { std::cerr << "::error::XMA sample: " << error.what() << '\n'; return 1; }
}
