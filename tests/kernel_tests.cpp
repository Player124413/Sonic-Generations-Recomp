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

extern uint32_t XexGetModuleHandle(const char*, be<uint32_t>*);

static void TestXexImportBinding()
{
    std::vector<uint8_t> bytes(0x400);
    const auto store=[&](size_t off,uint32_t value) {
        for(size_t i=0;i<4;++i) bytes[off+i]=uint8_t(value>>(24-i*8));
    };
    store(0,0x58455832); store(8,uint32_t(bytes.size())); store(16,0x100); store(20,2);
    store(24,XEX_HEADER_ENTRY_POINT); store(28,uint32_t(PPC_CODE_BASE));
    store(32,XEX_HEADER_IMPORT_LIBRARIES); store(36,0x40);
    store(0x40,80); store(0x44,16); store(0x48,1);
    std::memcpy(bytes.data()+0x4C,"xboxkrnl.exe",13);
    store(0x5C,52); bytes[0x83]=3;
    constexpr uint32_t slot=uint32_t(PPC_IMAGE_BASE)+0x1000;
    for(size_t i=0;i<3;++i) store(0x84+i*4,slot+uint32_t(i)*4);
    Image image; image.base=PPC_IMAGE_BASE; image.size=PPC_IMAGE_SIZE;
    image.entry_point=PPC_CODE_BASE;
    image.data=std::make_unique<uint8_t[]>(image.size);
    auto* raw=reinterpret_cast<be<uint32_t>*>(image.data.get()+0x1000);
    raw[0]=0x193; raw[1]=0x266; raw[2]=0xAD;
    auto* guest=static_cast<be<uint32_t>*>(g_memory.Translate(slot));
    guest[0]=guest[1]=guest[2]=0xDEADBEEF;
    CHECK(xex_module::RegisterImage(bytes,image));
    std::string error;
    CHECK(xex_module::BindImports(bytes,image,error) && error.empty());
    CHECK(guest[0]==xex_module::VariableAddress(0x193));
    auto* exported=static_cast<be<uint32_t>*>(g_memory.Translate(guest[0]));
    CHECK(*exported==xex_module::ModuleHandle());
    auto* loader=static_cast<be<uint32_t>*>(g_memory.Translate(*exported));
    CHECK(loader[0x1C/4]==PPC_IMAGE_BASE && loader[0x3C/4]==PPC_CODE_BASE);
    CHECK(RtlImageXexHeaderField(loader[0x58/4],XEX_HEADER_ENTRY_POINT)!=0);
    CHECK(guest[1]==xex_module::VariableAddress(0x266));
    CHECK(*static_cast<be<uint32_t>*>(g_memory.Translate(guest[1]))==0);
    CHECK(guest[2]==xex_module::VariableAddress(0xAD));
    be<uint32_t> handle;
    CHECK(XexGetModuleHandle(nullptr,&handle)==0 && handle==*exported);
    CHECK(XexGetModuleHandle("DEFAULT.XEX",&handle)==0 && handle==*exported);
    CHECK(XexGetModuleHandle("not-the-title.xex",&handle)!=0 && handle==0);
    CHECK(XexGetModuleHandle(nullptr,nullptr)!=0);

    // Failed plans must not partially patch the first, otherwise valid record.
    guest[0]=guest[1]=guest[2]=0xDEADBEEF;
    raw[2]=0xFFFF;
    CHECK(!xex_module::BindImports(bytes,image,error) && !error.empty());
    CHECK(guest[0]==0xDEADBEEF && guest[1]==0xDEADBEEF && guest[2]==0xDEADBEEF);
    raw[2]=0x1B; // known variable, but no implemented object-type ABI
    CHECK(!xex_module::BindImports(bytes,image,error));
    raw[2]=0xAD;
    store(0x8C,slot); // duplicate destination
    CHECK(!xex_module::BindImports(bytes,image,error));
    store(0x8C,uint32_t(PPC_IMAGE_BASE+PPC_IMAGE_SIZE-2));
    CHECK(!xex_module::BindImports(bytes,image,error));
    store(0x8C,slot+8);
    bytes[0x59]='!'; bytes[0x5A]='!'; bytes[0x5B]='!'; bytes[0x58]='!';
    CHECK(!xex_module::BindImports(bytes,image,error)); // unterminated name
    std::memcpy(bytes.data()+0x4C,"xboxkrnl.exe",13);
    bytes[0x59]=bytes[0x5A]=bytes[0x5B]=0;
    store(0x5C,UINT32_MAX);
    CHECK(!xex_module::BindImports(bytes,image,error));
    store(0x5C,52);

    // Use a known generated function mapping without executing guest code.
    raw[1]=1; raw[2]=0x01000001;
    store(0x8C,uint32_t(PPC_CODE_BASE));
    *reinterpret_cast<be<uint32_t>*>(image.data.get()+PPC_CODE_BASE-PPC_IMAGE_BASE)=0x01000001;
    CHECK(xex_module::BindImports(bytes,image,error));
    CHECK(guest[1]==PPC_CODE_BASE);
    *reinterpret_cast<be<uint32_t>*>(image.data.get()+PPC_CODE_BASE-PPC_IMAGE_BASE)=0x01000002;
    CHECK(!xex_module::BindImports(bytes,image,error));
}

static void TestRuntimeDecoderImports()
{
    // Synthetic, unencrypted XEX/PE: no game assets. The tool decoder rewrites
    // these records; the separate runtime decoder must preserve every BE byte.
    std::vector<uint8_t> bytes(0x2400);
    auto be32=[&](size_t off,uint32_t value) {
        for(size_t i=0;i<4;++i) bytes[off+i]=uint8_t(value>>(24-i*8));
    };
    auto le32=[&](size_t off,uint32_t value) {
        for(size_t i=0;i<4;++i) bytes[off+i]=uint8_t(value>>(i*8));
    };
    be32(0,0x58455832); be32(8,0x400); be32(16,0x100); be32(20,2);
    be32(24,XEX_HEADER_IMPORT_LIBRARIES); be32(28,0x40);
    be32(32,XEX_HEADER_FILE_FORMAT_INFO); be32(36,0xA0); be32(0xA0,8);
    be32(0x100+offsetof(Xex2SecurityInfo,imageSize),0x2000);
    be32(0x100+offsetof(Xex2SecurityInfo,loadAddress),uint32_t(PPC_IMAGE_BASE));
    be32(0x40,80); be32(0x44,16); be32(0x48,1);
    std::memcpy(bytes.data()+0x4C,"xboxkrnl.exe",13);
    be32(0x5C,52); bytes[0x83]=3;
    for(size_t i=0;i<3;++i) be32(0x84+i*4,uint32_t(PPC_IMAGE_BASE)+0x1000+uint32_t(i)*4);
    le32(0x400,0x5A4D); le32(0x43C,0x80); le32(0x480,0x4550);
    bytes[0x486]=1; bytes[0x494]=0xE0; bytes[0x498]=0x0B; bytes[0x499]=1;
    std::memcpy(bytes.data()+0x578,".text",6);
    le32(0x580,0x2000); // section VirtualSize; RVA 0
    le32(0x59C,0x20); // code section
    be32(0x1400,0x193); be32(0x1404,1); be32(0x1408,0x01000001);
    auto image=xex_module::DecodeImage(bytes);
    CHECK(image.data && image.size==0x2000 && image.base==PPC_IMAGE_BASE);
    if(image.data) CHECK(std::memcmp(image.data.get()+0x1000,bytes.data()+0x1400,16)==0);
    // Reject malformed imports before reaching the upstream decoder.
    be32(0x5C,UINT32_MAX);
    CHECK(!xex_module::DecodeImage(bytes).data);
}

int main()
{
    printf("== SonicGenerationsRecomp kernel smoke tests ==\n");

    g_userHeap.Init();

    TestXexRegistry();
    TestXexImportBinding();
    TestRuntimeDecoderImports();
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
