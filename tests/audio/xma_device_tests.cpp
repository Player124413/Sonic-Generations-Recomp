#include <apu/xma_device.h>
#include <apu/xma_memory.h>
#include <array>
#include <iostream>
#include <stdexcept>

static xma::Device device;
uint32_t SonicXmaLoadRegister(uint32_t address) {
    return __builtin_bswap32(device.Read(address & 0xFFFF));
}
void SonicXmaStoreRegister(uint32_t address, uint32_t value) {
    device.Write(address & 0xFFFF, __builtin_bswap32(value));
}
void Check(bool value) { if (!value) throw std::runtime_error("test failed"); }
int main() {
    std::array<uint8_t, xma::Device::ContextBytes> memory{};
    constexpr uint32_t address = 0xA0010000;
    device.Init(address, memory);
    for (uint32_t i = 0; i < 320; ++i) Check(device.Allocate() == address + i * 64);
    Check(device.Allocate() == 0);
    Check(!device.Release(address + 1));
    Check(!device.Release(address - 64));
    Check(!device.Release(address + 320 * 64));
    memory[0] = 0xAA;
    Check(device.Release(address));
    Check(memory[0] == 0);
    Check(!device.Release(address));
    Check(device.Allocate() == address);
    // No host RAM access for MMIO, even with a null base; match generated lwbrx.
    uint8_t* base = nullptr;
    Check(__builtin_bswap32(PPC_LOAD_U32(0x7FEA1800)) == address);
    for (uint32_t i = 0; i < 640; ++i)
        Check(__builtin_bswap32(PPC_LOAD_U32(0x7FEA1818)) == (i + 1) % 320);
    // Clear must preserve unrelated input counts, pointers and reserved bits.
    std::fill_n(memory.begin(), 64, 0xFF);
    PPC_STORE_U32(0x7FEA1A80, __builtin_bswap32(1u));
    Check(memory[0] == 7 && memory[1] == 0xCF && memory[2] == 0xFF);
    Check(memory[4] == 0x7F && memory[5] == 0xFF);
    Check(memory[39] == 0xE0 && memory[20] == 0xFF);
    // Invalid ring/memory is reported as guest error status, never a host abort.
    memory[4] |= 0x80;
    PPC_STORE_U32(0x7FEA1940, __builtin_bswap32(1u));
    Check(!device.LastError(0).empty());
    Check((memory[8] & 4) != 0);
    PPC_STORE_U32(0x7FEA1A80, __builtin_bswap32(1u));
    Check(device.LastError(0).empty());
    alignas(4) std::array<uint8_t, 16> ram{};
    base = ram.data();
    PPC_STORE_U32(4, 0x12345678);
    Check(ram[4] == 0x12 && ram[7] == 0x78 && PPC_LOAD_U32(4) == 0x12345678);
    std::cout << "XMA guest-context, register endian and memory-routing tests passed\n";
}
