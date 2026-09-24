#pragma once

#include <cstdint>
#include <span>
#include <string>

struct Image;

// Registry of the loaded XEX image (header + sections), used to service
// RtlImageXexHeaderField/XexGetModuleSection/XexGetProcedureAddress.
namespace xex_module
{
    Image DecodeImage(std::span<const uint8_t> bytes);
    // Input image contains original BE import records (not tool-patched thunks).
    // Builds a complete patch plan before changing any guest IAT slots.
    bool BindImports(std::span<const uint8_t> bytes, const Image& image, std::string& error);
    // Complete dry-run of the same binding plan; does not write the IAT or execute code.
    // A successful binding is not certification of an import's HLE behavior.
    bool AuditImports(std::span<const uint8_t> bytes, const Image& image,
                      std::string& report, std::string& error);
    uint32_t ModuleHandle();
    uint32_t VariableAddress(uint32_t ordinal);
    bool ValidateHeader(std::span<const uint8_t> bytes);
    // Call after heap initialization, before starting guest threads.
    bool RegisterImage(std::span<const uint8_t> bytes, const Image& image);

    // Returns the requested optional header or nullptr.
    const uint8_t* GetOptHeader(uint32_t headerId, uint32_t* size);

    bool GetSection(const char* name, uint32_t& address, uint32_t& size);
}
