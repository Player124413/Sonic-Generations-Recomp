#pragma once
#include <cstdint>
#include <xbox.h>

// Context pointers address a real 64-byte BE structure in guest physical heap,
// not an integer handle or an MMIO register. Init after g_userHeap.Init().
uint32_t XMACreateContext(be<uint32_t>* contextPtr);
uint32_t XMAReleaseContext(uint32_t contextPtr);
namespace xma {
    void Init();
    uint32_t CreateContext(uint32_t sizeLog2);
    bool ReleaseContext(uint32_t context);
    // Host-order values; PPC wrappers handle the LE MMIO bus conversion.
    void OnMmioWrite(uint32_t offset, uint32_t value);
    uint32_t OnMmioRead(uint32_t offset);
}
