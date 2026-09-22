#include <apu/xma_stream.h>
#include <apu/xma_device.h>
#include <iostream>
#include <stdexcept>
#include <algorithm>

void Check(bool value) { if (!value) throw std::runtime_error("XMA stream test failed"); }
struct Fixture {
    std::array<uint8_t, 64> context{};
    std::vector<uint8_t> ram = std::vector<uint8_t>(32768);
    xma::ContextView c{context};
    unsigned decoded = 0;
    xma::Stream::DecodeFrame fake = [this](std::span<const uint8_t> bits, uint32_t length, int rate, int channels) {
        Check(length == 24 && bits.size() == 3 && rate == 48000);
        ++decoded;
        std::vector<float> result(512 * channels);
        for (size_t i = 0; i < result.size(); ++i) result[i] = (i % channels) ? -1.0f : 1.5f;
        return result;
    };
    xma::Stream stream{fake};
    xma::Stream::Memory memory = [this](uint32_t address, size_t size) {
        if (uint64_t(address) + size > ram.size()) throw std::out_of_range("memory");
        return std::span<uint8_t>(ram).subspan(address, size);
    };
    Fixture() {
        c.Set(0, 0, 12, 1); c.Set(0, 20, 1, 1); c.Set(0, 22, 5, 8);
        c.Set(1, 20, 4, 4); c.Set(1, 27, 2, 3); c.Set(1, 29, 1, 1); c.Set(1, 31, 1, 1);
        c.Set(5, 0, 32, 2048); c.Set(6, 0, 32, 8192); c.Set(7, 0, 32, 16384);
        ram[2048] = 4; ram[2050] = 1; // one frame, offset 32, XMA2
        ram[2052] = 0; ram[2053] = 48; ram[2054] = 0; // 24 bits, no next frame
    }
    void Work() { stream.Work(context, memory); }
};
int main() {
    {
        Fixture f; f.Work();
        Check(f.decoded == 1 && f.c.Get(1,31,1) == 0 && f.c.Get(0,27,5) == 0);
        // Saturated interleaved signed-16 BE, NOT float or planar.
        Check(f.ram[16384] == 0x7F && f.ram[16385] == 0xFF);
        Check(f.ram[16386] == 0x80 && f.ram[16387] == 1);
    }
    {
        Fixture f; f.c.Set(0,27,5,6); f.c.Set(9,0,5,2); f.Work();
        Check(f.decoded == 1 && f.c.Get(0,27,5) == 2); // wrap, retain half frame
        f.c.Set(9,0,5,6); f.c.Set(1,31,1,1); f.Work();
        Check(f.decoded == 1 && f.c.Get(0,27,5) == 6); // no second decode
    }
    {
        Fixture f; f.c.Set(1,24,3,2); f.Work();
        Check(f.decoded == 1 && f.c.Get(0,27,5) == 4 && f.c.Get(1,24,3) == 0);
        Check(f.c.Get(0,20,1) == 0); // consumed input, no fabricated extra samples
    }
    {
        Fixture f; f.c.Set(0,12,8,1); f.c.Set(3,0,26,32); f.c.Set(4,0,26,32);
        f.c.Set(1,14,3,1); // loop end at second subframe
        f.c.Set(1,12,2,1); // restart at second subframe
        f.Work();
        Check(f.decoded == 2 && f.c.Get(0,12,8) == 0 && f.c.Get(1,31,1) == 0);
    }
    {
        Fixture f; f.c.Set(0,12,8,255); f.c.Set(3,0,26,32); f.c.Set(4,0,26,32);
        f.c.Set(1,14,3,0); f.Work();
        Check(f.decoded == 4 && f.c.Get(0,12,8) == 255); // bounded infinite loop
    }
    {
        Fixture f;
        // Split the 15-bit length prefix over two non-contiguous buffers.
        f.ram[2048] = 7; f.ram[2049] = 0xFD; f.ram[2050] = 0xC1;
        // Header offset = 16382: first two bits at end of buffer 0.
        f.c.Set(2,0,26,16382);
        f.ram[4095] = 0;
        // Remaining 22 frame bits start at bit 32 in buffer 1.
        f.ram[8192] = 0; f.ram[8193] = 0; f.ram[8194] = 1;
        f.ram[8196] = 0; f.ram[8197] = 192; f.ram[8198] = 0;
        f.Work(); // no buffer 1 available yet: preserve prefix, no decode
        Check(f.decoded == 0 && f.c.Get(0,20,1) == 0);
        f.c.Set(1,0,12,1); f.c.Set(0,21,1,1); f.Work();
        Check(f.decoded == 1 && f.c.Get(0,27,5) == 0);
    }
    {
        Fixture f; f.c.Set(0,0,12,3); f.c.Set(0,22,5,31); f.c.Set(1,20,4,15);
        f.ram[2051] = 1; // next packet belongs to another interleaved stream
        std::copy_n(f.ram.begin()+2048, 2048, f.ram.begin()+6144);
        f.ram[6147] = 0;
        f.Work(); Check(f.decoded == 2 && f.c.Get(0,27,5) == 16);
    }
    {
        Fixture f; f.c.Set(1,24,3,7); // skip across a frame boundary
        f.ram[2048] = 8; f.ram[2054] = 1; // two frames, first has successor
        f.ram[2055] = 0; f.ram[2056] = 48; f.ram[2057] = 0;
        f.Work(); Check(f.decoded == 2 && f.c.Get(0,27,5) == 2 && f.c.Get(1,24,3) == 0);
    }
    {
        Fixture f; f.c.Set(1,29,1,0); f.c.Set(1,20,4,1); // mono, one-subframe quota
        f.Work(); Check(f.decoded == 1 && f.c.Get(0,27,5) == 1);
    }
    {
        Fixture f; f.c.Set(1,31,1,0); f.Work(); Check(f.decoded == 0);
        f.c.Set(1,31,1,1); f.c.Set(0,22,5,0);
        bool rejected = false;
        try { f.Work(); } catch (const std::runtime_error&) { rejected = true; }
        Check(rejected);
    }
    {
        // Full MMIO kick -> decoder callback -> guest output, same transport
        // invoked by the runtime, with no SDL bypass.
        Fixture f;
        xma::Device device;
        std::array<uint8_t, xma::Device::ContextBytes> contexts{};
        device.Init(0xA0000000, contexts); device.SetMemory(f.memory); device.SetDecoderForTests(f.fake);
        Check(device.Allocate() == 0xA0000000);
        std::copy(f.context.begin(), f.context.end(), contexts.begin());
        device.Write(0x1940, 1);
        Check(device.LastError(0).empty() && f.decoded == 1 && f.ram[16384] == 0x7F);
        device.Write(0x1A80, 1); Check(device.Release(0xA0000000));
    }
    std::cout << "MMIO -> frame transport -> BE PCM tests passed (ring, split, loops, skip)\n";
}
