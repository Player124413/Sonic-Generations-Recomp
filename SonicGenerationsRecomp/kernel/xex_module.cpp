#include <stdafx.h>
#include "xex_module.h"
#include <kernel/function.h>
#include <kernel/memory.h>
#include <os/logger.h>
#include <xex.h>
#include <image.h>
#include <kernel/heap.h>
#include <kernel/object_manager.h>
#include <atomic>
#include <thread>
#include <chrono>

extern void RtlInitializeCriticalSectionAndSpinCount(XRTL_CRITICAL_SECTION*, uint32_t);

static uint8_t* g_imageHeader = nullptr;
static std::vector<std::tuple<std::string, uint32_t, uint32_t>> g_sections;

namespace
{
struct ImportLibrary
{
    std::string name;
    std::vector<uint32_t> records;
};
uint32_t ReadBE(const uint8_t* p)
{
    return (uint32_t(p[0])<<24)|(uint32_t(p[1])<<16)|(uint32_t(p[2])<<8)|p[3];
}
bool ReadImports(std::span<const uint8_t> bytes, uint64_t base, uint64_t imageSize,
                 std::vector<ImportLibrary>& libraries, std::string& error)
{
    auto fail = [&](const char* message) { error=message; return false; };
    if(!xex_module::ValidateHeader(bytes)) return fail("invalid XEX header");
    auto* raw=static_cast<const uint8_t*>(getOptHeaderPtr(bytes.data(),XEX_HEADER_IMPORT_LIBRARIES));
    if(!raw) return true;
    const size_t total=ReadBE(raw);
    if(total<12) return fail("truncated import header");
    const size_t stringSize=ReadBE(raw+4), stringCount=ReadBE(raw+8);
    if(stringSize>total-12 || stringCount>stringSize/4) return fail("invalid import string table");
    std::vector<std::string> names;
    for(size_t pos=0;names.size()<stringCount;)
    {
        if(pos>=stringSize) return fail("missing import library name");
        auto* begin=raw+12+pos;
        auto* end=static_cast<const uint8_t*>(std::memchr(begin,0,stringSize-pos));
        if(!end || end==begin) return fail("unterminated or empty import library name");
        names.emplace_back(reinterpret_cast<const char*>(begin),size_t(end-begin));
        pos=(pos+size_t(end-begin)+4)&~size_t(3);
        if(pos>stringSize) return fail("truncated import name padding");
    }
    std::set<uint32_t> addresses;
    for(size_t offset=12+stringSize;offset<total;)
    {
        if(total-offset<40) return fail("truncated import library");
        const auto* lib=raw+offset;
        const size_t size=ReadBE(lib), name=lib[37], count=(size_t(lib[38])<<8)|lib[39];
        if(size!=40+count*4 || size>total-offset || name>=names.size())
            return fail("invalid import library size or name index");
        ImportLibrary library{names[name],{}};
        for(size_t i=0;i<count;++i)
        {
            const auto address=ReadBE(lib+40+i*4);
            if((address&3) || address<base || uint64_t(address)-base>=imageSize ||
               imageSize-(uint64_t(address)-base)<4 || !addresses.insert(address).second)
                return fail("unaligned, duplicate or out-of-image import record");
            library.records.push_back(address);
        }
        libraries.push_back(std::move(library));
        offset+=size;
    }
    return true;
}
struct ExportType { uint32_t ordinal; bool variable; const char* name; };
#define kVariable true
#define kFunction false
#define XE_EXPORT(module, ordinal, name, type) {ordinal,type,#name}
const ExportType kernelExports[]={
#include <xbox/xboxkrnl_table.inc>
};
const ExportType xamExports[]={
#include <xbox/xam_table.inc>
};
#undef XE_EXPORT
#undef kVariable
#undef kFunction

// LDR_DATA_TABLE_ENTRY layout follows Xenia's xmodule.h (BSD attribution in
// licenses/Xenia-BSD.txt). This is guest storage, never a host pointer/handle.
struct TitleExports
{
    std::array<be<uint32_t>,25> loader{}; // header pointer at 0x58
    be<uint32_t> moduleHandle{}, certMonitor{}, debugMonitor{};
    alignas(8) std::array<be<uint32_t>,6> timestamp{};
    std::array<be<uint16_t>,12> name{}; // default.xex + terminator
    // Guest DWORD exports, not host Vulkan objects. Xenia's xboxkrnl_video.cc
    // maps the device slots initially to null and the Xenos GPU clock to 500 MHz.
    be<uint32_t> videoDevice{}, xamVideoDevice{}, gpuClockInMHz{};
};
static_assert(offsetof(TitleExports,moduleHandle)==0x64);
TitleExports* g_exports=nullptr;
XRTL_CRITICAL_SECTION* g_hsioCalibrationLock=nullptr;
static_assert(sizeof(XRTL_CRITICAL_SECTION)==28);
static_assert(offsetof(XRTL_CRITICAL_SECTION,LockCount)==16);
static_assert(offsetof(XRTL_CRITICAL_SECTION,OwningThread)==24);
// Constructed after the heap. Stop/join before process-lifetime guest storage
// is destroyed. Guest reloads do not allocate another timer or invalidate it.
void StartTimestampClock()
{
    static std::jthread clock([](std::stop_token stop) {
        const auto start=std::chrono::steady_clock::now();
        while(!stop.stop_requested())
        {
            auto ms=uint32_t(std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::steady_clock::now()-start).count());
            std::atomic_ref<uint32_t>(g_exports->timestamp[4].value).store(
                __builtin_bswap32(ms),std::memory_order_relaxed);
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    });
}
}

Image RuntimeXex2LoadImage(const uint8_t*,size_t);
Image xex_module::DecodeImage(std::span<const uint8_t> bytes)
{
    if(!ValidateHeader(bytes)) return {};
    const auto* header=reinterpret_cast<const Xex2Header*>(bytes.data());
    const auto* security=reinterpret_cast<const Xex2SecurityInfo*>(bytes.data()+header->securityOffset);
    std::vector<ImportLibrary> libraries;
    std::string error;
    if(!ReadImports(bytes,security->loadAddress,security->imageSize,libraries,error))
    { LOGFN_ERROR("XEX imports: {}",error); return {}; }
    return RuntimeXex2LoadImage(bytes.data(),bytes.size());
}

uint32_t xex_module::ModuleHandle()
{
    return g_exports ? g_memory.MapVirtual(g_exports->loader.data()) : 0;
}
uint32_t xex_module::VariableAddress(uint32_t ordinal)
{
    if(!g_exports) return 0;
    switch(ordinal)
    {
    case 0xE: return KernelObjects::TypeAddress(KernelObjects::Type::Event);
    case 0x17: return KernelObjects::TypeAddress(KernelObjects::Type::Semaphore);
    case 0x1B: return KernelObjects::TypeAddress(KernelObjects::Type::Thread);
    case 0x193: return g_memory.MapVirtual(&g_exports->moduleHandle);
    case 0x1BE: return g_memory.MapVirtual(&g_exports->videoDevice);
    case 0x1BF: return g_memory.MapVirtual(&g_exports->xamVideoDevice);
    case 0x1C0: return g_memory.MapVirtual(&g_exports->gpuClockInMHz);
    case 0x1C1: return g_memory.MapVirtual(g_hsioCalibrationLock);
    case 0x266: return g_memory.MapVirtual(&g_exports->certMonitor); // disabled, null pointee
    case 0x59: return g_memory.MapVirtual(&g_exports->debugMonitor); // disabled, null pointee
    case 0xAD: return g_memory.MapVirtual(g_exports->timestamp.data());
    default: return 0; // never fabricate an unknown export
    }
}

namespace
{
struct CompiledImport
{
    const char* library;
    uint32_t ordinal, thunk;
    const char* name;
    PPCFunc* function;
};
#define SONIC_IMPORT(library, ordinal, thunk, name) {library, ordinal, thunk, #name, &__imp__##name},
const CompiledImport compiledImports[]={
#include "title_function_imports.inc"
};
#undef SONIC_IMPORT

bool PlanImports(std::span<const uint8_t> bytes,const Image& image,
                 std::string& error,std::string& report,bool apply)
{
    error.clear();
    report="library\tordinal\tkind\tname\tiat\ttarget\tstatus\n";
    std::vector<ImportLibrary> libraries;
    if(!image.data || !g_exports || image.base>UINT32_MAX || image.size>UINT32_MAX-image.base)
    { error="image or module is not initialized"; return false; }
    if(!ReadImports(bytes,image.base,image.size,libraries,error)) return false;
    std::vector<std::pair<uint32_t,uint32_t>> patches;
    for(const auto& library:libraries)
    {
        std::span<const ExportType> exports;
        if(library.name=="xboxkrnl.exe") exports=kernelExports;
        else if(library.name=="xam.xex") exports=xamExports;
        for(size_t i=0;i<library.records.size();++i)
        {
            const auto address=library.records[i];
            const auto record=ReadBE(image.data.get()+address-image.base);
            const auto ordinal=record&0xFFFF;
            const auto found=std::find_if(exports.begin(),exports.end(),
                [&](const auto& entry){return entry.ordinal==ordinal;});
            const char* name=found==exports.end() ? "unknown" : found->name;
            const char* kind=found==exports.end() ? "unknown" : found->variable ? "variable" : "function";
            std::string reason;
            uint32_t target=0;
            if(record>>24) reason="expected type-0 IAT record";
            else if(exports.empty()) reason="unsupported import library";
            else if(found==exports.end()) reason="unknown export ordinal";
            else if(found->variable)
            {
                target=library.name=="xboxkrnl.exe" ? xex_module::VariableAddress(ordinal) : 0;
                if(!target) reason="variable export is not implemented";
            }
            else if(i+1>=library.records.size()) reason="missing function thunk";
            else
            {
                target=library.records[i+1];
                const auto thunk=ReadBE(image.data.get()+target-image.base);
                // Do not swallow the next IAT entry when a thunk is missing.
                if((thunk>>24)!=1 || (thunk&0xFFFF)!=ordinal)
                    reason="function thunk type or ordinal mismatch";
                else
                {
                    ++i;
                    if(image.size-(target-image.base)<16) reason="truncated function thunk";
                    else if(target<PPC_CODE_BASE || uint64_t(target)>=uint64_t(PPC_CODE_BASE)+PPC_CODE_SIZE ||
                            !g_memory.FindFunction(target)) reason="function thunk has no compiled mapping";
                    else
                    {
                        const auto expected=std::find_if(std::begin(compiledImports),std::end(compiledImports),
                            [&](const auto& e){return e.library==library.name && e.ordinal==ordinal && e.thunk==target;});
                        if(expected==std::end(compiledImports) || expected->function!=g_memory.FindFunction(target))
                            reason="function thunk does not match the compiled title import";
                    }
                }
            }
            report+=fmt::format("{}\t0x{:X}\t{}\t{}\t0x{:08X}\t0x{:08X}\t{}\n",
                library.name,ordinal,kind,name,address,target,reason.empty() ? "bound (semantics not certified)" : reason);
            if(!reason.empty())
            {
                if(!error.empty()) error+='\n';
                error+=fmt::format("{} ordinal 0x{:X} ({}) at 0x{:X}: {}",library.name,ordinal,name,address,reason);
            }
            else patches.emplace_back(address,target);
        }
    }
    if(!error.empty()) return false;
    if(apply)
        for(auto [slot,target]:patches)
            *static_cast<be<uint32_t>*>(g_memory.Translate(slot))=target;
    return true;
}
}

bool xex_module::BindImports(std::span<const uint8_t> bytes,const Image& image,std::string& error)
{
    std::string report;
    return PlanImports(bytes,image,error,report,true);
}

bool xex_module::AuditImports(std::span<const uint8_t> bytes,const Image& image,
                              std::string& report,std::string& error)
{
    return PlanImports(bytes,image,error,report,false);
}

bool xex_module::ValidateHeader(std::span<const uint8_t> bytes)
{
    if (bytes.size() < sizeof(Xex2Header) || std::memcmp(bytes.data(), "XEX2", 4)) return false;
    const auto word = [&](size_t at) { return (uint32_t(bytes[at])<<24) | (uint32_t(bytes[at+1])<<16) |
        (uint32_t(bytes[at+2])<<8) | bytes[at+3]; };
    const size_t headerSize=word(8), security=word(16), count=word(20);
    if (headerSize < sizeof(Xex2Header) || headerSize > bytes.size() || headerSize > 4*1024*1024 ||
        count > (headerSize-sizeof(Xex2Header))/sizeof(Xex2OptHeader) || (security&3) ||
        security < sizeof(Xex2Header) || security > headerSize || sizeof(Xex2SecurityInfo)>headerSize-security) return false;
    std::set<uint32_t> keys;
    for(size_t i=0;i<count;++i)
    {
        const auto key=word(24+i*8), offset=word(28+i*8), units=key&255;
        if(!keys.insert(key).second) return false;
        if(units<=1) continue; // inline value in the optional-header table
        if((offset&3) || offset<24+count*8 || offset>headerSize || headerSize-offset<4) return false;
        const size_t length=units==255 ? word(offset) : units*4;
        if(length<4 || length>headerSize-offset) return false;
        if(key==XEX_HEADER_FILE_FORMAT_INFO && length<sizeof(Xex2OptFileFormatInfo)) return false;
        if(key==XEX_HEADER_RESOURCE_INFO && length<sizeof(Xex2ResourceInfo)) return false;
    }
    return true;
}

bool xex_module::RegisterImage(std::span<const uint8_t> bytes, const Image& image)
{
    if(!ValidateHeader(bytes) || image.base>UINT32_MAX || image.size>UINT32_MAX-image.base) return false;
    std::vector<std::tuple<std::string,uint32_t,uint32_t>> sections;
    for(const auto& section:image.sections)
    {
        if(section.base<image.base || section.base-image.base>image.size ||
            section.size>image.size-(section.base-image.base)) return false;
        sections.emplace_back(section.name,uint32_t(section.base),section.size);
    }
    const auto header=reinterpret_cast<const Xex2Header*>(bytes.data());
    const size_t headerSize=header->headerSize;
    auto* copy=static_cast<uint8_t*>(g_userHeap.Alloc(headerSize));
    if(!copy) return false;
    std::memcpy(copy,bytes.data(),headerSize);
    if(!g_exports)
    {
        auto* storage=g_userHeap.Alloc(sizeof(TitleExports));
        if(!storage) { g_userHeap.Free(copy); return false; }
        // Match the video export's 28-byte body and 32-byte physical alignment.
        // Use the same native bookkeeping layout as our Unleashed-derived Rtl
        // hooks, not a host mutex or an uninitialized block of guest memory.
        auto* lockStorage=g_userHeap.AllocPhysical(sizeof(XRTL_CRITICAL_SECTION),32);
        if(!lockStorage) { g_userHeap.Free(storage); g_userHeap.Free(copy); return false; }
        g_hsioCalibrationLock=new(lockStorage) XRTL_CRITICAL_SECTION{};
        g_hsioCalibrationLock->Header.Type=1; // synchronization event
        RtlInitializeCriticalSectionAndSpinCount(g_hsioCalibrationLock,10000);
        g_exports=new(storage) TitleExports{};
        g_exports->gpuClockInMHz=500;
        StartTimestampClock();
    }
    const uint32_t handle=ModuleHandle();
    // Singleton loader lists, title image metadata and two UNICODE_STRINGs.
    for(size_t offset: {size_t(0),size_t(8),size_t(16)})
        g_exports->loader[offset/4]=g_exports->loader[offset/4+1]=handle+uint32_t(offset);
    g_exports->loader[0x1C/4]=uint32_t(image.base);
    g_exports->loader[0x20/4]=image.size;
    g_exports->loader[0x38/4]=image.size;
    g_exports->loader[0x3C/4]=uint32_t(image.entry_point);
    g_exports->loader[0x40/4]=0x00010000; // BE16 load count 1, module index 0
    constexpr char name[]="default.xex";
    for(size_t i=0;i<sizeof(name);++i) g_exports->name[i]=uint16_t(name[i]);
    for(size_t offset: {size_t(0x24),size_t(0x2C)})
    {
        g_exports->loader[offset/4]=(22u<<16)|24u;
        g_exports->loader[offset/4+1]=g_memory.MapVirtual(g_exports->name.data());
    }
    g_exports->loader[0x58/4]=g_memory.MapVirtual(copy);
    g_exports->moduleHandle=handle;
    if(g_imageHeader) g_userHeap.Free(g_imageHeader);
    g_imageHeader=copy; g_sections=std::move(sections);
    return true;
}

const uint8_t* xex_module::GetOptHeader(uint32_t headerId, uint32_t* size)
{
    if(size) *size=0;
    if(!g_imageHeader) return nullptr;
    const auto* ptr=static_cast<const uint8_t*>(getOptHeaderPtr(g_imageHeader,headerId));
    if(ptr && size)
    {
        const auto units=headerId&255;
        *size=units<=1 ? 4 : units==255 ? reinterpret_cast<const be<uint32_t>*>(ptr)->get() : units*4;
    }
    return ptr;
}

bool xex_module::GetSection(const char* name, uint32_t& address, uint32_t& size)
{
    if (!name) return false;
    for (auto& [sectionName, sectionAddress, sectionSize] : g_sections)
    {
        if (sectionName == name)
        {
            address = sectionAddress;
            size = sectionSize;
            return true;
        }
    }

    return false;
}

// ---------------------------------------------------------------------------
// Import entry points.
// ---------------------------------------------------------------------------

uint32_t RtlImageXexHeaderField(uint32_t imageHeader, uint32_t headerId)
{
    // sub_82DA0F70 passes the header pointer in r3 and the key in r4.
    if(!g_imageHeader || imageHeader!=g_memory.MapVirtual(g_imageHeader)) return 0;
    const auto* ptr=xex_module::GetOptHeader(headerId, nullptr);
    return ptr ? g_memory.MapVirtual(ptr) : 0;
}

uint32_t XexGetModuleHandle(const char* name, be<uint32_t>* handle)
{
    if(!handle) return 0xC000000D;
    *handle=0;
    std::string requested=name ? name : "";
    std::transform(requested.begin(),requested.end(),requested.begin(),
        [](unsigned char c){ return char(c>='A' && c<='Z' ? c+32 : c); });
    if(!xex_module::ModuleHandle() || (!requested.empty() && requested!="default.xex"))
        return 0xC0000135;
    *handle=xex_module::ModuleHandle();
    return 0;
}

uint32_t XexGetModuleSection(uint32_t moduleHandle, const char* sectionName,
    be<uint32_t>* address, be<uint32_t>* size)
{
    if(moduleHandle && moduleHandle!=xex_module::ModuleHandle()) return 0xC0000008;
    uint32_t sectionAddress = 0;
    uint32_t sectionSize = 0;

    if (!xex_module::GetSection(sectionName, sectionAddress, sectionSize))
    {
        LOGFN_WARNING("XexGetModuleSection: unknown section \"{}\"", sectionName ? sectionName : "(null)");
        return 0xC000000F; // STATUS_NO_SUCH_FILE
    }

    if (address)
        *address = sectionAddress;
    if (size)
        *size = sectionSize;
    return 0;
}

uint32_t XexGetProcedureAddress(uint32_t moduleHandle, uint32_t ordinal, be<uint32_t>* address)
{
    // Dynamic exports are not supported yet; log loudly so missing cases are
    // easy to identify during bring-up.
    LOGFN_WARNING("XexGetProcedureAddress: module 0x{:X} ordinal {} is unimplemented.", moduleHandle, ordinal);

    if (address)
        *address = 0;

    return 0xC000007A; // STATUS_PROCEDURE_NOT_FOUND
}

uint32_t XexCheckExecutablePrivilege(uint32_t privilege)
{
    // Report privileged features as available (e.g. devkit-only options).
    return 1;
}

GUEST_FUNCTION_HOOK(__imp__RtlImageXexHeaderField, RtlImageXexHeaderField);
GUEST_FUNCTION_HOOK(__imp__XexGetModuleHandle, XexGetModuleHandle);
GUEST_FUNCTION_HOOK(__imp__XexGetModuleSection, XexGetModuleSection);
GUEST_FUNCTION_HOOK(__imp__XexGetProcedureAddress, XexGetProcedureAddress);
GUEST_FUNCTION_HOOK(__imp__XexCheckExecutablePrivilege, XexCheckExecutablePrivilege);
