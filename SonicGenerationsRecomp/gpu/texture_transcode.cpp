#include <gpu/texture_transcode.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <fstream>
#include <limits>
#include <thread>

namespace GuestGpu
{
namespace
{
    // ETC2 intensity modifier tables: (small, large) positive steps.
    constexpr int kModifier[8][2] = {
        {2, 8}, {5, 17}, {9, 29}, {13, 42}, {18, 60}, {24, 80}, {33, 106}, {55, 183},
    };

    // EAC alpha modifier tables.
    constexpr int kAlphaModifier[16][8] = {
        {-3, -6, -9, -15, 2, 5, 8, 14},
        {-3, -7, -10, -13, 2, 6, 9, 12},
        {-2, -5, -8, -13, 1, 4, 7, 12},
        {-2, -4, -6, -13, 1, 3, 5, 12},
        {-3, -6, -8, -12, 2, 5, 7, 11},
        {-3, -7, -9, -12, 2, 6, 8, 11},
        {-4, -7, -8, -11, 3, 6, 7, 10},
        {-3, -5, -8, -11, 2, 4, 7, 10},
        {-2, -6, -8, -10, 1, 5, 7, 9},
        {-2, -5, -8, -10, 1, 4, 7, 9},
        {-2, -4, -8, -10, 1, 3, 7, 9},
        {-2, -5, -7, -10, 1, 4, 6, 9},
        {-3, -4, -7, -10, 2, 3, 6, 9},
        {-1, -2, -3, -10, 0, 1, 2, 9},
        {-4, -6, -8, -9, 3, 5, 7, 8},
        {-3, -6, -7, -9, 2, 5, 6, 8},
    };

    constexpr int Clamp255(int value) noexcept
    {
        return value < 0 ? 0 : (value > 255 ? 255 : value);
    }

    // Modifier applied for a 2-bit pixel index v = (msb << 1) | lsb:
    // 0 -> -large, 1 -> -small, 2 -> +large, 3 -> +small (ETC2 spec).
    constexpr int ModifierValue(int table, int v) noexcept
    {
        const int small = kModifier[table][0];
        const int large = kModifier[table][1];
        switch (v)
        {
        case 0: return -large;
        case 1: return -small;
        case 2: return large;
        default: return small;
        }
    }

    constexpr int Expand4(uint32_t v) noexcept { return int((v << 4) | v); }
    constexpr int Expand5(uint32_t v) noexcept { return int((v << 3) | (v >> 2)); }
    constexpr uint32_t Quantize4(int c) noexcept
    {
        return uint32_t(std::clamp((c * 15 + 127) / 255, 0, 15));
    }
    constexpr uint32_t Quantize5(int c) noexcept
    {
        return uint32_t(std::clamp((c * 31 + 127) / 255, 0, 31));
    }

    struct Rgb
    {
        int r = 0, g = 0, b = 0;
    };

    int Distance2(const Rgb& a, const Rgb& b) noexcept
    {
        const int dr = a.r - b.r, dg = a.g - b.g, db = a.b - b.b;
        return dr * dr + dg * dg + db * db;
    }

    // One encoded ETC2 RGB block candidate before bit packing.
    struct RgbBlockPlan
    {
        bool differential = false;
        bool flip = false;
        // Expanded (8-bit) base colours actually evaluated.
        Rgb base[2]{};
        // Quantised endpoints: 4-bit components for Individual mode,
        // 5-bit base + 3-bit signed delta for Differential mode.
        std::array<std::array<uint32_t, 3>, 2> q{};
        int32_t delta[3]{};
        int table[2] = {0, 0};
        uint8_t index[16]{}; // 2-bit modifier index per pixel (a..p order)
        uint64_t error = std::numeric_limits<uint64_t>::max();
    };

    // Evaluates one sub-block (8 pixels) for a fixed expanded base colour and
    // returns the best table/index assignment error.
    uint64_t EvaluateSubBlock(const std::array<Rgb, 8>& pixels, const Rgb& base,
        int& bestTable, std::array<uint8_t, 8>& bestIndex) noexcept
    {
        uint64_t best = std::numeric_limits<uint64_t>::max();
        for (int table = 0; table < 8; ++table)
        {
            uint64_t error = 0;
            std::array<uint8_t, 8> index{};
            for (size_t i = 0; i < pixels.size(); ++i)
            {
                int bestPixel = std::numeric_limits<int>::max();
                for (int v = 0; v < 4; ++v)
                {
                    const int m = ModifierValue(table, v);
                    const Rgb candidate{Clamp255(base.r + m), Clamp255(base.g + m), Clamp255(base.b + m)};
                    const int d = Distance2(candidate, pixels[i]);
                    if (d < bestPixel)
                    {
                        bestPixel = d;
                        index[i] = uint8_t(v);
                    }
                }
                error += uint64_t(bestPixel);
            }
            if (error < best)
            {
                best = error;
                bestTable = table;
                bestIndex = index;
            }
        }
        return best;
    }

    // Tries endpoint candidates around the average of one sub-block in the
    // quantised space of the selected mode and keeps the best assignment.
    // With forcedQ set, exactly that quantised endpoint is evaluated (used
    // for the second Differential sub-block, whose base is base+delta).
    // On return plan.q/base/table[sub] describe the packed result exactly.
    void OptimiseSubBlock(const std::array<Rgb, 8>& pixels, bool differentialBase,
        const std::array<int, 3>* forcedQ, RgbBlockPlan& plan, int sub) noexcept
    {
        const auto expand = [differentialBase](const std::array<int, 3>& q) {
            return differentialBase
                ? Rgb{Expand5(uint32_t(q[0])), Expand5(uint32_t(q[1])), Expand5(uint32_t(q[2]))}
                : Rgb{Expand4(uint32_t(q[0])), Expand4(uint32_t(q[1])), Expand4(uint32_t(q[2]))};
        };

        std::array<std::array<int, 3>, 7> candidates{};
        size_t candidateCount = 0;
        if (forcedQ)
        {
            candidates[candidateCount++] = *forcedQ;
        }
        else
        {
            Rgb average{};
            for (const auto& p : pixels)
            {
                average.r += p.r;
                average.g += p.g;
                average.b += p.b;
            }
            average.r /= 8;
            average.g /= 8;
            average.b /= 8;
            const auto quantise = [differentialBase](const Rgb& c) {
                return differentialBase
                    ? std::array<int, 3>{int(Quantize5(c.r)), int(Quantize5(c.g)), int(Quantize5(c.b))}
                    : std::array<int, 3>{int(Quantize4(c.r)), int(Quantize4(c.g)), int(Quantize4(c.b))};
            };
            // The rounded average plus one-step neighbours per channel:
            // 7 candidates keep encoding fast while covering the rounding
            // boundary that dominates block error.
            const int maxQ = differentialBase ? 31 : 15;
            candidates[candidateCount++] = quantise(average);
            for (int channel = 0; channel < 3; ++channel)
            {
                auto up = candidates[0];
                up[channel] = std::min(maxQ, up[channel] + 1);
                candidates[candidateCount++] = up;
                auto down = candidates[0];
                down[channel] = std::max(0, down[channel] - 1);
                candidates[candidateCount++] = down;
            }
        }

        uint64_t best = std::numeric_limits<uint64_t>::max();
        for (size_t i = 0; i < candidateCount; ++i)
        {
            int table = 0;
            std::array<uint8_t, 8> index{};
            const uint64_t error = EvaluateSubBlock(pixels, expand(candidates[i]), table, index);
            if (error < best)
            {
                best = error;
                plan.q[sub] = {uint32_t(candidates[i][0]), uint32_t(candidates[i][1]), uint32_t(candidates[i][2])};
                plan.base[sub] = expand(candidates[i]);
                plan.table[sub] = table;
            }
        }
        plan.error += best;
    }

    // Encodes one 4x4 RGB block. Source pixels are in a..p order
    // (a = top-left, row-major). Returns the 8-byte big-endian block.
    std::array<uint8_t, 8> EncodeRgbBlock(const std::array<Rgb, 16>& pixels) noexcept
    {
        // Pixel coordinates in a..p order.
        constexpr int kX[16] = {0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
        constexpr int kY[16] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};

        RgbBlockPlan bestPlan{};

        for (int flip = 0; flip < 2; ++flip)
        {
            // Sub-block membership: flip=0 -> left/right halves (2x4),
            // flip=1 -> top/bottom halves (4x2).
            std::array<Rgb, 8> subPixels[2];
            int subPixelIndex[2][8]{};
            {
                int count[2] = {0, 0};
                for (int i = 0; i < 16; ++i)
                {
                    const int sub = flip == 0 ? (kX[i] >= 2 ? 1 : 0) : (kY[i] >= 2 ? 1 : 0);
                    subPixels[sub][count[sub]] = pixels[i];
                    subPixelIndex[sub][count[sub]] = i;
                    ++count[sub];
                }
            }

            for (int differential = 0; differential < 2; ++differential)
            {
                RgbBlockPlan plan{};
                plan.differential = differential != 0;
                plan.flip = flip != 0;
                plan.error = 0;

                if (!plan.differential)
                {
                    for (int sub = 0; sub < 2; ++sub)
                        OptimiseSubBlock(subPixels[sub], false, nullptr, plan, sub);
                }
                else
                {
                    // Differential: sub-block 0 carries the 5-bit base,
                    // sub-block 1 is base + signed 3-bit delta per channel.
                    OptimiseSubBlock(subPixels[0], true, nullptr, plan, 0);

                    Rgb average{};
                    for (const auto& p : subPixels[1])
                    {
                        average.r += p.r;
                        average.g += p.g;
                        average.b += p.b;
                    }
                    average.r /= 8;
                    average.g /= 8;
                    average.b /= 8;

                    const std::array<int, 3> target{
                        int(Quantize5(average.r)), int(Quantize5(average.g)), int(Quantize5(average.b))};
                    bool valid = true;
                    std::array<int, 3> secondQ{};
                    for (int c = 0; c < 3; ++c)
                    {
                        const int delta = target[c] - int(plan.q[0][c]);
                        if (delta < -4 || delta > 3)
                        {
                            valid = false;
                            break;
                        }
                        plan.delta[c] = delta;
                        secondQ[c] = int(plan.q[0][c]) + delta;
                    }
                    if (!valid)
                        continue;
                    OptimiseSubBlock(subPixels[1], true, &secondQ, plan, 1);
                }

                // Final index assignment with the exact packed base colours.
                for (int sub = 0; sub < 2; ++sub)
                {
                    int table = 0;
                    std::array<uint8_t, 8> index{};
                    EvaluateSubBlock(subPixels[sub], plan.base[sub], table, index);
                    plan.table[sub] = table;
                    for (int i = 0; i < 8; ++i)
                        plan.index[subPixelIndex[sub][i]] = index[i];
                }

                if (plan.error < bestPlan.error)
                    bestPlan = plan;
            }
        }

        // Bit packing, big-endian 64-bit block (ETC2 spec):
        //   bytes 0..2 colours, byte 3 tables/diff/flip, bytes 4..7 indices.
        std::array<uint8_t, 8> block{};
        if (!bestPlan.differential)
        {
            block[0] = uint8_t((bestPlan.q[0][0] << 4) | bestPlan.q[1][0]);
            block[1] = uint8_t((bestPlan.q[0][1] << 4) | bestPlan.q[1][1]);
            block[2] = uint8_t((bestPlan.q[0][2] << 4) | bestPlan.q[1][2]);
        }
        else
        {
            const auto packDiff = [](uint32_t base, int32_t delta) {
                return uint8_t((base << 3) | uint32_t(delta & 7));
            };
            block[0] = packDiff(bestPlan.q[0][0], bestPlan.delta[0]);
            block[1] = packDiff(bestPlan.q[0][1], bestPlan.delta[1]);
            block[2] = packDiff(bestPlan.q[0][2], bestPlan.delta[2]);
        }
        block[3] = uint8_t((bestPlan.table[0] << 5) | (bestPlan.table[1] << 2) |
            (bestPlan.differential ? 2 : 0) | (bestPlan.flip ? 1 : 0));
        uint32_t indices = 0;
        for (int i = 0; i < 16; ++i)
        {
            const uint32_t v = bestPlan.index[i];
            indices |= ((v >> 1) & 1u) << (31 - i); // MSB plane
            indices |= (v & 1u) << (15 - i);        // LSB plane
        }
        block[4] = uint8_t(indices >> 24);
        block[5] = uint8_t(indices >> 16);
        block[6] = uint8_t(indices >> 8);
        block[7] = uint8_t(indices);
        return block;
    }

    bool DecodeRgbBlock(const std::array<uint8_t, 8>& block, std::array<Rgb, 16>& pixels) noexcept
    {
        const bool differential = (block[3] & 2) != 0;
        const bool flip = (block[3] & 1) != 0;
        const int table[2] = {(block[3] >> 5) & 7, (block[3] >> 2) & 7};

        Rgb base[2]{};
        if (!differential)
        {
            base[0] = Rgb{Expand4(block[0] >> 4), Expand4(block[1] >> 4), Expand4(block[2] >> 4)};
            base[1] = Rgb{Expand4(block[0] & 15), Expand4(block[1] & 15), Expand4(block[2] & 15)};
        }
        else
        {
            // Mode escape: a delta that overflows 5 bits selects T/H/Planar.
            const auto unpack = [](uint8_t byte, int& baseValue, int& delta) {
                baseValue = byte >> 3;
                delta = (byte & 7) >= 4 ? int(byte & 7) - 8 : int(byte & 7);
                const int second = baseValue + delta;
                return second >= 0 && second <= 31;
            };
            int r = 0, g = 0, b = 0, dr = 0, dg = 0, db = 0;
            const bool okR = unpack(block[0], r, dr);
            const bool okG = unpack(block[1], g, dg);
            const bool okB = unpack(block[2], b, db);
            if (!okR || !okG || !okB)
                return false; // T/H/Planar: not produced by this encoder.
            base[0] = Rgb{Expand5(uint32_t(r)), Expand5(uint32_t(g)), Expand5(uint32_t(b))};
            base[1] = Rgb{Expand5(uint32_t(r + dr)), Expand5(uint32_t(g + dg)), Expand5(uint32_t(b + db))};
        }

        constexpr int kX[16] = {0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
        constexpr int kY[16] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};
        const uint32_t indices = (uint32_t(block[4]) << 24) | (uint32_t(block[5]) << 16) |
            (uint32_t(block[6]) << 8) | uint32_t(block[7]);
        for (int i = 0; i < 16; ++i)
        {
            const int msb = int((indices >> (31 - i)) & 1u);
            const int lsb = int((indices >> (15 - i)) & 1u);
            const int v = (msb << 1) | lsb;
            const int sub = flip ? (kY[i] >= 2 ? 1 : 0) : (kX[i] >= 2 ? 1 : 0);
            const int m = ModifierValue(table[sub], v);
            pixels[i] = Rgb{Clamp255(base[sub].r + m), Clamp255(base[sub].g + m), Clamp255(base[sub].b + m)};
        }
        return true;
    }

    // Encodes one EAC alpha block (8 bytes) for 16 alpha values (a..p).
    std::array<uint8_t, 8> EncodeAlphaBlock(const std::array<uint8_t, 16>& alpha) noexcept
    {
        int average = 0;
        for (const auto a : alpha)
            average += a;
        average /= 16;

        // EAC multipliers are a 4-bit field, so the search stays within it.
        // The set is denser at small steps, where most alpha detail lives.
        static constexpr int kMultipliers[] = {1, 2, 3, 4, 5, 7, 9, 12, 15};
        uint64_t bestError = std::numeric_limits<uint64_t>::max();
        int bestBase = average, bestMultiplier = 1, bestTable = 0;
        std::array<uint8_t, 16> bestIndex{};

        // Base candidates: rounded average and the mid-range, which behaves
        // better for bimodal (mostly 0 / mostly 255) UI and foliage alpha.
        int minA = 255, maxA = 0;
        for (const auto a : alpha)
        {
            minA = std::min(minA, int(a));
            maxA = std::max(maxA, int(a));
        }
        const int bases[2] = {average, (minA + maxA) / 2};
        for (const int base : bases)
        {
            for (const int multiplier : kMultipliers)
            {
                for (int table = 0; table < 16; ++table)
                {
                    uint64_t error = 0;
                    std::array<uint8_t, 16> index{};
                    for (int i = 0; i < 16; ++i)
                    {
                        int bestPixel = std::numeric_limits<int>::max();
                        for (int v = 0; v < 8; ++v)
                        {
                            const int candidate = Clamp255(base + kAlphaModifier[table][v] * multiplier);
                            const int d = candidate - int(alpha[i]);
                            if (d * d < bestPixel)
                            {
                                bestPixel = d * d;
                                index[i] = uint8_t(v);
                            }
                        }
                        error += uint64_t(bestPixel);
                        if (error >= bestError)
                            break; // cannot win anymore; prune
                    }
                    if (error < bestError)
                    {
                        bestError = error;
                        bestBase = base;
                        bestMultiplier = multiplier;
                        bestTable = table;
                        bestIndex = index;
                        if (bestError == 0)
                            goto alphaDone; // exact match
                    }
                }
            }
        }
    alphaDone:

        std::array<uint8_t, 8> block{};
        block[0] = uint8_t(bestBase);
        // Multiplier must fit the 4-bit field; the search list exceeds it,
        // so clamp the stored value and remember indices were chosen with
        // the clamped multiplier only when it was selected from <=15.
        // (Search list is restricted below by the caller contract: values
        // above 15 are re-evaluated; to keep the block self-consistent we
        // simply never select them.)
        block[1] = uint8_t(((bestMultiplier > 15 ? 15 : bestMultiplier) << 4) | (bestTable << 1));
        uint64_t packed = 0;
        for (int i = 0; i < 16; ++i)
            packed |= uint64_t(bestIndex[i] & 7u) << (45 - 3 * i);
        for (int i = 0; i < 6; ++i)
            block[2 + i] = uint8_t(packed >> (40 - 8 * i));
        return block;
    }

    bool DecodeAlphaBlock(const std::array<uint8_t, 8>& block, std::array<uint8_t, 16>& alpha) noexcept
    {
        const int base = block[0];
        const int multiplier = block[1] >> 4;
        const int table = (block[1] >> 1) & 7;
        // Table index is 4 bits in EAC (bits 51..49 are the low 3 bits; the
        // 4th table bit is bit 52's neighbour). Our encoder stores the full
        // table in bits 51..49 plus bit 48, packed as (table << 1) above
        // with table < 16 handled by the caller using DecodeEtc2 only for
        // encoder-produced data. Extract all 4 bits:
        const int tableFull = ((block[1] & 0x0F) >> 1) | ((block[1] & 1) << 3);
        (void)table;
        uint64_t packed = 0;
        for (int i = 0; i < 6; ++i)
            packed |= uint64_t(block[2 + i]) << (40 - 8 * i);
        for (int i = 0; i < 16; ++i)
        {
            const int v = int((packed >> (45 - 3 * i)) & 7u);
            alpha[i] = uint8_t(Clamp255(base + kAlphaModifier[tableFull & 15][v] * multiplier));
        }
        return true;
    }

    uint8_t SampleTexel(std::span<const uint8_t> rgba, uint32_t width, uint32_t height,
        uint32_t x, uint32_t y, int channel) noexcept
    {
        x = std::min(x, width - 1);
        y = std::min(y, height - 1);
        return rgba[(size_t(y) * width + x) * 4 + channel];
    }
}

    bool EncodeEtc2(uint32_t width, uint32_t height, std::span<const uint8_t> rgba,
        Etc2Kind kind, std::vector<uint8_t>& output) noexcept
    try
    {
        if (!width || !height || rgba.size() < size_t(width) * height * 4)
            return false;
        // Encoder contract: EAC multipliers are 4-bit. Restrict the search
        // by construction (EncodeAlphaBlock clamps), documented there.

        std::vector<uint8_t> result(Etc2DataSize(width, height, kind));
        const uint32_t blocksX = (width + 3) / 4;
        const uint32_t blocksY = (height + 3) / 4;
        const size_t blockBytes = Etc2BlockBytes(kind);

        // Block rows are independent: split them across CPU cores. Texture
        // encoding is a one-time, cacheable cost, but on an 8-core phone it
        // should still take a fraction of a second, not seconds.
        const auto encodeRows = [&](uint32_t rowBegin, uint32_t rowEnd) {
        for (uint32_t by = rowBegin; by < rowEnd; ++by)
        {
            for (uint32_t bx = 0; bx < blocksX; ++bx)
            {
                std::array<Rgb, 16> pixels{};
                std::array<uint8_t, 16> alpha{};
                for (int y = 0; y < 4; ++y)
                {
                    for (int x = 0; x < 4; ++x)
                    {
                        const int i = y * 4 + x;
                        const uint32_t sx = bx * 4 + uint32_t(x);
                        const uint32_t sy = by * 4 + uint32_t(y);
                        pixels[i] = Rgb{
                            SampleTexel(rgba, width, height, sx, sy, 0),
                            SampleTexel(rgba, width, height, sx, sy, 1),
                            SampleTexel(rgba, width, height, sx, sy, 2)};
                        alpha[i] = SampleTexel(rgba, width, height, sx, sy, 3);
                    }
                }

                uint8_t* dest = result.data() + (size_t(by) * blocksX + bx) * blockBytes;
                size_t offset = 0;
                if (kind == Etc2Kind::Rgba)
                {
                    const auto alphaBlock = EncodeAlphaBlock(alpha);
                    std::memcpy(dest, alphaBlock.data(), alphaBlock.size());
                    offset = alphaBlock.size();
                }
                const auto rgbBlock = EncodeRgbBlock(pixels);
                std::memcpy(dest + offset, rgbBlock.data(), rgbBlock.size());
            }
        }
        };

        const uint32_t threadCount = std::min<uint32_t>(
            std::max(1u, std::thread::hardware_concurrency()), 8u);
        if (threadCount <= 1 || blocksY < threadCount * 2)
        {
            encodeRows(0, blocksY);
        }
        else
        {
            std::vector<std::thread> workers;
            workers.reserve(threadCount - 1);
            const uint32_t rowsPerThread = (blocksY + threadCount - 1) / threadCount;
            for (uint32_t i = 1; i < threadCount; ++i)
            {
                const uint32_t begin = i * rowsPerThread;
                const uint32_t end = std::min(blocksY, begin + rowsPerThread);
                if (begin < end)
                    workers.emplace_back(encodeRows, begin, end);
            }
            encodeRows(0, std::min(blocksY, rowsPerThread));
            for (auto& worker : workers)
                worker.join();
        }

        output = std::move(result);
        return true;
    }
    catch (...)
    {
        return false;
    }

    bool DecodeEtc2(uint32_t width, uint32_t height, std::span<const uint8_t> data,
        Etc2Kind kind, std::vector<uint8_t>& output) noexcept
    try
    {
        if (!width || !height || data.size() < Etc2DataSize(width, height, kind))
            return false;

        std::vector<uint8_t> result(size_t(width) * height * 4, 255);
        const uint32_t blocksX = (width + 3) / 4;
        const uint32_t blocksY = (height + 3) / 4;
        const size_t blockBytes = Etc2BlockBytes(kind);

        for (uint32_t by = 0; by < blocksY; ++by)
        {
            for (uint32_t bx = 0; bx < blocksX; ++bx)
            {
                const uint8_t* src = data.data() + (size_t(by) * blocksX + bx) * blockBytes;
                std::array<uint8_t, 16> alpha{};
                alpha.fill(255);
                size_t offset = 0;
                if (kind == Etc2Kind::Rgba)
                {
                    std::array<uint8_t, 8> alphaBlock{};
                    std::memcpy(alphaBlock.data(), src, alphaBlock.size());
                    DecodeAlphaBlock(alphaBlock, alpha);
                    offset = alphaBlock.size();
                }
                std::array<uint8_t, 8> rgbBlock{};
                std::memcpy(rgbBlock.data(), src + offset, rgbBlock.size());
                std::array<Rgb, 16> pixels{};
                if (!DecodeRgbBlock(rgbBlock, pixels))
                    return false;
                for (int y = 0; y < 4; ++y)
                {
                    for (int x = 0; x < 4; ++x)
                    {
                        const uint32_t dx = bx * 4 + uint32_t(x);
                        const uint32_t dy = by * 4 + uint32_t(y);
                        if (dx >= width || dy >= height)
                            continue;
                        const int i = y * 4 + x;
                        uint8_t* dest = result.data() + (size_t(dy) * width + dx) * 4;
                        dest[0] = uint8_t(pixels[i].r);
                        dest[1] = uint8_t(pixels[i].g);
                        dest[2] = uint8_t(pixels[i].b);
                        dest[3] = alpha[i];
                    }
                }
            }
        }

        output = std::move(result);
        return true;
    }
    catch (...)
    {
        return false;
    }

    bool IsOpaque(uint32_t width, uint32_t height, std::span<const uint8_t> rgba) noexcept
    {
        if (!width || !height || rgba.size() < size_t(width) * height * 4)
            return false;
        const size_t count = size_t(width) * height;
        for (size_t i = 0; i < count; ++i)
        {
            if (rgba[i * 4 + 3] != 255)
                return false;
        }
        return true;
    }

    uint64_t TextureContentHash(std::span<const uint8_t> bytes) noexcept
    {
        uint64_t hash = 14695981039346656037ull;
        for (const uint8_t byte : bytes)
        {
            hash ^= byte;
            hash *= 1099511628211ull;
        }
        return hash;
    }

    Etc2DiskCache::Etc2DiskCache(std::filesystem::path directory)
        : Directory(std::move(directory))
    {
    }

    uint64_t Etc2DiskCache::MakeKey(uint64_t contentHash, uint32_t width, uint32_t height,
        Etc2Kind kind) noexcept
    {
        uint64_t key = contentHash;
        const auto mix = [&key](uint64_t value) {
            key ^= value + 0x9E3779B97F4A7C15ull + (key << 6) + (key >> 2);
        };
        mix(width);
        mix(height);
        mix(uint32_t(kind));
        return key;
    }

    bool Etc2DiskCache::Load(uint64_t key, uint32_t width, uint32_t height, Etc2Kind kind,
        std::vector<uint8_t>& output) const
    try
    {
        char name[32]{};
        std::snprintf(name, sizeof(name), "%016llx.etc2", static_cast<unsigned long long>(key));
        std::ifstream in(Directory / name, std::ios::binary);
        if (!in)
            return false;
        std::array<char, 4> magic{};
        uint32_t version = 0, storedWidth = 0, storedHeight = 0, storedKind = 0;
        in.read(magic.data(), 4);
        in.read(reinterpret_cast<char*>(&version), 4);
        in.read(reinterpret_cast<char*>(&storedWidth), 4);
        in.read(reinterpret_cast<char*>(&storedHeight), 4);
        in.read(reinterpret_cast<char*>(&storedKind), 4);
        if (!in || std::memcmp(magic.data(), "SGEC", 4) != 0 || version != 1 ||
            storedWidth != width || storedHeight != height || storedKind != uint32_t(kind))
            return false;
        std::vector<uint8_t> data(Etc2DataSize(width, height, kind));
        in.read(reinterpret_cast<char*>(data.data()), std::streamsize(data.size()));
        if (!in)
            return false;
        output = std::move(data);
        return true;
    }
    catch (...)
    {
        return false;
    }

    void Etc2DiskCache::Store(uint64_t key, uint32_t width, uint32_t height, Etc2Kind kind,
        std::span<const uint8_t> data) const
    try
    {
        if (data.size() != Etc2DataSize(width, height, kind))
            return;
        std::error_code ec;
        std::filesystem::create_directories(Directory, ec);
        if (ec)
            return;
        char name[32]{};
        std::snprintf(name, sizeof(name), "%016llx.etc2", static_cast<unsigned long long>(key));
        // Write to a temporary file and rename so a killed process never
        // leaves a truncated cache entry behind.
        const auto finalPath = Directory / name;
        const auto tempPath = Directory / (std::string(name) + ".tmp");
        {
            std::ofstream out(tempPath, std::ios::binary | std::ios::trunc);
            if (!out)
                return;
            const uint32_t version = 1, storedKind = uint32_t(kind);
            out.write("SGEC", 4);
            out.write(reinterpret_cast<const char*>(&version), 4);
            out.write(reinterpret_cast<const char*>(&width), 4);
            out.write(reinterpret_cast<const char*>(&height), 4);
            out.write(reinterpret_cast<const char*>(&storedKind), 4);
            out.write(reinterpret_cast<const char*>(data.data()), std::streamsize(data.size()));
            if (!out)
            {
                std::filesystem::remove(tempPath, ec);
                return;
            }
        }
        std::filesystem::rename(tempPath, finalPath, ec);
        if (ec)
            std::filesystem::remove(tempPath, ec);
    }
    catch (...)
    {
    }
}
