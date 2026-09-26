#include "roundeven.h"
#include <bit>
#include <cstdint>
#include <limits>

static_assert(sizeof(float)==sizeof(uint32_t) && std::numeric_limits<float>::is_iec559);

float sonic::rex_host::RoundEvenFloat(float value) noexcept {
    const uint32_t bits=std::bit_cast<uint32_t>(value);
    const uint32_t sign=bits & 0x80000000u;
    const uint32_t magnitude=bits & 0x7FFFFFFFu;
    // Above 2^23 every finite binary32 value is integral. Preserve infinity and
    // NaN payloads too. No nearbyintf/rintf: those depend on the host fenv.
    if(magnitude>=0x4B000000u) return value;
    if(magnitude<=0x3F000000u) return std::bit_cast<float>(sign); // includes +/-0.5
    if(magnitude<0x3F800000u) return std::bit_cast<float>(sign | 0x3F800000u);
    const uint32_t fractionalBits=23-((magnitude>>23)-127);
    const uint32_t step=1u<<fractionalBits;
    const uint32_t fraction=magnitude & (step-1);
    uint32_t rounded=magnitude & ~(step-1);
    if(fraction>step/2 || (fraction==step/2 && (rounded & step))) rounded+=step;
    return std::bit_cast<float>(sign | rounded);
}
#ifdef _WIN32
extern "C" float roundevenf(float value) noexcept {
    return sonic::rex_host::RoundEvenFloat(value);
}
#endif
