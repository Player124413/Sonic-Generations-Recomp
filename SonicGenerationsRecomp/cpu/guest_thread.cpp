#include <stdafx.h>
#include "guest_thread.h"
#include <kernel/memory.h>
#include <kernel/heap.h>
#include <kernel/function.h>
#include "ppc_context.h"

constexpr size_t PCR_SIZE = 0xAB0;
constexpr size_t TLS_SIZE = 0x100;
constexpr size_t TEB_SIZE = 0x2E0;
constexpr size_t STACK_SIZE = 0x40000;
constexpr size_t TOTAL_SIZE = PCR_SIZE + TLS_SIZE + TEB_SIZE + STACK_SIZE;

constexpr size_t TEB_OFFSET = PCR_SIZE + TLS_SIZE;

GuestThreadContext::GuestThreadContext(uint32_t cpuNumber, uint32_t guestBody)
{
    assert(thread == nullptr);

    thread = (uint8_t*)g_userHeap.Alloc(TOTAL_SIZE);
    memset(thread, 0, TOTAL_SIZE);

    *(uint32_t*)thread = ByteSwap(g_memory.MapVirtual(thread + PCR_SIZE)); // tls pointer
    *(uint32_t*)(thread + 0x100) = ByteSwap(guestBody ? guestBody : g_memory.MapVirtual(thread + PCR_SIZE + TLS_SIZE)); // teb pointer
    *(thread + 0x10C) = cpuNumber;

    *(uint32_t*)(thread + PCR_SIZE + 0x10) = 0xFFFFFFFF; // that one TLS entry that felt quirky
    *static_cast<be<uint32_t>*>(g_memory.Translate(ByteSwap(*(uint32_t*)(thread+0x100))+0x14C)) = GuestThread::GetCurrentThreadId(); // thread id

    ppcContext.r1.u64 = g_memory.MapVirtual(thread + PCR_SIZE + TLS_SIZE + TEB_SIZE + STACK_SIZE); // stack pointer
    ppcContext.r13.u64 = g_memory.MapVirtual(thread);
    ppcContext.fpscr.loadFromHost();

    assert(GetPPCContext() == nullptr);
    SetPPCContext(ppcContext);
}

GuestThreadContext::~GuestThreadContext()
{
    g_ppcContext=nullptr;
    g_userHeap.Free(thread);
}

#ifdef USE_PTHREAD
static size_t GetStackSize()
{
    // Cache as this should not change.
    static size_t stackSize = 0;
    if (stackSize == 0)
    {
        // 8 MiB is a typical default.
        constexpr auto defaultSize = 8 * 1024 * 1024;
        struct rlimit lim;
        const auto ret = getrlimit(RLIMIT_STACK, &lim);
        if (ret == 0 && lim.rlim_cur < defaultSize)
        {
            // Use what the system allows.
            stackSize = lim.rlim_cur;
        }
        else
        {
            stackSize = defaultSize;
        }
    }
    return stackSize;
}

static void* GuestThreadFunc(void* arg)
{
    GuestThreadHandle* hThread = (GuestThreadHandle*)arg;
#else
static void GuestThreadFunc(GuestThreadHandle* hThread)
{
#endif
    KernelObjects::SetCurrentThread(hThread);
    hThread->suspended.wait(true);
    GuestThread::Start(hThread->params);
    hThread->Complete();
    KernelObjects::SetCurrentThread(nullptr);
    KernelObjects::Dereference(hThread->guestBody);
#ifdef USE_PTHREAD
    return nullptr;
#endif
}

GuestThreadHandle::GuestThreadHandle(const GuestThreadParams& params, bool external)
    : KernelObject(KernelObjects::Type::Thread,TEB_SIZE), params(params),
      suspended((params.flags & 0x1) != 0), external(external)
{
    static_cast<XDISPATCHER_HEADER*>(g_memory.Translate(guestBody))->Type=6;
}

void GuestThreadHandle::OnRegistered()
{
    if(external) return;
    // The running thread owns a reference independent of all user handles.
    if(!KernelObjects::ReferenceBody(guestBody)) throw std::bad_alloc();
#ifdef USE_PTHREAD
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, GetStackSize());
    const auto ret=pthread_create(&thread,&attr,GuestThreadFunc,this);
    pthread_attr_destroy(&attr);
    if(ret) { KernelObjects::Dereference(guestBody); throw std::runtime_error("pthread_create failed"); }
#else
    try { thread=std::thread(GuestThreadFunc,this); }
    catch(...) { KernelObjects::Dereference(guestBody); throw; }
#endif
}

GuestThreadHandle::~GuestThreadHandle()
{
#ifdef USE_PTHREAD
    if(!external) { if(pthread_equal(thread,pthread_self())) pthread_detach(thread); else pthread_join(thread,nullptr); }
#else
    if (thread.joinable())
    {
        if(thread.get_id()==std::this_thread::get_id()) thread.detach();
        else thread.join();
    }
#endif
}

template <typename ThreadType>
static uint32_t CalcThreadId(const ThreadType& id)
{
    if constexpr (sizeof(id) == 4)
        return *reinterpret_cast<const uint32_t*>(&id);
    else
        return XXH32(&id, sizeof(id), 0);
}

uint32_t GuestThreadHandle::GetThreadId() const
{
#ifdef USE_PTHREAD
    return CalcThreadId(thread);
#else
    return CalcThreadId(thread.get_id());
#endif
}

void GuestThreadHandle::Complete()
{
    auto* header=static_cast<XDISPATCHER_HEADER*>(g_memory.Translate(guestBody));
    std::atomic_ref<uint32_t>(header->SignalState.value).store(ByteSwap(uint32_t(1)));
    { std::lock_guard lock(completionMutex); completed=true; }
    completed.notify_all(); completionChanged.notify_all();
}
uint32_t GuestThreadHandle::Wait(uint32_t timeout)
{
    if(timeout==0) return completed ? STATUS_WAIT_0 : STATUS_TIMEOUT;
    if(timeout==INFINITE) { completed.wait(false); return STATUS_WAIT_0; }
    std::unique_lock lock(completionMutex);
    return completionChanged.wait_for(lock,std::chrono::milliseconds(timeout),[&]{return completed.load();}) ? STATUS_WAIT_0 : STATUS_TIMEOUT;
}

uint32_t GuestThread::Start(const GuestThreadParams& params)
{
    const auto procMask = (uint8_t)(params.flags >> 24);
    const auto cpuNumber = procMask == 0 ? 0 : 7 - std::countl_zero(procMask);

    if(!KernelObjects::CurrentThread())
    {
        // Initial title execution also has a real guest thread body.
        auto* initial=CreateKernelObject<GuestThreadHandle>(params,true);
        const auto handle=initial->handle;
        auto keepAlive=KernelObjects::Acquire(handle);
        KernelObjects::SetCurrentThread(initial);
        struct Cleanup
        {
            uint32_t handle;
            ~Cleanup() { KernelObjects::SetCurrentThread(nullptr); KernelObjects::Close(handle); }
        } cleanup{handle};
        const auto result=Start(params);
        initial->Complete();
        return result;
    }
    GuestThreadContext ctx(cpuNumber,KernelObjects::CurrentThread()->guestBody);
    ctx.ppcContext.r3.u64 = params.value;

    g_memory.FindFunction(params.function)(ctx.ppcContext, g_memory.base);

    return ctx.ppcContext.r3.u32;
}

GuestThreadHandle* GuestThread::Start(const GuestThreadParams& params, uint32_t* threadId)
{
    auto hThread = CreateKernelObject<GuestThreadHandle>(params);

    if (threadId != nullptr)
    {
        *threadId = hThread->GetThreadId();
    }

    return hThread;
}

uint32_t GuestThread::GetCurrentThreadId()
{
#ifdef USE_PTHREAD
    return CalcThreadId(pthread_self());
#else
    return CalcThreadId(std::this_thread::get_id());
#endif
}

void GuestThread::SetLastError(uint32_t error)
{
    auto* thread = (char*)g_memory.Translate(GetPPCContext()->r13.u32);
    if (*(uint32_t*)(thread + 0x150))
    {
        // Program doesn't want errors
        return;
    }

    // TEB + 0x160 : Win32LastError
    *static_cast<be<uint32_t>*>(g_memory.Translate(ByteSwap(*(uint32_t*)(thread+0x100))+0x160)) = error;
}

#ifdef _WIN32
void GuestThread::SetThreadName(uint32_t threadId, const char* name)
{
#pragma pack(push,8)
    const DWORD MS_VC_EXCEPTION = 0x406D1388;

    typedef struct tagTHREADNAME_INFO
    {
        DWORD dwType; // Must be 0x1000.
        LPCSTR szName; // Pointer to name (in user addr space).
        DWORD dwThreadID; // Thread ID (-1=caller thread).
        DWORD dwFlags; // Reserved for future use, must be zero.
    } THREADNAME_INFO;
#pragma pack(pop)

    THREADNAME_INFO info;
    info.dwType = 0x1000;
    info.szName = name;
    info.dwThreadID = threadId;
    info.dwFlags = 0;

    __try
    {
        RaiseException(MS_VC_EXCEPTION, 0, sizeof(info) / sizeof(ULONG_PTR), (ULONG_PTR*)&info);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}
#endif

void SetThreadNameImpl(uint32_t a1, uint32_t threadId, uint32_t* name)
{
#ifdef _WIN32
    GuestThread::SetThreadName(threadId, (const char*)g_memory.Translate(ByteSwap(*name)));
#endif
}

int GetThreadPriorityImpl(GuestThreadHandle* hThread)
{
#ifdef _WIN32
    return GetThreadPriority(hThread == GetKernelObject(CURRENT_THREAD_HANDLE) ? GetCurrentThread() : hThread->thread.native_handle());
#else 
    return 0;
#endif
}

uint32_t SetThreadIdealProcessorImpl(GuestThreadHandle* hThread, uint32_t dwIdealProcessor)
{
    return 0;
}

GUEST_FUNCTION_HOOK(sub_82DFA2E8, SetThreadNameImpl);
GUEST_FUNCTION_HOOK(sub_82BD57A8, GetThreadPriorityImpl);
GUEST_FUNCTION_HOOK(sub_82BD5910, SetThreadIdealProcessorImpl);

GUEST_FUNCTION_STUB(sub_82BD58F8); // Some function that updates the TEB, don't really care since the field is not set
