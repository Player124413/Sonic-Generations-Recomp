#pragma once

#include <cstdint>
#include <cstddef>

// ---------------------------------------------------------------------------
// Guest printf family.
//
// The title imports sprintf/swprintf/... from the Xbox C runtime. Format
// strings and string arguments live in guest memory (big-endian), so the
// host libc cannot be used directly. These helpers implement the common
// subset of printf behaviour over guest memory.
// ---------------------------------------------------------------------------

struct PPCContext;

// Formats into a guest buffer. `ctx` provides the varargs (r5..r10 then
// the guest stack). Returns the number of bytes written (excluding the
// terminator for narrow strings, code units for wide strings).
uint32_t GuestSprintf(PPCContext& ctx, uint8_t* base, bool wide);

// Like GuestSprintf but writes into a bounded guest buffer.
uint32_t GuestSnprintf(PPCContext& ctx, uint8_t* base, bool wide, uint32_t count);

// vsprintf/vsnprintf receive a va_list already placed in guest memory at
// `vaList` (guest pointer in r5).
uint32_t GuestVSprintf(PPCContext& ctx, uint8_t* base, bool wide, uint32_t vaList);

// Returns the length (in characters) that swprintf/_vscwprintf would write.
uint32_t GuestVScwprintf(PPCContext& ctx, uint8_t* base, uint32_t vaList);

namespace guest_printf
{
    // Takes a guest format string at `fmt`, varargs starting at `argIndex`
    // in the given context. Writes to guest `dest` (bounded by `destChars`
    // code units, 0 = unbounded). Returns required length in code units.
    uint32_t Format(char16_t* dest, size_t destChars, uint8_t* base,
        const char16_t* fmt, PPCContext& ctx, size_t argIndex, uint32_t vaList);

    uint32_t Format(char* dest, size_t destChars, uint8_t* base,
        const char* fmt, PPCContext& ctx, size_t argIndex, uint32_t vaList);
}
