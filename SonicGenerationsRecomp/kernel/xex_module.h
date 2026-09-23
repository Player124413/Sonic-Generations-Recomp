#pragma once

#include <cstdint>
#include <span>

struct Image;

// Registry of the loaded XEX image (header + sections), used to service
// RtlImageXexHeaderField/XexGetModuleSection/XexGetProcedureAddress.
namespace xex_module
{
    bool ValidateHeader(std::span<const uint8_t> bytes);
    // Call after heap initialization, before starting guest threads.
    bool RegisterImage(std::span<const uint8_t> bytes, const Image& image);

    // Returns the requested optional header or nullptr.
    const uint8_t* GetOptHeader(uint32_t headerId, uint32_t* size);

    bool GetSection(const char* name, uint32_t& address, uint32_t& size);
}
