#include <cassert>
#include <cstdio>
#include <cstring>
#include <thread>

#include <stdafx.h>
#include <kernel/heap.h>
#include <kernel/memory.h>
#include <kernel/xdm.h>
#include <kernel/guest_printf.h>
#include <cpu/ppc_context.h>
#include <apu/xma.h>
#include <kernel/xdbf.h>
#include <kernel/xex_module.h>
#include <image.h>
#include <xex.h>

// ---------------------------------------------------------------------------
// Smoke tests for the kernel layer. These run on the host without any game
// data and validate the building blocks the recompiled code relies on.
// ---------------------------------------------------------------------------

static int g_failures = 0;

#define CHECK(expr)                                                    \
    do                                                                 \
    {                                                                  \
        if (!(expr))                                                   \
        {                                                              \
            printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #expr);     \
            g_failures++;                                              \
        }                                                              \
    } while (0)

// Process-wide runtime owners are defined in runtime_globals.cpp.

static void TestHeap()
{
    void* a = g_userHeap.Alloc(128);
    void* b = g_userHeap.Alloc(1024 * 1024);
    CHECK(a != nullptr);
    CHECK(b != nullptr);
    CHECK(a != b);

    memset(a, 0xAB, 128);
    CHECK(((uint8_t*)a)[0] == 0xAB);
    CHECK(((uint8_t*)a)[127] == 0xAB);

    g_userHeap.Free(a);
    g_userHeap.Free(b);

    void* c = g_userHeap.AllocPhysical(256, 64);
    CHECK(c != nullptr);
    CHECK((uintptr_t(c) % 64) == 0);
    g_userHeap.Free(c);
}

static void TestMemoryTranslation()
{
    void* host = g_userHeap.Alloc(64);
    uint32_t guest = g_memory.MapVirtual(host);
    CHECK(g_memory.Translate(guest) == host);
    g_userHeap.Free(host);
}

static void TestKernelObjects()
{
    struct TestObject : KernelObject
    {
        int value = 0x1234;
    };

    auto* object = CreateKernelObject<TestObject>();
    CHECK(object != nullptr);
    CHECK(object->value == 0x1234);

    uint32_t handle = GetKernelHandle(object);
    CHECK(IsKernelObject(handle));
    CHECK(GetKernelObject<TestObject>(handle) == object);

    DestroyKernelObject(handle);
}

static void TestGuestPrintf()
{
    alignas(16) static uint8_t memory[1024];
    memset(memory, 0, sizeof(memory));

    PPCContext ctx{};

    const char* text = "value=%d str=%s hex=%x";
    const char* argument = "abc";
    memcpy(memory + 0x100, text, strlen(text) + 1);
    memcpy(memory + 0x180, argument, strlen(argument) + 1);

    ctx.r5.u64 = 42;    // %d
    ctx.r6.u64 = 0x180; // %s
    ctx.r7.u64 = 0xFF;  // %x

    char* dest = (char*)memory + 0x200;
    const char* fmt = (const char*)memory + 0x100;
    uint32_t length = guest_printf::Format(dest, 0, memory, fmt, ctx, 0, 0);

    CHECK(strcmp(dest, "value=42 str=abc hex=ff") == 0);
    CHECK(length == 23);

    // Width/zero-padding.
    memset(memory + 0x200, 0, 64);
    memcpy(memory + 0x100, "%05d|%-4s|", 11);
    ctx.r5.u64 = 42;
    ctx.r6.u64 = 0x180;
    length = guest_printf::Format(dest, 0, memory, fmt, ctx, 0, 0);
    CHECK(strcmp(dest, "00042|abc |") == 0);
    CHECK(length == 11);
}

static void TestXma()
{
    xma::Init();
    uint32_t context = xma::CreateContext(12);
    CHECK(context != 0);
    CHECK((context & 63) == 0);
    CHECK(context == xma::OnMmioRead(0x1800));
    xma::Init(); // MmMapIoSpace must not reset previously allocated contexts.
    uint32_t second = xma::CreateContext(0);
    CHECK(second == context + 64);
    CHECK(xma::ReleaseContext(second));
    CHECK(!xma::ReleaseContext(context + 1));
    CHECK(XMACreateContext(nullptr) == 0xC000000D);
    CHECK(xma::ReleaseContext(context));
    CHECK(!xma::ReleaseContext(context));
}

extern uint32_t RtlImageXexHeaderField(uint32_t imageHeader, uint32_t headerId);

static void TestXexRegistry()
{
    std::vector<uint8_t> bytes(0x400);
    const auto store=[&](size_t off,uint32_t value) { for(size_t i=0;i<4;++i) bytes[off+i]=uint8_t(value>>(24-i*8)); };
    store(0,0x58455832); store(8,uint32_t(bytes.size())); store(16,0x100); store(20,1);
    store(24,XEX_HEADER_ENTRY_POINT); store(28,uint32_t(PPC_CODE_BASE));
    CHECK(xex_module::ValidateHeader(bytes));
    Image image; image.base=PPC_IMAGE_BASE; image.size=PPC_IMAGE_SIZE;
    image.sections.insert({".test",PPC_CODE_BASE,16,SectionFlags_Code,nullptr});
    CHECK(xex_module::RegisterImage(bytes,image));
    uint32_t size=0, address=0;
    const auto* entry=xex_module::GetOptHeader(XEX_HEADER_ENTRY_POINT,&size);
    CHECK(entry && size==4 && g_memory.IsInMemoryRange(entry));
    CHECK(entry && reinterpret_cast<const be<uint32_t>*>(entry)->get()==PPC_CODE_BASE);
    if(entry)
    {
        const auto header=g_memory.MapVirtual(entry-28);
        CHECK(RtlImageXexHeaderField(header,XEX_HEADER_ENTRY_POINT)==g_memory.MapVirtual(entry));
        CHECK(RtlImageXexHeaderField(header,0xFFFFFFFF)==0);
        CHECK(RtlImageXexHeaderField(0,XEX_HEADER_ENTRY_POINT)==0);
    }
    CHECK(xex_module::GetSection(".test",address,size) && address==PPC_CODE_BASE && size==16);
    CHECK(!xex_module::GetSection(".text",address,size)); // no synthetic section
    CHECK(!xex_module::GetSection(nullptr,address,size));
    CHECK(!xex_module::GetOptHeader(0xFFFFFFFF,&size) && size==0);
    store(20,UINT32_MAX); CHECK(!xex_module::ValidateHeader(bytes)); store(20,1);
    store(24,XEX_HEADER_FILE_FORMAT_INFO); store(28,0xFFFFFFFC);
    CHECK(!xex_module::ValidateHeader(bytes));
    CHECK(!xex_module::ValidateHeader(std::span(bytes).first(16)));
}

int main()
{
    printf("== SonicGenerationsRecomp kernel smoke tests ==\n");

    g_userHeap.Init();

    TestXexRegistry();
    TestHeap();
    TestMemoryTranslation();
    TestKernelObjects();
    TestGuestPrintf();
    TestXma();

    if (g_failures == 0)
    {
        printf("All tests passed.\n");
        return 0;
    }

    printf("%d test(s) FAILED.\n", g_failures);
    return 1;
}
