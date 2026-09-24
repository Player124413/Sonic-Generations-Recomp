#include <stdafx.h>
#ifdef _WIN32
#include <ntstatus.h>
#endif
#include <kernel/dispatcher_objects.h>
#include <kernel/function.h>
#include <kernel/object_imports.h>
#include <cpu/guest_thread.h>
#include <atomic>
#include <barrier>

Memory g_memory;
Heap g_userHeap;
PPCFuncMapping PPCFuncMappings[]={{0,nullptr}};
static std::atomic<int> failures{0};
#define CHECK(x) do { if(!(x)) { std::printf("FAIL %d: %s\n",__LINE__,#x); ++failures; } } while(0)
using namespace KernelObjects;
#include "import_cases.h"
#include "xam_cases.h"
static uint32_t Word(uint32_t address)
{ return static_cast<be<uint32_t>*>(g_memory.Translate(address))->get(); }
static KernelObject* ReturnObject() { return CreateKernelObject<KernelObject>(); }
static KernelObject* ReturnInvalidObject() { return GetInvalidKernelObject<KernelObject>(); }
static uint32_t WaitEvent(Event* event) { return event->Wait(0); }
static std::atomic<uint32_t> ran{0}, threadBody{0};
static PPC_FUNC(ThreadEntry)
{
    uint32_t body=0;
    const auto status=Reference(0xFFFFFFFEu,TypeAddress(Type::Thread),body);
    if(status || Word(ctx.r13.u32+0x100)!=body || Word(body+0x14C)!=GuestThread::GetCurrentThreadId()) std::abort();
    GuestThread::SetLastError(0x1234);
    if(Word(body+0x160)!=0x1234) std::abort();
    uint32_t alias=0;
    if(Duplicate(0xFFFFFFFEu,alias,false) || alias==0xFFFFFFFEu || !Close(alias)) std::abort();
    threadBody=body;
    // Leave a guest reference for the caller, independently of thread handles.
    ran.fetch_add(1);
}
static void BodiesAndHandles()
{
    auto* event=CreateKernelObject<Event>(true,false);
    const auto handle=event->handle;
    CHECK(!g_memory.IsInMemoryRange(event)); // no host C++ object in guest RAM
    uint32_t duplicate=0,body=0;
    CHECK(Duplicate(handle,duplicate,false)==0 && duplicate!=handle);
    CHECK(Acquire(duplicate).get()==event);
    CHECK(Reference(handle,TypeAddress(Type::Semaphore),body)==0xC0000024 && body==0);
    CHECK(Reference(handle,TypeAddress(Type::Event),body)==0 && body!=handle);
    CHECK(Word(body-8)==TypeAddress(Type::Event));
    CHECK(Word(body-24)==3 && Word(body-20)==2);
    CHECK(Close(handle) && !Close(handle) && !Acquire(handle));
    CHECK(Acquire(duplicate).get()==event);
    CHECK(ReferenceBody(body));
    CHECK(Close(duplicate));
    CHECK(Word(body-24)==2 && Word(body-20)==0);
    CHECK(AcquireBody(body).get()==event);
    // Object APIs accept the referenced guest body after all handles are closed.
    { CallScope scope; auto* dispatcher=QueryKernelObject<Event>(*static_cast<XKEVENT*>(g_memory.Translate(body)));
      CHECK(dispatcher==event); dispatcher->Set(); CHECK(Word(body+4)==1); CHECK(dispatcher->Wait(0)==0);
      CHECK(dispatcher->Reset() && Word(body+4)==0); }
    CHECK(Dereference(body) && AcquireBody(body));
    CHECK(Dereference(body) && !AcquireBody(body));
    CHECK(!Dereference(body));
    CHECK(Reference(handle,0,body)==0xC0000008 && body==0);
    uint32_t invalid=5;
    CHECK(Duplicate(0x80000004,invalid,false)==0xC0000008 && invalid==0);

    auto* semaphore=CreateKernelObject<Semaphore>(1,2);
    const auto original=semaphore->handle;
    CHECK(Reference(original,TypeAddress(Type::Semaphore),body)==0);
    CHECK(static_cast<XKSEMAPHORE*>(g_memory.Translate(body))->Header.Type==5);
    CHECK(Word(body+sizeof(XDISPATCHER_HEADER))==2);
    CHECK(semaphore->Wait(0)==0 && Word(body+4)==0);
    CHECK(semaphore->Wait(0)==STATUS_TIMEOUT);
    uint32_t prior=99;
    CHECK(semaphore->Release(2,&prior)==0 && prior==0 && Word(body+4)==2);
    CHECK(semaphore->Release(1,&prior)==0xC0000047 && Word(body+4)==2);
    CHECK(Duplicate(original,duplicate,true)==0 && !Acquire(original));
    CHECK(Acquire(duplicate).get()==semaphore);
    CHECK(Close(duplicate) && Dereference(body));
}
static void ImportedPointerConversion()
{
    PPCContext returned{};
    HostToGuestFunction<ReturnObject>(returned,g_memory.base);
    CHECK(Acquire(returned.r3.u32)!=nullptr);
    auto returnedHandle=returned.r3.u32;
    {
        auto pinned=Acquire(returnedHandle);
        ArgTranslator::SetValue<KernelObject*>(returned,g_memory.base,0,pinned.get());
        CHECK(returned.r3.u32==returnedHandle);
    }
    CHECK(Close(returnedHandle));
    HostToGuestFunction<ReturnInvalidObject>(returned,g_memory.base);
    CHECK(returned.r3.u32==GUEST_INVALID_HANDLE_VALUE);
    auto* event=CreateKernelObject<Event>(false,true);
    uint32_t alias=0; CHECK(Duplicate(event->handle,alias,false)==0);
    PPCContext ctx{}; ctx.r3.u64=alias;
    HostToGuestFunction<WaitEvent>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==0);
    ctx.r3.u64=alias; HostToGuestFunction<WaitEvent>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==STATUS_TIMEOUT);
    CHECK(Close(alias));
    ctx.r3.u64=alias; HostToGuestFunction<WaitEvent>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==0xC0000008);
    ctx.r3.u64=0; HostToGuestFunction<WaitEvent>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==0xC0000008);
    auto* sem=CreateKernelObject<Semaphore>(1,1);
    ctx.r3.u64=sem->handle; HostToGuestFunction<WaitEvent>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==0xC0000008); // wrong C++ class is not dereferenced
    ctx.r3.u64=sem->handle; HostToGuestFunction<WaitEvent,0>(ctx,g_memory.base);
    CHECK(ctx.r3.u32==0); // Win32 BOOL wrappers need FALSE, not nonzero NTSTATUS
    CHECK(Close(sem->handle)); CHECK(Close(event->handle));
}
static void ConcurrentClose()
{
    std::atomic<int> destroyed{0};
    struct Object final : KernelObject
    {
        std::atomic<int>& destroyed;
        explicit Object(std::atomic<int>& d) : destroyed(d) {}
        ~Object() override { ++destroyed; }
    };
    auto* object=CreateKernelObject<Object>(destroyed);
    auto handle=object->handle;
    std::barrier gate(2);
    std::thread caller([&] {
        CallScope scope; CHECK(Pin(handle)==object);
        gate.arrive_and_wait(); gate.arrive_and_wait();
        CHECK(destroyed==0);
    });
    gate.arrive_and_wait(); CHECK(Close(handle)); CHECK(destroyed==0);
    gate.arrive_and_wait(); caller.join(); CHECK(destroyed==1);
    CHECK(!Close(handle));
}
static void TimedDispatchers()
{
    auto* event=CreateKernelObject<Event>(false,false);
    CHECK(event->Wait(1)==STATUS_TIMEOUT);
    std::thread setter([&] { std::this_thread::sleep_for(std::chrono::milliseconds(5)); event->Set(); });
    CHECK(event->Wait(5000)==0); setter.join();
    CHECK(event->Wait(0)==STATUS_TIMEOUT);
    CHECK(Close(event->handle));
    auto* sem=CreateKernelObject<Semaphore>(0,1);
    CHECK(sem->Wait(1)==STATUS_TIMEOUT);
    std::thread releaser([&] { std::this_thread::sleep_for(std::chrono::milliseconds(5)); sem->Release(1,nullptr); });
    CHECK(sem->Wait(5000)==0); releaser.join(); CHECK(Close(sem->handle));
    be<int64_t> timeout=-1;
    CHECK(GuestTimeoutToMilliseconds(&timeout)==1);
    timeout=INT64_MIN; CHECK(GuestTimeoutToMilliseconds(&timeout)==INFINITE-1);
    timeout=1; CHECK(GuestTimeoutToMilliseconds(&timeout)==0); // expired absolute deadline
    CHECK(GuestTimeoutToMilliseconds(nullptr)==INFINITE);
}
static void Threads()
{
    constexpr uint32_t entry=0x90000100;
    g_memory.InsertFunction(entry,ThreadEntry);
    auto* object=GuestThread::Start({entry,0,1},nullptr); // suspended
    uint32_t body=0,alias=0;
    CHECK(Reference(object->handle,TypeAddress(Type::Thread),body)==0);
    CHECK(Duplicate(object->handle,alias,false)==0);
    CHECK(Close(object->handle) && Close(alias)); // running ownership is separate
    CHECK(AcquireBody(body).get()==object);
    auto keepAlive=AcquireBody(body);
    object->suspended=false; object->suspended.notify_all();
    CHECK(object->Wait(INFINITE)==0);
#ifndef USE_PTHREAD
    object->thread.join(); // test cleanup; Wait itself must not consume the thread handle
#endif
    CHECK(threadBody==body && ran==1);
    // Completion precedes release of the worker's own ref; wait for destruction
    // through shared ownership rather than assuming that it has already exited.
    CHECK(Dereference(body)); // caller's handle reference
    CHECK(Dereference(body)); // reference left by guest entry
    // The initial/main title thread also gets a real PCR->body and pseudo-handle.
    GuestThread::Start({entry,0,0});
    CHECK(ran==2 && !CurrentThread() && !GetPPCContext());
    CHECK(Dereference(threadBody));
}
int main()
{
    g_userHeap.Init();
    BodiesAndHandles(); ImportedPointerConversion(); ConcurrentClose(); TimedDispatchers(); Threads(); TestObjectImports();
    XamArgumentTests(); XamNotificationTests(); XamEnumerationTests(); XamUnsupportedObjects();
    std::printf("Kernel object tests: %d failures\n",failures.load());
    return failures ? 1 : 0;
}
