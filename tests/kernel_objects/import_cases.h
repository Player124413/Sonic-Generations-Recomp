#pragma once
extern PPCFunc __imp__NtCreateEvent, __imp__NtDuplicateObject, __imp__NtClose;
extern PPCFunc __imp__ObReferenceObjectByHandle, __imp__ObDereferenceObject;
extern PPCFunc __imp__NtSetEvent, __imp__KeWaitForSingleObject;
static void TestObjectImports()
{
    auto* output=static_cast<be<uint32_t>*>(g_userHeap.Alloc(32));
    std::memset(output,0,32);
    const auto address=g_memory.MapVirtual(output);
    PPCContext ctx{};
    ctx.r3.u64=address; ctx.r4.u64=0; ctx.r5.u64=1; ctx.r6.u64=0;
    __imp__NtCreateEvent(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    const auto source=output[0].get();
    ctx.r3.u64=source; ctx.r4.u64=address+4; ctx.r5.u64=1;
    ctx.r6.u64=0xDEAD; ctx.r7.u64=0; // options are r5, NOT r7
    __imp__NtDuplicateObject(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    const auto duplicate=output[1].get(); CHECK(source!=duplicate && duplicate);
    ctx.r3.u64=source; __imp__NtClose(ctx,g_memory.base); CHECK(ctx.r3.u32==0xC0000008);
    ctx.r3.u64=duplicate; ctx.r4.u64=KernelObjects::TypeAddress(KernelObjects::Type::Event); ctx.r5.u64=address+8;
    __imp__ObReferenceObjectByHandle(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    const auto body=output[2].get(); CHECK(body && body!=duplicate);
    ctx.r3.u64=body; ctx.r4.u64=0; __imp__NtSetEvent(ctx,g_memory.base); CHECK(ctx.r3.u32==0xC0000008);
    ctx.r3.u64=duplicate; ctx.r4.u64=0; __imp__NtSetEvent(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    ctx.r3.u64=duplicate; __imp__NtClose(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    ctx.r3.u64=body; ctx.r4.u64=0; ctx.r5.u64=0; ctx.r6.u64=0; ctx.r7.u64=address+16;
    __imp__KeWaitForSingleObject(ctx,g_memory.base); CHECK(ctx.r3.u32==0);
    ctx.r3.u64=body; __imp__KeWaitForSingleObject(ctx,g_memory.base); CHECK(ctx.r3.u32==STATUS_TIMEOUT);
    ctx.r3.u64=body; __imp__ObDereferenceObject(ctx,g_memory.base);
    CHECK(!KernelObjects::AcquireBody(body));
    g_userHeap.Free(output);
}

