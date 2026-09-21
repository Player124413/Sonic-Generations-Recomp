#pragma once

#include <cstdint>
#include <span>

// Registry of the loaded XEX image (header + sections), used to service
// RtlImageXexHeaderField/XexGetModuleSection/XexGetProcedureAddress.
namespace xex_module
{
    void RegisterImage(const uint8_t* xexBytes, size_t size);

    // Returns the requested optional header or nullptr.
    const uint8_t* GetOptHeader(uint32_t headerId, uint32_t* size);

    bool GetSection(const char* name, uint32_t& address, uint32_t& size);
}
