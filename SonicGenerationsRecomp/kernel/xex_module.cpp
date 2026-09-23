#include <stdafx.h>
#include "xex_module.h"
#include <kernel/function.h>
#include <kernel/memory.h>
#include <os/logger.h>
#include <xex.h>
#include <image.h>
#include <kernel/heap.h>

static uint8_t* g_imageHeader = nullptr;
static std::vector<std::tuple<std::string, uint32_t, uint32_t>> g_sections;

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
    if (handle)
        *handle = 0x1000; // pseudo handle for the title module
    return 0;
}

uint32_t XexGetModuleSection(uint32_t moduleHandle, const char* sectionName,
    be<uint32_t>* address, be<uint32_t>* size)
{
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
