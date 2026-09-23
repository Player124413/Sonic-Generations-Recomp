#include <gpu/native_commands.h>
#include <algorithm>
#include <bit>
#include <cstring>
#include <new>
#include <utility>

bool GuestGpu::MemoryView::Copy(uint32_t address, std::span<uint8_t> destination) const noexcept
{
    // Guest page zero is protected by Memory::Memory. Reject it and wraparound
    // even when a host test view is larger than guest space.
    constexpr uint64_t guestEnd = uint64_t{1} << 32;
    if (address < 4096 || destination.size() > guestEnd - address ||
        address > bytes.size() || destination.size() > bytes.size() - address)
        return false;
    std::memcpy(destination.data(), bytes.data() + address, destination.size());
    return true;
}

bool GuestGpu::NativeState::Read(MemoryView memory, uint32_t device, NativeState& out) noexcept
{
    if ((device & 3) != 0) return false;
    std::array<uint8_t, ByteSize> copy;
    if (!memory.Copy(device, copy)) return false;
    for (size_t i = 0; i < out.words.size(); ++i)
    {
        const auto* p = copy.data() + i * 4;
        out.words[i] = (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) |
                       (uint32_t(p[2]) << 8) | uint32_t(p[3]);
    }
    return true;
}

std::array<uint32_t, 4> GuestGpu::NativeState::ColorTargets() const noexcept
{
    std::array<uint32_t, 4> result;
    std::copy_n(words.begin() + 12792 / 4, result.size(), result.begin());
    return result;
}
std::array<uint32_t, GuestGpu::NativeState::TextureCount> GuestGpu::NativeState::Textures() const noexcept
{
    std::array<uint32_t, TextureCount> result;
    std::copy_n(words.begin() + 12896 / 4, result.size(), result.begin());
    return result;
}
std::array<float, 6> GuestGpu::NativeState::Viewport() const noexcept
{
    std::array<float, 6> result;
    for (size_t i = 0; i < result.size(); ++i) result[i] = std::bit_cast<float>(words[13000 / 4 + i]);
    return result;
}
std::array<int32_t, 4> GuestGpu::NativeState::Scissor() const noexcept
{
    std::array<int32_t, 4> result;
    for (size_t i = 0; i < result.size(); ++i) result[i] = std::bit_cast<int32_t>(words[13028 / 4 + i]);
    return result;
}
bool GuestGpu::NativeState::FloatConstant(size_t bank, size_t index, std::array<float, 4>& out) const noexcept
{
    if (bank >= 2 || index >= 256) return false;
    const size_t offset = (bank == 0 ? 1920 : 6016) / 4 + index * 4;
    for (size_t i = 0; i < out.size(); ++i) out[i] = std::bit_cast<float>(words[offset + i]);
    return true;
}
bool GuestGpu::NativeState::TextureFetch(size_t slot, std::array<uint32_t, 6>& out) const noexcept
{
    if (slot >= TextureCount) return false;
    std::copy_n(words.begin() + 1152 / 4 + slot * 6, out.size(), out.begin());
    return true;
}

GuestGpu::ResourceReadResult GuestGpu::IndexSnapshot::Read(
    MemoryView memory, uint32_t resource, uint32_t start, uint32_t count,
    size_t budget, IndexSnapshot& out) noexcept
{
    std::array<uint8_t, 28> header;
    if ((resource & 3) != 0 || !memory.Copy(resource, header)) return ResourceReadResult::InvalidMemory;
    const auto be32 = [](const uint8_t* p) {
        return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) | (uint32_t(p[2]) << 8) | p[3];
    };
    IndexSnapshot result;
    result.resource = resource;
    result.flags = be32(header.data());
    result.stride = (result.flags & 0x80000000u) ? 4 : 2;
    result.start = start;
    result.count = count;
    const uint64_t size = uint64_t(count) * result.stride;
    if (size > MaxBytes || size > budget) return ResourceReadResult::TooLarge;
    const uint64_t address = uint64_t(be32(header.data() + 24)) + uint64_t(start) * result.stride;
    if (address > UINT32_MAX || size > (uint64_t{1} << 32) - address)
        return ResourceReadResult::InvalidMemory;
    try { result.bytes.resize(static_cast<size_t>(size)); }
    catch (const std::bad_alloc&) { return ResourceReadResult::AllocationFailure; }
    if (size && !memory.Copy(static_cast<uint32_t>(address), result.bytes))
        return ResourceReadResult::InvalidMemory;
    out = std::move(result);
    return ResourceReadResult::Success;
}

GuestGpu::CommandStream::CommandStream(size_t limit) noexcept : capacity(std::min(limit, MaxDraws)) {}
void GuestGpu::CommandStream::Enable(bool enable, bool captureResources)
{
    std::lock_guard lock(mutex);
    enabled = enable;
    resourceCapture = enable && captureResources;
    pending.draws.clear();
    pending.clears.clear();
    pending.errors = {};
    pending.payloadBytes = 0;
}
GuestGpu::CaptureResult GuestGpu::CommandStream::Capture(
    MemoryView memory, uint32_t device, DrawKind kind, std::array<uint32_t, 4> arguments) noexcept
{
    std::lock_guard lock(mutex);
    if (!enabled) return CaptureResult::Disabled;
    if (pending.draws.size() + pending.clears.size() >= capacity)
    {
        ++pending.errors.overflow;
        return CaptureResult::Overflow;
    }
    NativeDraw draw;
    if (!NativeState::Read(memory, device, draw.state))
    {
        ++pending.errors.invalidMemory;
        return CaptureResult::InvalidMemory;
    }
    if (kind == DrawKind::IndexedVertices)
    {
        // Native DrawIndexedVertices uses r6 as first index and r7 as count.
        const auto read = IndexSnapshot::Read(memory, draw.state.IndexBuffer(), arguments[2], arguments[3],
            MaxPayloadBytes - pending.payloadBytes, draw.indices);
        switch (read)
        {
        case ResourceReadResult::InvalidMemory:
            ++pending.errors.invalidMemory;
            return CaptureResult::InvalidMemory;
        case ResourceReadResult::TooLarge:
            ++pending.errors.resourceLimit;
            return CaptureResult::ResourceLimit;
        case ResourceReadResult::AllocationFailure:
            ++pending.errors.allocationFailure;
            return CaptureResult::AllocationFailure;
        case ResourceReadResult::Success: break;
        }
    }
    if (resourceCapture)
    {
        draw.vertexShader = ReadShaderIdentity(memory, draw.state.VertexShader(), 0);
        draw.pixelShader = ReadShaderIdentity(memory, draw.state.PixelShader(), 4);
        draw.resources = ReadDrawResources(memory, draw.state,
            MaxPayloadBytes - pending.payloadBytes - draw.indices.bytes.size());
    }
    draw.device = device;
    draw.kind = kind;
    draw.arguments = arguments;
    draw.sequence = sequence;
    try { pending.draws.push_back(std::move(draw)); }
    catch (const std::bad_alloc&)
    {
        ++pending.errors.allocationFailure;
        return CaptureResult::AllocationFailure;
    }
    pending.payloadBytes += pending.draws.back().indices.bytes.size() + pending.draws.back().resources.payloadBytes;
    ++sequence;
    return CaptureResult::Captured;
}
GuestGpu::NativeBatch GuestGpu::CommandStream::Drain()
{
    std::lock_guard lock(mutex);
    NativeBatch result;
    result.draws.swap(pending.draws);
    result.clears.swap(pending.clears);
    result.errors = std::exchange(pending.errors, {});
    result.payloadBytes = std::exchange(pending.payloadBytes, 0);
    return result;
}
GuestGpu::CommandStream& GuestGpu::GetCommandStream()
{
    static CommandStream stream;
    return stream;
}

GuestGpu::CaptureResult GuestGpu::CommandStream::CaptureClear(MemoryView memory,
    uint32_t device, uint32_t flags, uint32_t rectangle, uint32_t color,
    float depth, uint32_t stencil) noexcept
{
    std::lock_guard lock(mutex);
    if(!enabled) return CaptureResult::Disabled;
    if(pending.draws.size()+pending.clears.size()>=capacity)
    { ++pending.errors.overflow; return CaptureResult::Overflow; }
    NativeClear clear;
    clear.sequence=sequence; clear.device=device; clear.flags=flags;
    clear.depth=depth; clear.stencil=stencil;
    std::array<uint8_t,16> rect{}, rgba{};
    // sub_82DBF460 is the lower clear helper: r5 is an explicit rectangle;
    // a null color uses the game's own constant at 0x821BB570, not host defaults.
    if(!NativeState::Read(memory,device,clear.state) || !rectangle ||
       !memory.Copy(rectangle,rect) ||
       ((flags&15) && !memory.Copy(color ? color : 0x821BB570u,rgba)))
    { ++pending.errors.invalidMemory; return CaptureResult::InvalidMemory; }
    for(size_t i=0;i<4;++i)
    {
        auto word=[](const auto& bytes,size_t at) {
            return (uint32_t(bytes[at])<<24)|(uint32_t(bytes[at+1])<<16)|
                (uint32_t(bytes[at+2])<<8)|bytes[at+3];
        };
        clear.rectangle[i]=std::bit_cast<int32_t>(word(rect,i*4));
        clear.color[i]=std::bit_cast<float>(word(rgba,i*4));
    }
    try { pending.clears.push_back(std::move(clear)); }
    catch(const std::bad_alloc&) { ++pending.errors.allocationFailure; return CaptureResult::AllocationFailure; }
    ++sequence;
    return CaptureResult::Captured;
}
