#include <stdafx.h>
#include <apu/xma.h>
#include <os/logger.h>
#include <mutex>
#include <vector>

static std::mutex g_xmaMutex;
static std::vector<XmaContext> g_xmaContexts;

void xma::Init()
{
    std::lock_guard guard(g_xmaMutex);
    g_xmaContexts.clear();
}

uint32_t xma::CreateContext(uint32_t sizeLog2)
{
    std::lock_guard guard(g_xmaMutex);

    for (size_t i = 0; i < g_xmaContexts.size(); i++)
    {
        if (!g_xmaContexts[i].inUse)
        {
            g_xmaContexts[i].inUse = true;
            LOGFN_UTILITY("reuse context {}", g_xmaContexts[i].handle);
            return g_xmaContexts[i].handle;
        }
    }

    XmaContext context{};
    context.handle = uint32_t(g_xmaContexts.size()) + 1;
    context.inUse = true;
    g_xmaContexts.push_back(context);

    LOGFN_UTILITY("create context {} (sizeLog2 {})", context.handle, sizeLog2);
    return context.handle;
}

bool xma::ReleaseContext(uint32_t context)
{
    std::lock_guard guard(g_xmaMutex);

    for (auto& entry : g_xmaContexts)
    {
        if (entry.handle == context && entry.inUse)
        {
            entry.inUse = false;
            LOGFN_UTILITY("release context {}", context);
            return true;
        }
    }

    return false;
}

void xma::OnMmioWrite(uint32_t offset, uint32_t value)
{
    // TODO(ROADMAP): drive the XMA decoder from these registers.
    LOGF_UTILITY("XMA MMIO write @ 0x{:04X} = 0x{:08X}", offset, value);
}

// ---------------------------------------------------------------------------
// kernel import entry points
// ---------------------------------------------------------------------------

uint32_t XMACreateContext(be<uint32_t>* contextPtr)
{
    uint32_t handle = xma::CreateContext(0);
    if (contextPtr)
        *contextPtr = handle;
    return handle ? 0 : 0xC000009A; // STATUS_INSUFFICIENT_RESOURCES
}

uint32_t XMAReleaseContext(uint32_t contextPtr)
{
    return xma::ReleaseContext(contextPtr) ? 0 : 0xC0000008; // STATUS_INVALID_HANDLE
}
