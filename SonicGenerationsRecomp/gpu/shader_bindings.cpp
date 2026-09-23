#include <gpu/shader_bindings.h>
#include <gpu/native_commands.h>
#include <array>
#include <new>
#define XXH_INLINE_ALL
#include <xxhash.h>

namespace
{
    uint32_t Read(const uint8_t* p)
    { return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) | (uint32_t(p[2]) << 8) | p[3]; }
}
GuestGpu::NativeShaderIdentity GuestGpu::ReadShaderIdentity(MemoryView memory, uint32_t resource, uint32_t stage) noexcept
{
    NativeShaderIdentity result{resource, stage};
    if (stage != 0 && stage != 4) { result.status = ShaderReadStatus::StageMismatch; return result; }
    if (!resource) return result;
    const auto fail = [&](ShaderReadStatus status) { result.status = status; return result; };
    // sub_82DB27C8 / sub_82DB26D0: VS container at +872, physical pointer +32.
    // sub_82DB25E0 / sub_82DB1CE0: PS container at +40, physical pointer +24.
    const uint32_t virtualOffset = stage == 0 ? 872 : 40;
    std::array<uint8_t, 36> object{}, header{};
    if ((resource & 3) || uint64_t(resource) + virtualOffset + header.size() > (uint64_t{1} << 32) ||
        !memory.Copy(resource, object) || !memory.Copy(resource + virtualOffset, header))
        return fail(ShaderReadStatus::InvalidMemory);
    if ((Read(object.data()) & 15) != (stage == 0 ? 6u : 7u)) return fail(ShaderReadStatus::StageMismatch);
    const uint32_t flags = Read(header.data());
    const uint32_t virtualSize = Read(header.data() + 4), physicalSize = Read(header.data() + 8);
    if ((flags & 0xFFFFFF00) != 0x102A1100 || virtualSize < header.size() || !physicalSize ||
        Read(header.data() + 28) || Read(header.data() + 32)) return fail(ShaderReadStatus::InvalidContainer);
    if (((flags & 1) ? 0u : 4u) != stage) return fail(ShaderReadStatus::StageMismatch);
    const uint64_t size = uint64_t(virtualSize) + physicalSize;
    if (size > MaxShaderContainerBytes) return fail(ShaderReadStatus::TooLarge);
    const uint32_t physical = Read(object.data() + (stage == 0 ? 32 : 24));
    try
    {
        std::vector<uint8_t> container(static_cast<size_t>(size));
        if (!memory.Copy(resource + virtualOffset, std::span(container).first(virtualSize)) ||
            !memory.Copy(physical, std::span(container).subspan(virtualSize))) return fail(ShaderReadStatus::InvalidMemory);
        result.hash = XXH3_64bits(container.data(), container.size());
        result.status = ShaderReadStatus::Success;
        return result;
    }
    catch (const std::bad_alloc&) { return fail(ShaderReadStatus::AllocationFailure); }
}
