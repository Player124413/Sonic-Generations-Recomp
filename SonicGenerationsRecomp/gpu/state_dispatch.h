#pragma once

namespace GuestGpu
{
    // Replaces only three verified leaf state setters via the existing PPC
    // function mapping. It does NOT overwrite the native device's unknown tables.
    // Also anchors the strong replacements in the runtime static library.
    void EnableStateReplacement(bool enabled) noexcept;
}
