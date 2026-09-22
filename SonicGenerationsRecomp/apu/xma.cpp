#include <stdafx.h>
#include <apu/xma.h>
#include <apu/xma_device.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <mutex>

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
