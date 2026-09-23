#include <gpu/shader_cache.h>
#include <smolv.h>
#include <zstd.h>
#include <algorithm>
#include <array>
#include <cstring>
#include <map>
#include <new>
#include <utility>

namespace
{
    constexpr size_t MaxCache = 256 * 1024 * 1024, MaxModule = 16 * 1024 * 1024, MaxEntries = 65536;
    bool Fail(std::string& error, const char* message) { error = message; return false; }
}
bool GuestGpu::InspectShader(std::span<const uint32_t> words, ShaderModule& out, std::string& error)
{
    if (words.size() < 5 || words.size() > MaxModule / 4 || words[0] != 0x07230203 ||
        words[1] < 0x10000 || words[1] > 0x10600 || (words[1] & 255) ||
        !words[3] || words[3] > (1u << 24) || words[4]) return Fail(error, "Invalid SPIR-V header");
    struct Decorations { uint32_t set=UINT32_MAX, binding=UINT32_MAX, location=UINT32_MAX, storage=UINT32_MAX; };
    std::map<uint32_t, Decorations> decorations;
    ShaderModule module;
    bool entry = false, memoryModel = false;
    for (size_t i = 5; i < words.size();)
    {
        const uint32_t length = words[i] >> 16, op = words[i] & 65535;
        if (!length || length > words.size() - i) return Fail(error, "Truncated or zero-length SPIR-V instruction");
        const auto* w = words.data() + i;
        if (op == 15) // OpEntryPoint
        {
            if (entry || length < 5 || (w[1] != 0 && w[1] != 4) || !w[2] || w[2] >= words[3])
                return Fail(error, "Expected one vertex/fragment entry point");
            const char* name = reinterpret_cast<const char*>(w + 3);
            const auto* end = static_cast<const char*>(std::memchr(name, 0, (length - 3) * 4));
            if (!end) return Fail(error, "Unterminated entry point");
            module.entryPoint.assign(name, end);
            module.stage = w[1]; entry = true;
        }
        else if (op == 14) // OpMemoryModel
        {
            if (length != 3 || memoryModel) return Fail(error, "Invalid memory model declaration");
            module.bufferDeviceAddress = w[1] == 5348;
            memoryModel = true;
        }
        else if (op == 17) // OpCapability
        {
            if (length != 2) return Fail(error, "Invalid capability declaration");
            module.capabilities.push_back(w[1]);
        }
        else if (op == 71 && length >= 3) // OpDecorate (direct decorations only)
        {
            if (!w[1] || w[1] >= words[3]) return Fail(error, "Invalid decorated ID");
            if (w[2] == 33 || w[2] == 34 || w[2] == 30)
            {
                if (length != 4) return Fail(error, "Invalid binding/location decoration");
                auto& d = decorations[w[1]];
                uint32_t& field = w[2] == 33 ? d.binding : w[2] == 34 ? d.set : d.location;
                if (field != UINT32_MAX) return Fail(error, "Duplicate binding/location decoration");
                field = w[3];
            }
        }
        else if (op == 59) // OpVariable
        {
            if ((length != 4 && length != 5) || !w[2] || w[2] >= words[3]) return Fail(error, "Invalid variable declaration");
            decorations[w[2]].storage = w[3];
        }
        i += length;
    }
    if (!entry || !memoryModel) return Fail(error, "Missing entry point or memory model");
    for (const auto& [id, d] : decorations)
    {
        if (d.binding != UINT32_MAX || d.set != UINT32_MAX)
        {
            if (d.binding == UINT32_MAX || d.set == UINT32_MAX || d.storage == UINT32_MAX)
                return Fail(error, "Incomplete descriptor variable decoration");
            module.bindings.push_back({id,d.set,d.binding,d.storage});
        }
        if (d.storage == 1 && d.location != UINT32_MAX) module.inputLocations.push_back(d.location);
    }
    std::sort(module.inputLocations.begin(), module.inputLocations.end());
    module.words.assign(words.begin(), words.end());
    out = std::move(module); error.clear();
    return true;
}
bool GuestGpu::ShaderCache::Initialize(ShaderCacheData data, std::string& error)
{
    index.clear(); smolv.clear();
    if (data.entries.empty() || data.entries.size() > MaxEntries || data.entries.size() != data.declaredCount ||
        data.compressed.empty() || data.compressed.size() > MaxCache || data.compressed.size() != data.declaredCompressedSize ||
        !data.decodedSize || data.decodedSize > MaxCache) return Fail(error, "Invalid shader cache sizes/count");
    const auto frameSize = ZSTD_getFrameContentSize(data.compressed.data(), data.compressed.size());
    const auto compressedSize = ZSTD_findFrameCompressedSize(data.compressed.data(), data.compressed.size());
    if (frameSize != data.decodedSize || ZSTD_isError(compressedSize) || compressedSize != data.compressed.size())
        return Fail(error, "Shader cache Zstd frame size mismatch");
    try
    {
        std::vector<ShaderIndex> entries;
        entries.reserve(data.entries.size());
        uint64_t end = 0, previousHash = 0;
        for (const auto& entry : data.entries)
        {
            if ((!entries.empty() && entry.hash <= previousHash) || entry.spirvOffset != end ||
                !entry.spirvSize || uint64_t(entry.spirvOffset) + entry.spirvSize > data.decodedSize)
                return Fail(error, "Unsorted/duplicate shader hash or invalid SMOL-V range");
            entries.push_back({entry.hash, entry.spirvOffset, entry.spirvSize, entry.specConstantsMask});
            previousHash = entry.hash; end += entry.spirvSize;
        }
        if (end != data.decodedSize) return Fail(error, "Unindexed shader cache bytes");
        std::vector<uint8_t> decoded(data.decodedSize);
        const size_t size = ZSTD_decompress(decoded.data(), decoded.size(), data.compressed.data(), data.compressed.size());
        if (ZSTD_isError(size) || size != decoded.size()) return Fail(error, "Shader cache Zstd decompression failed");
        for (const auto& entry : entries)
        {
            // Packed modules need not begin on a dword boundary. The pinned
            // SMOL-V header reader casts to uint32_t*, so provide aligned words.
            if (entry.size < 24) return Fail(error, "Truncated SMOL-V header");
            std::array<uint32_t, 6> header{};
            std::memcpy(header.data(), decoded.data() + entry.offset, sizeof(header));
            const size_t size = smolv::GetDecodedBufferSize(header.data(), sizeof(header));
            if (size < 20 || size > MaxModule || size % 4) return Fail(error, "Invalid SMOL-V module size/header");
        }
        index = std::move(entries); smolv = std::move(decoded); error.clear();
        return true;
    }
    catch (const std::bad_alloc&) { return Fail(error, "Shader cache allocation failed"); }
}
bool GuestGpu::ShaderCache::Decode(uint64_t hash, ShaderModule& module, std::string& error) const
{
    const auto found = std::lower_bound(index.begin(), index.end(), hash,
        [](const ShaderIndex& a, uint64_t b) { return a.hash < b; });
    if (found == index.end() || found->hash != hash) return Fail(error, "Shader hash not found");
    try
    {
        std::vector<uint32_t> aligned((size_t(found->size) + 3) / 4);
        std::memcpy(aligned.data(), smolv.data() + found->offset, found->size);
        const auto* bytes = aligned.data();
        const size_t size = smolv::GetDecodedBufferSize(bytes, found->size);
        std::vector<uint32_t> words(size / 4);
        if (!smolv::Decode(bytes, found->size, words.data(), size)) return Fail(error, "SMOL-V decoding failed");
        ShaderModule result;
        if (!InspectShader(words, result, error)) return false;
        result.hash = hash; result.specializationMask = found->specConstantsMask;
        module = std::move(result); return true;
    }
    catch (const std::bad_alloc&) { return Fail(error, "Shader module allocation failed"); }
}

bool GuestGpu::ShaderCache::DecodeStage(uint64_t hash, uint32_t stage, ShaderModule& module, std::string& error) const
{
    if (stage != 0 && stage != 4) return Fail(error, "Unsupported requested shader stage");
    ShaderModule result;
    if (!Decode(hash, result, error)) return false;
    if (result.stage != stage) return Fail(error, "Shader cache stage does not match native binding");
    module = std::move(result);
    return true;
}
