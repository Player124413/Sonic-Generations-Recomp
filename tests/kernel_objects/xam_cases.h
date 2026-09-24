#pragma once
#include <kernel/xam_objects.h>
#include <kernel/xam_content_registry.h>
#include <set>
extern PPCFunc __imp__XamNotifyCreateListener, __imp__XNotifyGetNext, __imp__XamContentCreateEnumerator, __imp__XamEnumerate;
static uint64_t EchoQword(uint64_t value) { return value; }
static uint64_t EchoStackQword(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint64_t value) { return value; }
static void XamArgumentTests()
{
    PPCContext ctx{}; ctx.r3.u64=0x1234567887654321ull;
    HostToGuestFunction<EchoQword>(ctx,g_memory.base); CHECK(ctx.r3.u64==0x1234567887654321ull);
    auto* stack=g_userHeap.Alloc(256); ctx.r1.u64=g_memory.MapVirtual(stack);
    *static_cast<be<uint64_t>*>(g_memory.Translate(ctx.r1.u32+0x50))=0x1122334455667788ull;
    CHECK(ArgTranslator::GetValue<uint32_t>(ctx,g_memory.base,8)==0x55667788);
    HostToGuestFunction<EchoStackQword>(ctx,g_memory.base); CHECK(ctx.r3.u64==0x1122334455667788ull);
    g_userHeap.Free(stack);
}
static void XamNotificationTests()
{
    constexpr uint32_t message=(60u<<25)|(1u<<16)|7u;
    PPCContext ctx{}; ctx.r3.u64=uint64_t{1}<<60; ctx.r4.u64=1;
    __imp__XamNotifyCreateListener(ctx,g_memory.base);
    const auto handle=ctx.r3.u32;
    uint32_t alias=0; CHECK(KernelObjects::Duplicate(handle,alias,false)==0);
    auto owner=KernelObjects::Acquire(alias); std::weak_ptr<KernelObject> weak=owner;
    CHECK(owner->Wait(0)==STATUS_TIMEOUT); owner.reset();
    CHECK(KernelObjects::Close(handle));
    XamNotifyEnqueueEvent(7,11); // area zero excluded
    XamNotifyEnqueueEvent((60u<<25)|(2u<<16)|7u,12); // version too new
    CHECK(KernelObjects::Acquire(alias)->Wait(0)==STATUS_TIMEOUT);
    XamNotifyEnqueueEvent(message,123);
    CHECK(KernelObjects::Acquire(alias)->Wait(0)==0);
    be<uint32_t> id=9,param=9;
    CHECK(!XNotifyGetNext(alias,0,nullptr,&param) && param==0); // no consumption
    CHECK(!XNotifyGetNext(alias,message+1,&id,&param) && id==0 && param==0);
    auto* outputs=static_cast<be<uint32_t>*>(g_userHeap.Alloc(8));
    ctx.r3.u64=alias; ctx.r4.u64=message; ctx.r5.u64=g_memory.MapVirtual(outputs); ctx.r6.u64=ctx.r5.u64+4;
    __imp__XNotifyGetNext(ctx,g_memory.base);
    CHECK(ctx.r3.u32==1 && outputs[0]==message && outputs[1]==123);
    g_userHeap.Free(outputs);
    CHECK(KernelObjects::Acquire(alias)->Wait(0)==STATUS_TIMEOUT);
    CHECK(KernelObjects::Close(alias) && weak.expired());
    CHECK(!XNotifyGetNext(alias,0,&id,&param));
    auto* event=CreateKernelObject<Event>(true,false);
    CHECK(!XNotifyGetNext(event->handle,0,&id,&param)); CHECK(KernelObjects::Close(event->handle));

    // Concurrent producer vs close. The bus holds weak references, not dangling
    // raw pointers or permanent ownership of every listener ever created.
    std::atomic<bool> running{true};
    std::thread producer([&]{while(running.load()) XamNotifyEnqueueEvent(9,1);});
    for(unsigned i=0;i<250;++i)
    {
        const auto h=XamNotifyCreateListener(1);
        XNotifyGetNext(h,0,&id,&param);
        CHECK(KernelObjects::Close(h));
    }
    running=false; producer.join();
}
static void XamEnumerationTests()
{
    auto first=XamMakeContent(1,"enumerator-first");
    auto second=XamMakeContent(1,"enumerator-second");
    XamRegisterContent(first,"first-root"); XamRegisterContent(second,"second-root");
    auto* outputs=static_cast<be<uint32_t>*>(g_userHeap.Alloc(8));
    PPCContext ctx{}; ctx.r3.u64=0; ctx.r4.u64=0; ctx.r5.u64=1; ctx.r6.u64=0; ctx.r7.u64=2;
    ctx.r8.u64=g_memory.MapVirtual(outputs); ctx.r9.u64=ctx.r8.u64+4;
    __imp__XamContentCreateEnumerator(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    CHECK(outputs[0]==2*sizeof(XCONTENT_DATA));
    const auto handle=outputs[1].get(); g_userHeap.Free(outputs);
    auto third=XamMakeContent(1,"later-registration"); XamRegisterContent(third,"third-root");
    uint32_t alias=0; CHECK(KernelObjects::Duplicate(handle,alias,false)==0);
    std::vector<uint8_t> buffer(2*sizeof(XCONTENT_DATA)+16,0xA5);
    be<uint32_t> count=9;
    CHECK(XamEnumerate(handle,0,buffer.data(),sizeof(XCONTENT_DATA)-1,&count,nullptr)==122 && count==0);
    CHECK(std::all_of(buffer.begin(),buffer.end(),[](auto v){return v==0xA5;}));
    XXOVERLAPPED overlapped{}; overlapped.pCompletionRoutine=0x1000;
    CHECK(XamEnumerate(handle,0,buffer.data(),sizeof(XCONTENT_DATA),&count,&overlapped)==50 && count==0);
    CHECK(XamEnumerate(handle,0,nullptr,0,&count,nullptr)==87 && count==0);
    CHECK(XamEnumerate(handle,0,buffer.data(),sizeof(XCONTENT_DATA),&count,nullptr)==0 && count==1);
    CHECK(KernelObjects::Close(handle));
    CHECK(XamEnumerate(alias,0,buffer.data()+sizeof(XCONTENT_DATA),sizeof(XCONTENT_DATA),&count,nullptr)==0 && count==1);
    std::set<std::string> names;
    for(size_t i=0;i<2;++i)
    {
        XCONTENT_DATA data{}; std::memcpy(&data,buffer.data()+i*sizeof(data),sizeof(data));
        names.insert(data.szFileName);
    }
    CHECK(names==std::set<std::string>({"enumerator-first","enumerator-second"}));
    CHECK(std::all_of(buffer.end()-16,buffer.end(),[](auto v){return v==0xA5;}));
    CHECK(XamEnumerate(alias,0,buffer.data(),sizeof(XCONTENT_DATA),&count,nullptr)==18 && count==0);
    CHECK(KernelObjects::Close(alias));
    CHECK(XamEnumerate(alias,0,buffer.data(),sizeof(XCONTENT_DATA),&count,nullptr)==6 && count==0);
    be<uint32_t> size=9,out=9;
    CHECK(XamContentCreateEnumerator(0,0,0,0,1,&size,&out)==87 && size==0 && out==0);
    CHECK(XamContentCreateEnumerator(0,0,1,0,UINT32_MAX,&size,&out)==87);
    CHECK(XamContentCreateEnumerator(1,0,1,0,1,&size,&out)==1317);
    XamRootCreate("snapshot","old"); auto saved=XamGetRootPath("snapshot");
    XamRootCreate("snapshot",std::string(1000,'x')); XamRootClose("snapshot"); CHECK(saved=="old");
    const auto longName=XamMakeContent(1,std::string(200,'n'));
    CHECK(longName.szFileName[sizeof(longName.szFileName)-1]==0);
}
static void XamUnsupportedObjects()
{
    be<uint32_t> session=0,object=9;
    CHECK(XamSessionCreateHandle(nullptr)==87);
    CHECK(XamSessionCreateHandle(&session)==0);
    CHECK(XamSessionRefObjByHandle(session,&object)==50 && object==0);
    CHECK(KernelObjects::Close(session));
    CHECK(XamSessionRefObjByHandle(session,&object)==6 && object==0);
    CHECK(XamUserCreateStatsEnumerator(0,0,0,nullptr,0,nullptr,0,0,&object)==50 && object==0);
}

static void XamOverlappedEnumerationTests()
{
    auto* synchronous=CreateKernelObject<XamSnapshotEnumerator>(4,1,std::vector<uint8_t>{1,2,3,4});
    std::array<uint8_t,4> syncBytes{};
    CHECK(XamEnumerate(synchronous->handle,0,syncBytes.data(),4,nullptr,nullptr)==0);
    CHECK(syncBytes[0]==1 && syncBytes[3]==4);
    CHECK(KernelObjects::Close(synchronous->handle));
    CHECK(MSG_AREA(MSGID(60,7))==60 && MSG_VERSION(MSGID(60,7))==0);
    auto* enumerator=CreateKernelObject<XamSnapshotEnumerator>(4,1,std::vector<uint8_t>{1,2,3,4});
    auto* event=CreateKernelObject<Event>(true,false);
    auto* block=static_cast<uint8_t*>(g_userHeap.Alloc(64)); std::memset(block,0,64);
    auto* overlapped=reinterpret_cast<XXOVERLAPPED*>(block);
    overlapped->hEvent=event->handle; overlapped->dwCompletionContext=0x12345678;
    const auto address=g_memory.MapVirtual(block);
    const auto call=[&] {
        PPCContext ctx{}; ctx.r3.u64=enumerator->handle; ctx.r4.u64=0;
        ctx.r5.u64=address+32; ctx.r6.u64=4; ctx.r7.u64=0; ctx.r8.u64=address;
        __imp__XamEnumerate(ctx,g_memory.base); return ctx.r3.u32;
    };
    overlapped->pCompletionRoutine=0x1000;
    CHECK(call()==50 && event->Wait(0)==STATUS_TIMEOUT);
    overlapped->pCompletionRoutine=0; overlapped->hEvent=0xBAD;
    CHECK(call()==6 && event->Wait(0)==STATUS_TIMEOUT);
    overlapped->hEvent=event->handle;
    CHECK(call()==997);
    CHECK(event->Wait(0)==0 && overlapped->Error==0 && overlapped->Length==1 && overlapped->dwExtendedError==0);
    CHECK(overlapped->dwCompletionContext==0x12345678);
    CHECK(block[32]==1 && block[35]==4);
    event->Reset(); CHECK(call()==997);
    CHECK(event->Wait(0)==0 && overlapped->Error==18 && overlapped->Length==0 && overlapped->dwExtendedError==0x80070012);
    CHECK(KernelObjects::Close(enumerator->handle)); CHECK(KernelObjects::Close(event->handle));
    g_userHeap.Free(block);
}
