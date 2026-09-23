#pragma once

namespace GuestGpu
{
    // Replaces verified render and sampler leaf setters via the existing PPC
    // function mapping. Native table entries keep their original guest addresses.
    // Also anchors the strong replacements in the runtime static library.
    void EnableStateReplacement(bool enabled) noexcept;
}
