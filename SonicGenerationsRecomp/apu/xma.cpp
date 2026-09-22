#include <stdafx.h>
#include <apu/xma.h>
#include <apu/xma_device.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <mutex>
#include <os/logger.h>

namespace {
std::mutex mutex;
xma::Device device;
uint8_t* contexts = nullptr;
}

void xma::Init()
{
    std::lock_guard guard(mutex);
    // Init is called by both MmMapIoSpace and main. Do not reset active
    // contexts or leak a second allocation on the latter call.
    if (contexts) return;
    contexts = static_cast<uint8_t*>(g_userHeap.AllocPhysical(Device::ContextBytes, 256));
    if (!contexts) throw std::bad_alloc();
    // MmGetPhysicalAddress currently preserves this runtime's guest addresses.
    device.Init(g_memory.MapVirtual(contexts), {contexts, Device::ContextBytes});
    device.SetMemory([](uint32_t address, size_t size) -> std::span<uint8_t> {
        // This runtime uses identity physical addresses (MmGetPhysicalAddress).
        // Exclude null/protected first page and all 32-bit wraparound.
        if (address < 0x1000 || uint64_t(address) + size > PPC_MEMORY_SIZE)
            throw std::out_of_range("XMA guest buffer address out of range");
        return {static_cast<uint8_t*>(g_memory.Translate(address)), size};
    });
}

uint32_t xma::CreateContext(uint32_t sizeLog2)
{
    std::lock_guard guard(mutex);
    return device.Allocate(); // Hardware contexts are always 64 bytes.
}
bool xma::ReleaseContext(uint32_t context)
{
    std::lock_guard guard(mutex);
    return device.Release(context);
}
void xma::OnMmioWrite(uint32_t offset, uint32_t value)
{
    std::lock_guard guard(mutex);
    device.Write(offset, value);
    if (offset >= 0x1940 && offset < 0x1968) {
        uint32_t first = (offset - 0x1940) / 4 * 32;
        for (uint32_t bit = 0; bit < 32; ++bit)
            if ((value & (1u << bit)) && !device.LastError(first + bit).empty())
                LOGFN_ERROR("XMA context {}: {}", first + bit, device.LastError(first + bit));
    }
}
uint32_t xma::OnMmioRead(uint32_t offset)
{
    std::lock_guard guard(mutex);
    return device.Read(offset);
}

// PPC_LOAD/STORE_U32 use BE values, while XMA register words are LE. Generated
// lwbrx/stwbrx apply the opposite swap at the call site. Do not double-swap.
uint32_t SonicXmaLoadRegister(uint32_t address)
{
    return __builtin_bswap32(xma::OnMmioRead(address & 0xFFFF));
}
void SonicXmaStoreRegister(uint32_t address, uint32_t beValue)
{
    xma::OnMmioWrite(address & 0xFFFF, __builtin_bswap32(beValue));
}

uint32_t XMACreateContext(be<uint32_t>* contextPtr)
{
    if (!contextPtr) return 0xC000000D;
    *contextPtr = xma::CreateContext(0);
    return *contextPtr ? 0 : 0xC000009A;
}
uint32_t XMAReleaseContext(uint32_t contextPtr)
{
    return xma::ReleaseContext(contextPtr) ? 0 : 0xC0000008;
}
