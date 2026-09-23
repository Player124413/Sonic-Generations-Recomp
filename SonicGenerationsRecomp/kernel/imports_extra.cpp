#include <stdafx.h>
#include <cpu/guest_thread.h>
#include <cpu/ppc_context.h>
#include <kernel/function.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <kernel/xam.h>
#include <kernel/xdm.h>
#include <kernel/io/nt_file.h>
#include <apu/xma.h>
#include <os/logger.h>
#include <user/config.h>

// ---------------------------------------------------------------------------
// Imports used by Sonic Generations (Xbox 360) that are not covered by the
// kernel layer ported from Unleashed Recompiled. The complete list of hooks
// lives at the bottom of this file; anything not needed by the title simply
// goes unused by the linker.
//
// Signatures follow the Xbox 360 kernel/XAM conventions (xboxkrnl, xam).
// ---------------------------------------------------------------------------

// ----- Interlocked SList ---------------------------------------------------

// SLIST_HEADER: Depth:16, Sequence:16, HeadOffset:32 (guest offset).
struct XSLIST_HEADER
{
    be<uint16_t> depth;
    be<uint16_t> sequence;
    be<uint32_t> head;
};
static_assert(sizeof(XSLIST_HEADER) == 8);

// SLIST_ENTRY: first field is the guest offset of the next entry.
struct XSLIST_ENTRY
{
    be<uint32_t> next;
};

uint32_t Guest_InterlockedPopEntrySList(XSLIST_HEADER* list)
{
    while (true)
    {
        uint32_t head = list->head.get();
        if (head == 0)
            return 0;

        auto* entry = reinterpret_cast<XSLIST_ENTRY*>(g_memory.Translate(head));
        uint32_t next = entry->next.get();

        std::atomic_ref headRef(list->head.value);
        uint32_t expectedRaw = list->head.value;
        if (headRef.compare_exchange_weak(expectedRaw, be<uint32_t>(next).value))
        {
            std::atomic_ref depthRef(list->depth.value);
            depthRef.fetch_sub(be<uint16_t>(1).value, std::memory_order_relaxed);
            return head;
        }
    }
}

uint32_t Guest_InterlockedFlushSList(XSLIST_HEADER* list)
{
    std::atomic_ref headRef(list->head.value);
    uint32_t raw = headRef.exchange(be<uint32_t>(0).value);
    list->depth = 0;
    return be<uint32_t>(0).value != raw ? be<uint32_t>(raw).get() : 0;
}

// ----- Ke DPC / process type -----------------------------------------------

struct GuestDpc
{
    be<uint32_t> deferredRoutine;
    be<uint32_t> deferredContext;
    be<uint32_t> systemArgument1;
    be<uint32_t> systemArgument2;
};

void KeInitializeDpc(GuestDpc* dpc, uint32_t deferredRoutine, uint32_t deferredContext)
{
    memset(dpc, 0, sizeof(GuestDpc));
    dpc->deferredRoutine = deferredRoutine;
    dpc->deferredContext = deferredContext;
}

bool KeInsertQueueDpc(GuestDpc* dpc, uint32_t systemArgument1, uint32_t systemArgument2)
{
    if (dpc->deferredRoutine == 0)
        return false;

    dpc->systemArgument1 = systemArgument1;
    dpc->systemArgument2 = systemArgument2;

    // Phase 1 runs DPCs inline. A dedicated DPC thread can be introduced
    // later if the title turns out to rely on deferred execution timing.
    uint32_t routine = dpc->deferredRoutine.get();
    uint32_t context = dpc->deferredContext.get();
    uint32_t arg1 = dpc->systemArgument1.get();
    uint32_t arg2 = dpc->systemArgument2.get();

    GuestToHostFunction<void>(routine,
        g_memory.MapVirtual(dpc), context, arg1, arg2);

    return true;
}

static thread_local uint32_t g_currentProcessType = 0;

uint32_t KeSetCurrentProcessType(uint32_t type)
{
    uint32_t previous = g_currentProcessType;
    g_currentProcessType = type;
    return previous;
}

// ----- Memory --------------------------------------------------------------

constexpr uint32_t XMA_IO_BEGIN = 0x7FEA0000;
constexpr uint32_t XMA_IO_END = XMA_IO_BEGIN + 0x10000;

uint32_t MmMapIoSpace(uint32_t physicalAddress, uint32_t size, uint32_t protection)
{
    // Identity mapping. The XMA MMIO window is reserved by the heap (see
    // kernel/heap.cpp) so guest writes stay inside the mapped region.
    LOGF_UTILITY("MmMapIoSpace phys 0x{:08X} size 0x{:X}", physicalAddress, size);

    if (physicalAddress >= XMA_IO_BEGIN && physicalAddress < XMA_IO_END)
        xma::Init();

    return physicalAddress;
}

// ----- File I/O ------------------------------------------------------------

// ----- XAudio / video queries ----------------------------------------------

uint32_t XAudioGetSpeakerConfig()
{
    // SPEAKER_STEREO = 0x0000000A? Xbox returns a DirectSound-style mask;
    // 5.1 support is signalled with SPEAKER_5POINT1 (0x60F-ish). We return
    // the configured channel layout only.
    return Config::ChannelConfiguration == EChannelConfiguration::Surround ? 0x0000003F : 0x00000003;
}

uint32_t XGetVideoCapabilities(be<uint32_t>* capabilities)
{
    // HDTV | WIDESCREEN
    if (capabilities)
        *capabilities = 0x20000002;
    return 0;
}

void VdSetDisplayModeOverride();

// ----- XMsg ----------------------------------------------------------------

uint32_t XMsgCancelIORequest(uint32_t handle, bool wait, uint32_t* result)
{
    LOG_UTILITY("XMsgCancelIORequest");
    return 0;
}

// ----- XAM misc ------------------------------------------------------------

uint32_t XamAlloc(uint32_t size)
{
    return g_memory.MapVirtual(g_userHeap.Alloc(size));
}

void XamFree(uint32_t pointer)
{
    if (pointer)
        g_userHeap.Free(g_memory.Translate(pointer));
}

uint32_t XamParseGamerTileKey()
{
    LOG_UTILITY("XamParseGamerTileKey");
    return 0;
}

uint32_t XamReadTileToTexture(uint32_t userIndex, uint64_t xuid, uint32_t pictureIndex,
    uint32_t texturePtr, uint32_t offset, uint32_t size)
{
    // Zero the destination; the UI layer will replace this when user images
    // are supported.
    if (texturePtr && size)
        memset(g_memory.Translate(texturePtr), 0, size);

    return 0;
}

struct SessionObject : KernelObject
{
};

uint32_t XamSessionCreateHandle(be<uint32_t>* handle)
{
    auto* session = CreateKernelObject<SessionObject>();
    *handle = GetKernelHandle(session);
    return 0;
}

uint32_t XamSessionRefObjByHandle(uint32_t handle, be<uint32_t>* object)
{
    *object = handle;
    return 0;
}

uint32_t XamShowGamerCardUIForXUID(uint32_t userIndex, uint64_t xuid)
{
    LOGF_UTILITY("XamShowGamerCardUIForXUID xuid 0x{:016X}", xuid);
    return 0;
}

uint32_t XamUserCheckPrivilege(uint32_t userIndex, uint32_t privilege, be<uint32_t>* result)
{
    if (result)
        *result = 1;
    return 0;
}

struct StatsEnumerator : KernelObject
{
};

uint32_t XamUserCreateStatsEnumerator(uint32_t userIndex, uint32_t titleId, uint32_t xuidCount,
    uint64_t* xuids, uint32_t views, uint32_t* spec, uint32_t owner, uint32_t buffer, be<uint32_t>* handle)
{
    auto* enumerator = CreateKernelObject<StatsEnumerator>();
    *handle = GetKernelHandle(enumerator);
    return 0;
}

uint32_t XamUserGetName(uint32_t userIndex, char* name, uint32_t length)
{
    static constexpr char NAME[] = "Player1";
    if (name && length)
    {
        uint32_t size = std::min<uint32_t>(length, sizeof(NAME));
        memcpy(name, NAME, size);
        name[size - 1] = 0;
    }
    return 0;
}

uint32_t XamUserGetXUID(uint32_t userIndex, uint32_t flags, be<uint64_t>* xuid)
{
    if (xuid)
        *xuid = 0x0009000000000001ull;
    return 0;
}

// ----- Xex -----------------------------------------------------------------

uint32_t XexLoadImage(const char* name, uint32_t flags, uint32_t minVersion, be<uint32_t>* handle)
{
    // The title only loads system modules (xam.xex and friends) which are
    // already backed by this runtime. Return a pseudo handle and log the
    // request so unsupported cases are easy to diagnose.
    LOGFN("XexLoadImage \"{}\"", name ? name : "(null)");

    if (handle)
        *handle = 0x1000;

    return 0; // STATUS_SUCCESS
}

uint32_t XexUnloadImage(uint32_t handle)
{
    LOG_UTILITY("XexUnloadImage");
    return 0;
}

uint32_t Guest_xstart()
{
    // CRT entry imported by the title. The recompilation starts execution
    // from the XEX entry point directly (see main.cpp), so this is only
    // reached if the guest CRT calls back into it.
    LOG_UTILITY("_xstart");
    return 0;
}

// XMA contexts live in the audio layer (apu/xma.cpp).

// ----- Hook table ----------------------------------------------------------

GUEST_FUNCTION_HOOK(__imp__InterlockedPopEntrySList, Guest_InterlockedPopEntrySList);
GUEST_FUNCTION_HOOK(__imp__InterlockedFlushSList, Guest_InterlockedFlushSList);
GUEST_FUNCTION_HOOK(__imp__KeInitializeDpc, KeInitializeDpc);
GUEST_FUNCTION_HOOK(__imp__KeInsertQueueDpc, KeInsertQueueDpc);
GUEST_FUNCTION_HOOK(__imp__KeSetCurrentProcessType, KeSetCurrentProcessType);
GUEST_FUNCTION_HOOK(__imp__MmMapIoSpace, MmMapIoSpace);
GUEST_FUNCTION_HOOK(__imp__NtWriteFileGather, NtWriteFileGather);
GUEST_FUNCTION_HOOK(__imp__XAudioGetSpeakerConfig, XAudioGetSpeakerConfig);
GUEST_FUNCTION_HOOK(__imp__XGetVideoCapabilities, XGetVideoCapabilities);
GUEST_FUNCTION_HOOK(__imp__XMsgCancelIORequest, XMsgCancelIORequest);
GUEST_FUNCTION_HOOK(__imp__XamAlloc, XamAlloc);
GUEST_FUNCTION_HOOK(__imp__XamFree, XamFree);
GUEST_FUNCTION_HOOK(__imp__XamParseGamerTileKey, XamParseGamerTileKey);
GUEST_FUNCTION_HOOK(__imp__XamReadTileToTexture, XamReadTileToTexture);
GUEST_FUNCTION_HOOK(__imp__XamSessionCreateHandle, XamSessionCreateHandle);
GUEST_FUNCTION_HOOK(__imp__XamSessionRefObjByHandle, XamSessionRefObjByHandle);
GUEST_FUNCTION_HOOK(__imp__XamShowGamerCardUIForXUID, XamShowGamerCardUIForXUID);
GUEST_FUNCTION_HOOK(__imp__XamUserCheckPrivilege, XamUserCheckPrivilege);
GUEST_FUNCTION_HOOK(__imp__XamUserCreateStatsEnumerator, XamUserCreateStatsEnumerator);
GUEST_FUNCTION_HOOK(__imp__XamUserGetName, XamUserGetName);
GUEST_FUNCTION_HOOK(__imp__XamUserGetXUID, XamUserGetXUID);
GUEST_FUNCTION_HOOK(__imp__XexLoadImage, XexLoadImage);
GUEST_FUNCTION_HOOK(__imp__XexUnloadImage, XexUnloadImage);
GUEST_FUNCTION_HOOK(__imp___xstart, Guest_xstart);
GUEST_FUNCTION_HOOK(__imp__VdSetDisplayModeOverride, VdSetDisplayModeOverride);
