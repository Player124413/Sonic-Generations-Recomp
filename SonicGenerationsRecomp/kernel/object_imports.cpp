#include <stdafx.h>
#ifdef _WIN32
#include <ntstatus.h>
#endif
#include "object_imports.h"
#include "function.h"

std::atomic<uint32_t> g_keSetEventGeneration;

uint32_t GuestTimeoutToMilliseconds(be<int64_t>* timeout)
{
    if(!timeout) return INFINITE;
    const int64_t value=timeout->get();
    uint64_t ticks;
    if(value<=0) ticks=uint64_t(0)-uint64_t(value); // safe even for INT64_MIN
    else
    {
        const uint64_t now=uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count()/100)+116444736000000000ull;
        ticks=uint64_t(value)>now ? uint64_t(value)-now : 0;
    }
    return uint32_t(std::min<uint64_t>((ticks+9999)/10000,uint64_t(INFINITE)-1));
}

uint32_t NtClose(uint32_t handle)
{
    return KernelObjects::Close(handle) ? 0 : 0xC0000008;
}

uint32_t ObReferenceObjectByHandle(uint32_t handle, uint32_t objectType, be<uint32_t>* object)
{
    if(!object) return 0xC000000D;
    uint32_t body=0;
    const auto status=KernelObjects::Reference(handle,objectType,body);
    *object=body;
    return status;
}

void ObReferenceObject(uint32_t body)
{
    KernelObjects::ReferenceBody(body);
}

void ObDereferenceObject(uint32_t body)
{
    KernelObjects::Dereference(body);
}

uint32_t NtWaitForSingleObjectEx(uint32_t Handle, uint32_t WaitMode, uint32_t Alertable, be<int64_t>* Timeout)
{
    uint32_t timeout = GuestTimeoutToMilliseconds(Timeout);

    auto object=KernelObjects::Acquire(Handle);
    return object ? object->Wait(timeout) : 0xC0000008;
}

uint32_t NtCreateEvent(be<uint32_t>* handle, void* objAttributes, uint32_t eventType, uint32_t initialState)
{
    if(!handle || eventType>1) return 0xC000000D;
    *handle = GetKernelHandle(CreateKernelObject<Event>(!eventType, !!initialState));
    return 0;
}

uint32_t NtCreateSemaphore(be<uint32_t>* Handle, XOBJECT_ATTRIBUTES* ObjectAttributes, uint32_t InitialCount, uint32_t MaximumCount)
{
    if(!Handle || !MaximumCount || MaximumCount>INT32_MAX || InitialCount>MaximumCount) return 0xC000000D;
    *Handle = GetKernelHandle(CreateKernelObject<Semaphore>(InitialCount, MaximumCount));
    return STATUS_SUCCESS;
}

uint32_t NtSetEvent(uint32_t eventHandle, uint32_t* previousState)
{
    auto handle=std::dynamic_pointer_cast<Event>(KernelObjects::Acquire(eventHandle));
    if(!handle) return 0xC0000008;
    const auto previous=handle->Set();
    if(previousState) *previousState=ByteSwap(uint32_t(previous));
    ++g_keSetEventGeneration; g_keSetEventGeneration.notify_all();
    return 0;
}

uint32_t NtClearEvent(uint32_t eventHandle, uint32_t* previousState)
{
    auto handle=std::dynamic_pointer_cast<Event>(KernelObjects::Acquire(eventHandle));
    if(!handle) return 0xC0000008;
    const auto previous=handle->Reset();
    if(previousState) *previousState=ByteSwap(uint32_t(previous));
    return 0;
}

uint32_t NtReleaseSemaphore(uint32_t semaphoreHandle, uint32_t ReleaseCount, int32_t* PreviousCount)
{
    auto Handle=std::dynamic_pointer_cast<Semaphore>(KernelObjects::Acquire(semaphoreHandle));
    if(!Handle) return 0xC0000008;
    uint32_t previousCount;
    const auto status=Handle->Release(ReleaseCount, &previousCount);
    if(status) return status;

    if (PreviousCount != nullptr)
        *PreviousCount = ByteSwap(previousCount);

    return STATUS_SUCCESS;
}

bool KeSetEvent(XKEVENT* pEvent, uint32_t Increment, bool Wait)
{
    bool result = QueryKernelObject<Event>(*pEvent)->Set();

    ++g_keSetEventGeneration;
    g_keSetEventGeneration.notify_all();

    return result;
}

bool KeResetEvent(XKEVENT* pEvent)
{
    return QueryKernelObject<Event>(*pEvent)->Reset();
}

uint32_t KeWaitForSingleObject(XDISPATCHER_HEADER* Object, uint32_t WaitReason, uint32_t WaitMode, bool Alertable, be<int64_t>* Timeout)
{
    const uint32_t timeout = GuestTimeoutToMilliseconds(Timeout);
    switch (Object->Type)
    {
        case 0:
        case 1:
            return QueryKernelObject<Event>(*Object)->Wait(timeout);

        case 5:
            return QueryKernelObject<Semaphore>(*Object)->Wait(timeout);

        case 6:
        {
            auto thread=KernelObjects::AcquireBody(g_memory.MapVirtual(Object));
            return thread ? thread->Wait(timeout) : 0xC0000008;
        }
        default:
            assert(false && "Unrecognized kernel object type.");
            return STATUS_TIMEOUT;
    }

    return STATUS_SUCCESS;
}

uint32_t KeReleaseSemaphore(XKSEMAPHORE* semaphore, uint32_t increment, uint32_t adjustment, uint32_t wait)
{
    auto* object = QueryKernelObject<Semaphore>(semaphore->Header);
    uint32_t previous=0;
    const auto status=object->Release(adjustment,&previous);
    return status ? status : previous;
}

void KeInitializeSemaphore(XKSEMAPHORE* semaphore, uint32_t count, uint32_t limit)
{
    semaphore->Header.Type = 5;
    semaphore->Header.SignalState = count;
    semaphore->Limit = limit;

    auto* object = QueryKernelObject<Semaphore>(semaphore->Header);
}

uint32_t NtResumeThread(uint32_t threadHandle, uint32_t* suspendCount)
{
    auto hThread=std::dynamic_pointer_cast<GuestThreadHandle>(KernelObjects::Acquire(threadHandle));
    if(!hThread) return 0xC0000008;
    const auto previous=hThread->suspended.exchange(false);
    if(suspendCount) *suspendCount=ByteSwap(uint32_t(previous));
    hThread->suspended.notify_all();

    return S_OK;
}

uint32_t KeResumeThread(GuestThreadHandle* object)
{
    const auto previous=object->suspended.exchange(false);
    object->suspended.notify_all();
    return previous;
}

uint32_t NtSuspendThread(uint32_t threadHandle, uint32_t* suspendCount)
{
    auto hThread=std::dynamic_pointer_cast<GuestThreadHandle>(KernelObjects::Acquire(threadHandle));
    if(!hThread) return 0xC0000008;
    if(hThread.get()!=KernelObjects::CurrentThread()) return 0xC0000002; // remote suspension needs a scheduler safepoint

    hThread->suspended = true;
    hThread->suspended.wait(true);

    return S_OK;
}

uint32_t NtDuplicateObject(uint32_t sourceHandle, be<uint32_t>* targetHandle,
    uint32_t options)
{
    // Xbox 360 ABI has three arguments (not desktop NT's five).
    if(options & ~3u) return 0xC000000D;
    if(!targetHandle) return (options&1) ? (KernelObjects::Close(sourceHandle) ? 0 : 0xC0000008) : 0xC000000D;
    uint32_t destination=0;
    const auto status=KernelObjects::Duplicate(sourceHandle,destination,(options&1)!=0);
    *targetHandle=destination;
    return status;
}

GUEST_FUNCTION_HOOK(__imp__NtClose, NtClose);
GUEST_FUNCTION_HOOK(__imp__ObReferenceObjectByHandle, ObReferenceObjectByHandle);
GUEST_FUNCTION_HOOK(__imp__ObReferenceObject, ObReferenceObject);
GUEST_FUNCTION_HOOK(__imp__ObDereferenceObject, ObDereferenceObject);
GUEST_FUNCTION_HOOK(__imp__NtWaitForSingleObjectEx, NtWaitForSingleObjectEx);
GUEST_FUNCTION_HOOK(__imp__NtCreateEvent, NtCreateEvent);
GUEST_FUNCTION_HOOK(__imp__NtCreateSemaphore, NtCreateSemaphore);
GUEST_FUNCTION_HOOK(__imp__NtSetEvent, NtSetEvent);
GUEST_FUNCTION_HOOK(__imp__NtClearEvent, NtClearEvent);
GUEST_FUNCTION_HOOK(__imp__NtReleaseSemaphore, NtReleaseSemaphore);
GUEST_FUNCTION_HOOK(__imp__KeSetEvent, KeSetEvent);
GUEST_FUNCTION_HOOK(__imp__KeResetEvent, KeResetEvent);
GUEST_FUNCTION_HOOK(__imp__KeWaitForSingleObject, KeWaitForSingleObject);
GUEST_FUNCTION_HOOK(__imp__KeReleaseSemaphore, KeReleaseSemaphore);
GUEST_FUNCTION_HOOK(__imp__KeInitializeSemaphore, KeInitializeSemaphore);
GUEST_FUNCTION_HOOK(__imp__NtResumeThread, NtResumeThread);
GUEST_FUNCTION_HOOK(__imp__KeResumeThread, KeResumeThread);
GUEST_FUNCTION_HOOK(__imp__NtSuspendThread, NtSuspendThread);
GUEST_FUNCTION_HOOK(__imp__NtDuplicateObject, NtDuplicateObject);
