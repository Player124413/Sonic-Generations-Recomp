#include <stdafx.h>
#include "xex_module.h"
#include <kernel/function.h>
#include <kernel/memory.h>
#include <os/logger.h>
#include <xex.h>

static std::vector<uint8_t> g_imageHeader;
static std::vector<std::tuple<std::string, uint32_t, uint32_t>> g_sections;

void xex_module::RegisterImage(const uint8_t* xexBytes, size_t size)
{
    // Keep a copy of the raw XEX for RtlImageXexHeaderField queries.
    auto* header = reinterpret_cast<const Xex2Header*>(xexBytes);
    g_imageHeader.assign(xexBytes, xexBytes + header->headerSize);

    // Parse the section table from the PE image. XEX section names are the PE
    // section names; guest virtual addresses are imageBase + RVA.
    g_sections.clear();
    {
        uint32_t imageBase = 0;
        const auto* baseHeader = reinterpret_cast<const be<uint32_t>*>(
            getOptHeaderPtr(g_imageHeader.data(), XEX_HEADER_IMAGE_BASE_ADDRESS));
        if (baseHeader != nullptr)
            imageBase = baseHeader->get();

        if (size >= 0x40 && xexBytes[0] == 'M' && xexBytes[1] == 'Z')
        {
            uint32_t peOffset = reinterpret_cast<const be<uint32_t>*>(xexBytes + 0x3C)->get();
            if (peOffset + 0x18 < size &&
                xexBytes[peOffset] == 'P' && xexBytes[peOffset + 1] == 'E')
            {
                const be<uint16_t>* coff = reinterpret_cast<const be<uint16_t>*>(xexBytes + peOffset + 6);
                uint32_t numSections = coff->get();
                uint32_t sizeOfOptional = coff[1].get();
                uint32_t sectionTable = peOffset + 0x18 + sizeOfOptional;

                for (uint32_t i = 0; i < numSections && sectionTable + (i + 1) * 40 <= size; i++)
                {
                    const uint8_t* s = xexBytes + sectionTable + i * 40;
                    std::string name(reinterpret_cast<const char*>(s), 8);
                    name.resize(strlen(name.c_str()));

                    uint32_t rva = reinterpret_cast<const be<uint32_t>*>(s + 12)->get();
                    uint32_t vsize = reinterpret_cast<const be<uint32_t>*>(s + 8)->get();

                    g_sections.emplace_back(name, imageBase + rva, vsize);
                    LOGFN_UTILITY("section \"{}\" addr 0x{:08X} size 0x{:X}", name.c_str(), imageBase + rva, vsize);
                }
            }
        }
    }
}

const uint8_t* xex_module::GetOptHeader(uint32_t headerId, uint32_t* size)
{
    if (g_imageHeader.empty())
        return nullptr;

    auto* ptr = getOptHeaderPtr(g_imageHeader.data(), headerId);
    if (!ptr)
        return nullptr;

    // Optional headers store their size in the low 16 bits of the key word
    // for sized entries; fall back to 4 bytes of payload.
    if (size)
        *size = 4;

    return reinterpret_cast<const uint8_t*>(ptr);
}

bool xex_module::GetSection(const char* name, uint32_t& address, uint32_t& size)
{
    for (auto& [sectionName, sectionAddress, sectionSize] : g_sections)
    {
        if (sectionName == name)
        {
            address = sectionAddress;
            size = sectionSize;
            return true;
        }
    }

    // Synthetic fallbacks based on the recompilation layout.
    if (strcmp(name, ".text") == 0)
    {
        address = PPC_CODE_BASE;
        size = PPC_CODE_SIZE;
        return true;
    }

    return false;
}

// ---------------------------------------------------------------------------
// Import entry points.
// ---------------------------------------------------------------------------

uint32_t RtlImageXexHeaderField(uint32_t headerId)
{
    return g_memory.MapVirtual((void*)xex_module::GetOptHeader(headerId, nullptr));
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
