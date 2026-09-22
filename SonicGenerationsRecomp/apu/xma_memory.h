#pragma once
#include <cstdint>

uint32_t SonicXmaLoadRegister(uint32_t address);
void SonicXmaStoreRegister(uint32_t address, uint32_t beValue);

inline uint32_t SonicLoadU32(uint8_t* base, uint32_t address)
{
    if ((address & 0xFFFF0000u) == 0x7FEA0000u)
        return SonicXmaLoadRegister(address);
    return __builtin_bswap32(*reinterpret_cast<volatile uint32_t*>(base + address));
}
inline void SonicStoreU32(uint8_t* base, uint32_t address, uint32_t value)
{
    if ((address & 0xFFFF0000u) == 0x7FEA0000u) {
        SonicXmaStoreRegister(address, value);
        return;
    }
    *reinterpret_cast<volatile uint32_t*>(base + address) = __builtin_bswap32(value);
}
// Also intercept ordinary lwbrx loads: generated XMA initialization uses
// PPC_LOAD_U32, not PPC_MM_LOAD_U32. No edits to generated ppc/ are required.
#define PPC_LOAD_U32(x) SonicLoadU32(base, static_cast<uint32_t>(x))
#define PPC_STORE_U32(x, y) SonicStoreU32(base, static_cast<uint32_t>(x), static_cast<uint32_t>(y))
