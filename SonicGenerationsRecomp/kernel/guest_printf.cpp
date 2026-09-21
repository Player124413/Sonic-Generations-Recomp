#include <stdafx.h>
#include "guest_printf.h"
#include "memory.h"
#include <cpu/ppc_context.h>
#include <cmath>
#include <cstdarg>

// ---------------------------------------------------------------------------
// Varargs access in the PPC ABI: integer args in r5..r10 for the implicit
// call chain (r3 = dest, r4 = format, r5.. = varargs); anything beyond r10
// is passed on the guest stack at r1 + 0x54 + (index - 8) * 8.
//
// va_list objects produced by the guest's CRT are pointers to a parameter
// save area in guest memory; we read arguments as big-endian words.
// ---------------------------------------------------------------------------

namespace
{
    struct GuestVaList
    {
        uint8_t* base;
        uint32_t cursor; // guest address of the next argument slot

        uint32_t NextU32()
        {
            uint32_t value = PPC_LOAD_U32(cursor);
            cursor += 8; // PPC varargs slots are 8 bytes
            return value;
        }

        uint64_t NextU64()
        {
            uint64_t value = PPC_LOAD_U64(cursor);
            cursor += 8;
            return value;
        }

        double NextDouble()
        {
            // Doubles are passed in FP registers; the save area stores the
            // 64-bit big-endian representation.
            uint64_t bits = PPC_LOAD_U64(cursor);
            cursor += 8;
            double value;
            memcpy(&value, &bits, sizeof(value));
            // bits are already host-endian after PPC_LOAD_U64 byte swap.
            return value;
        }
    };

    struct FormatArgFetcher
    {
        PPCContext& ctx;
        uint8_t* base;
        size_t regIndex;
        GuestVaList va;
        bool useVa;

        uint32_t NextU32()
        {
            if (useVa)
                return va.NextU32();

            if (regIndex <= 7)
            {
                switch (regIndex++)
                {
                case 0: return ctx.r5.u32;
                case 1: return ctx.r6.u32;
                case 2: return ctx.r7.u32;
                case 3: return ctx.r8.u32;
                case 4: return ctx.r9.u32;
                case 5: return ctx.r10.u32;
                default: break;
                }
            }

            return va.NextU32();
        }

        uint64_t NextU64()
        {
            if (useVa)
                return va.NextU64();

            // 64-bit values are 8-byte aligned in registers/stack.
            if (regIndex <= 6 && (regIndex % 2) == 1)
            {
                uint64_t hi = NextU32();
                uint64_t lo = NextU32();
                return (hi << 32) | lo;
            }

            return ((uint64_t)NextU32() << 32) | NextU32();
        }

        double NextDouble()
        {
            if (useVa)
                return va.NextDouble();

            // FP varargs live in f13+ for printf-style calls (f1..f12 may be
            // used for named parameters, printf has none).
            return 0.0;
        }

        const char* NextString8()
        {
            uint32_t guest = NextU32();
            return guest ? (const char*)base + guest : nullptr;
        }

        const char16_t* NextString16()
        {
            uint32_t guest = NextU32();
            return guest ? (const char16_t*)(base + guest) : nullptr;
        }
    };

    struct Specifier
    {
        bool leftAlign = false;
        bool sign = false;
        bool space = false;
        bool zeroPad = false;
        bool alternate = false;
        int width = 0;
        int precision = -1;
        int lengthMod = 0; // 0 = none, 1 = l, 2 = ll, 3 = h, 4 = hh, 5 = z
        char conversion = 0;
    };

    template<typename T>
    struct OutStream
    {
        T* dest;
        size_t capacity; // in code units, 0 = unlimited
        size_t written = 0;
        size_t needed = 0;

        void Put(T c)
        {
            if (dest && (capacity == 0 || written + 1 < capacity))
                dest[written] = c;
            written++;
            needed++;
        }

        void Finish()
        {
            if (dest && (capacity == 0 || written < capacity))
                dest[written] = T(0);
            else if (dest && capacity)
                dest[capacity - 1] = T(0);
        }
    };

    template<typename T, typename TChar>
    void Pad(OutStream<T>& out, size_t count, TChar c)
    {
        for (size_t i = 0; i < count; i++)
            out.Put(T(c));
    }

    template<typename T>
    void EmitString(OutStream<T>& out, const T* s, size_t len, const Specifier& spec)
    {
        if (spec.precision >= 0 && size_t(spec.precision) < len)
            len = spec.precision;

        if (!spec.leftAlign && size_t(spec.width) > len)
            Pad(out, size_t(spec.width) - len, ' ');

        for (size_t i = 0; i < len; i++)
            out.Put(s[i]);

        if (spec.leftAlign && size_t(spec.width) > len)
            Pad(out, size_t(spec.width) - len, ' ');
    }

    template<typename T>
    void EmitUnsigned(OutStream<T>& out, uint64_t value, const Specifier& spec)
    {
        char buffer[72];
        int base = 10;
        const char* digits = "0123456789abcdef";

        switch (spec.conversion)
        {
        case 'x': base = 16; break;
        case 'X': base = 16; digits = "0123456789ABCDEF"; break;
        case 'o': base = 8; break;
        case 'p': base = 16; break;
        default: break;
        }

        int len = 0;
        if (value == 0 && spec.precision == 0)
            buffer[len] = 0;
        else
        {
            do
            {
                buffer[len++] = digits[value % base];
                value /= base;
            } while (value);
        }

        char outBuf[80];
        int pos = 0;

        if (spec.alternate && (spec.conversion == 'x' || spec.conversion == 'X') && value == 0)
        {
            // note: value consumed above; keep prefix behaviour simple
        }

        if (spec.precision > len)
        {
            for (int i = len; i < spec.precision; i++)
                outBuf[pos++] = '0';
        }

        while (len)
            outBuf[pos++] = buffer[--len];

        size_t total = size_t(pos);
        size_t width = spec.width > 0 ? size_t(spec.width) : 0;

        if (!spec.leftAlign && !spec.zeroPad && width > total)
            Pad(out, width - total, ' ');

        if (!spec.leftAlign && spec.zeroPad && width > total)
            Pad(out, width - total, '0');

        for (int i = 0; i < pos; i++)
            out.Put(T(outBuf[i]));

        if (spec.leftAlign && width > total)
            Pad(out, width - total, ' ');
    }

    template<typename T>
    void EmitSigned(OutStream<T>& out, int64_t value, const Specifier& spec)
    {
        char sign = 0;
        uint64_t magnitude;

        if (value < 0)
        {
            sign = '-';
            magnitude = uint64_t(-(value + 1)) + 1;
        }
        else
        {
            magnitude = uint64_t(value);
            if (spec.sign)
                sign = '+';
            else if (spec.space)
                sign = ' ';
        }

        Specifier unsignedSpec = spec;
        char buffer[80];
        // Render magnitude manually to prepend sign.
        OutStream<char> mid{ buffer, sizeof(buffer), 0, 0 };
        EmitUnsigned(mid, magnitude, unsignedSpec);
        mid.Finish();

        size_t bodyLen = mid.needed;
        size_t width = spec.width > 0 ? size_t(spec.width) : 0;
        size_t total = bodyLen + (sign ? 1 : 0);

        if (!spec.leftAlign && !spec.zeroPad && width > total)
            Pad(out, width - total, ' ');

        if (sign)
            out.Put(T(sign));

        if (!spec.leftAlign && spec.zeroPad && width > total)
            Pad(out, width - total, '0');

        for (size_t i = 0; i < bodyLen; i++)
            out.Put(T(buffer[i]));

        if (spec.leftAlign && width > total)
            Pad(out, width - total, ' ');
    }

    template<typename T>
    void EmitDouble(OutStream<T>& out, double value, const Specifier& spec)
    {
        char buffer[128];
        char fmt[32];
        int pos = 0;
        fmt[pos++] = '%';
        if (spec.alternate) fmt[pos++] = '#';
        if (spec.sign) fmt[pos++] = '+';
        if (spec.leftAlign) fmt[pos++] = '-';
        if (spec.zeroPad) fmt[pos++] = '0';
        if (spec.width > 0) pos += snprintf(fmt + pos, sizeof(fmt) - pos, "%d", spec.width);
        if (spec.precision >= 0) pos += snprintf(fmt + pos, sizeof(fmt) - pos, ".%d", spec.precision);
        fmt[pos++] = spec.conversion ? spec.conversion : 'g';
        fmt[pos] = 0;

        snprintf(buffer, sizeof(buffer), fmt, value);

        for (const char* p = buffer; *p; p++)
            out.Put(T(*p));
    }

    template<typename T, typename TFormat>
    uint32_t FormatImpl(OutStream<T>& out, uint8_t* base, const TFormat* fmt,
        PPCContext& ctx, size_t argIndex, uint32_t vaList)
    {
        FormatArgFetcher args{ ctx, base, argIndex, GuestVaList{ base, vaList }, vaList != 0 };

        for (const TFormat* p = fmt; *p; p++)
        {
            if (*p != TFormat('%'))
            {
                out.Put(T(*p));
                continue;
            }

            p++;
            if (*p == TFormat('%'))
            {
                out.Put(T('%'));
                continue;
            }

            Specifier spec{};

            // Flags
            bool parsing = true;
            while (parsing)
            {
                switch (*p)
                {
                case '-': spec.leftAlign = true; p++; break;
                case '+': spec.sign = true; p++; break;
                case ' ': spec.space = true; p++; break;
                case '0': spec.zeroPad = true; p++; break;
                case '#': spec.alternate = true; p++; break;
                default: parsing = false; break;
                }
            }

            // Width
            if (*p == TFormat('*'))
            {
                spec.width = int(args.NextU32());
                p++;
            }
            else
            {
                while (*p >= TFormat('0') && *p <= TFormat('9'))
                    spec.width = spec.width * 10 + int(*p++ - TFormat('0'));
            }

            // Precision
            if (*p == TFormat('.'))
            {
                p++;
                spec.precision = 0;
                if (*p == TFormat('*'))
                {
                    spec.precision = int(args.NextU32());
                    p++;
                }
                else
                {
                    while (*p >= TFormat('0') && *p <= TFormat('9'))
                        spec.precision = spec.precision * 10 + int(*p++ - TFormat('0'));
                }
            }

            // Length modifiers
            if (*p == TFormat('l'))
            {
                p++;
                if (*p == TFormat('l'))
                {
                    spec.lengthMod = 2;
                    p++;
                }
                else
                    spec.lengthMod = 1;
            }
            else if (*p == TFormat('h'))
            {
                p++;
                spec.lengthMod = (*p == TFormat('h')) ? (p++, 4) : 3;
            }
            else if (*p == TFormat('z') || *p == TFormat('t'))
            {
                spec.lengthMod = 5;
                p++;
            }

            spec.conversion = char(*p);
            if (!spec.conversion)
                break;

            switch (spec.conversion)
            {
            case 'd':
            case 'i':
            {
                int64_t value = (spec.lengthMod == 2) ? int64_t(args.NextU64())
                    : int64_t(int32_t(args.NextU32()));
                EmitSigned(out, value, spec);
                break;
            }

            case 'u':
            case 'x':
            case 'X':
            case 'o':
            {
                uint64_t value = (spec.lengthMod == 2) ? args.NextU64()
                    : uint64_t(uint32_t(args.NextU32()));
                EmitUnsigned(out, value, spec);
                break;
            }

            case 'p':
            {
                uint32_t value = args.NextU32();
                Specifier pSpec = spec;
                pSpec.alternate = true;
                out.Put(T('0'));
                out.Put(T('x'));
                pSpec.width = std::max(pSpec.width - 2, 0);
                EmitUnsigned(out, value, pSpec);
                break;
            }

            case 'c':
            {
                T c = T(args.NextU32());
                EmitString(out, &c, 1, spec);
                break;
            }

            case 's':
            {
                if constexpr (sizeof(T) == 2)
                {
                    const char16_t* s = args.NextString16();
                    size_t len = 0;
                    if (!s)
                        s = u"(null)";
                    while (s[len])
                        len++;
                    EmitString(out, (const T*)s, len, spec);
                }
                else
                {
                    const char* s = args.NextString8();
                    size_t len = 0;
                    if (!s)
                        s = "(null)";
                    while (s[len])
                        len++;

                    if constexpr (sizeof(T) == 1)
                        EmitString(out, (const T*)s, len, spec);
                    else
                    {
                        // Wide output from narrow input.
                        for (size_t i = 0; i < len; i++)
                            out.Put(T((unsigned char)s[i]));
                    }
                }
                break;
            }

            case 'f':
            case 'F':
            case 'g':
            case 'G':
            case 'e':
            case 'E':
                EmitDouble(out, args.NextDouble(), spec);
                break;

            case 'n':
                // Store the current count back to guest memory; rarely used.
                args.NextU32();
                break;

            default:
                out.Put(T('%'));
                out.Put(T(spec.conversion));
                break;
            }
        }

        out.Finish();
        return uint32_t(out.needed);
    }
}

namespace guest_printf
{
    uint32_t Format(char* dest, size_t destChars, uint8_t* base,
        const char* fmt, PPCContext& ctx, size_t argIndex, uint32_t vaList)
    {
        OutStream<char> out{ dest, destChars, 0, 0 };
        return FormatImpl(out, base, fmt, ctx, argIndex, vaList);
    }

    uint32_t Format(char16_t* dest, size_t destChars, uint8_t* base,
        const char16_t* fmt, PPCContext& ctx, size_t argIndex, uint32_t vaList)
    {
        OutStream<char16_t> out{ dest, destChars, 0, 0 };
        return FormatImpl(out, base, fmt, ctx, argIndex, vaList);
    }
}

// ---------------------------------------------------------------------------
// Import entry points. These are referenced by the generated guest code.
// ---------------------------------------------------------------------------

PPC_FUNC(__imp__sprintf);
PPC_FUNC(__imp__sprintf)
{
    PPC_FUNC_PROLOGUE();
    char* dest = (char*)base + ctx.r3.u32;
    const char* fmt = (const char*)base + ctx.r4.u32;
    ctx.r3.u64 = guest_printf::Format(dest, 0, base, fmt, ctx, 0, 0);
}

PPC_FUNC(__imp___snprintf);
PPC_FUNC(__imp___snprintf)
{
    PPC_FUNC_PROLOGUE();
    char* dest = (char*)base + ctx.r3.u32;
    uint32_t count = ctx.r4.u32;
    const char* fmt = (const char*)base + ctx.r5.u32;
    ctx.r3.u64 = guest_printf::Format(dest, count, base, fmt, ctx, 1, 0);
}

PPC_FUNC(__imp__vsprintf);
PPC_FUNC(__imp__vsprintf)
{
    PPC_FUNC_PROLOGUE();
    char* dest = (char*)base + ctx.r3.u32;
    const char* fmt = (const char*)base + ctx.r4.u32;
    ctx.r3.u64 = guest_printf::Format(dest, 0, base, fmt, ctx, 0, ctx.r5.u32);
}

PPC_FUNC(__imp___vsnprintf);
PPC_FUNC(__imp___vsnprintf)
{
    PPC_FUNC_PROLOGUE();
    char* dest = (char*)base + ctx.r3.u32;
    uint32_t count = ctx.r4.u32;
    const char* fmt = (const char*)base + ctx.r5.u32;
    ctx.r3.u64 = guest_printf::Format(dest, count, base, fmt, ctx, 1, ctx.r6.u32);
}

PPC_FUNC(__imp__swprintf);
PPC_FUNC(__imp__swprintf)
{
    PPC_FUNC_PROLOGUE();
    char16_t* dest = (char16_t*)(base + ctx.r3.u32);
    const char16_t* fmt = (const char16_t*)(base + ctx.r5.u32);
    // Xbox CRT: swprintf(buffer, count, format, ...) with count in r4.
    ctx.r3.u64 = guest_printf::Format(dest, ctx.r4.u32, base, fmt, ctx, 1, 0);
}

PPC_FUNC(__imp___snwprintf);
PPC_FUNC(__imp___snwprintf)
{
    PPC_FUNC_PROLOGUE();
    char16_t* dest = (char16_t*)(base + ctx.r3.u32);
    uint32_t count = ctx.r4.u32;
    const char16_t* fmt = (const char16_t*)(base + ctx.r5.u32);
    ctx.r3.u64 = guest_printf::Format(dest, count, base, fmt, ctx, 1, 0);
}

PPC_FUNC(__imp__vswprintf);
PPC_FUNC(__imp__vswprintf)
{
    PPC_FUNC_PROLOGUE();
    char16_t* dest = (char16_t*)(base + ctx.r3.u32);
    uint32_t count = ctx.r4.u32;
    const char16_t* fmt = (const char16_t*)(base + ctx.r5.u32);
    ctx.r3.u64 = guest_printf::Format(dest, count, base, fmt, ctx, 1, ctx.r6.u32);
}

PPC_FUNC(__imp___vscwprintf);
PPC_FUNC(__imp___vscwprintf)
{
    PPC_FUNC_PROLOGUE();
    const char16_t* fmt = (const char16_t*)(base + ctx.r3.u32);
    ctx.r3.u64 = guest_printf::Format((char16_t*)nullptr, 0, base, fmt, ctx, 0, ctx.r4.u32);
}
