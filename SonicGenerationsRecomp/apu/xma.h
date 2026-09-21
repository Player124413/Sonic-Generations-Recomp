#pragma once

#include <cstdint>
#include <xbox.h>

// ---------------------------------------------------------------------------
// XMA (Xbox Media Audio) decoder seam.
//
// The Xbox 360 decodes XMA streams through a hardware unit programmed via
// MMIO at 0x7FEA0000 (see PPC_MEMORY_SIZE region reserved by the heap).
// The title drives it through XMACreateContext/XMAReleaseContext and MMIO
// writes (interceptable via the PPC_MM_STORE_* macros from ppc_context.h).
//
// Phase 1 tracks contexts only. Actual decoding (XMA is a WMA Pro variant)
// is a follow-up documented in docs/ROADMAP.md.
// ---------------------------------------------------------------------------

struct XmaContext
{
    uint32_t handle;
    bool inUse;
};

// Kernel import surface (hooked in kernel/imports.cpp).
// Xboxkrnl XMA semantics: XMACreateContext allocates a hardware XMA context
// in the MMIO window and writes its guest address to *contextPtr.
uint32_t XMACreateContext(be<uint32_t>* contextPtr);
uint32_t XMAReleaseContext(uint32_t contextPtr);

namespace xma
{
    void Init();

    uint32_t CreateContext(uint32_t sizeLog2);
    bool ReleaseContext(uint32_t context);

    // Called when the guest writes to the XMA MMIO range.
    void OnMmioWrite(uint32_t offset, uint32_t value);
}
