// Host tests for the ETC2 texture transcoder and the touch pad state.
// These modules have no GPU/SDL dependency, so they run anywhere:
//   g++ -std=c++20 -I SonicGenerationsRecomp tests/texture_transcode_tests.cpp
//       SonicGenerationsRecomp/gpu/texture_transcode.cpp
//       SonicGenerationsRecomp/hid/touch_input.cpp -o /tmp/transcode_tests
#include <gpu/texture_transcode.h>
#include <hid/touch_input.h>

#include <cmath>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <vector>

namespace
{
    int g_failures = 0;

    void Check(bool condition, const char* message)
    {
        if (!condition)
        {
            std::printf("FAIL: %s\n", message);
            ++g_failures;
        }
    }

    double Psnr(const std::vector<uint8_t>& a, const std::vector<uint8_t>& b, bool rgbOnly)
    {
        double mse = 0.0;
        size_t count = 0;
        for (size_t i = 0; i + 3 < a.size(); i += 4)
        {
            const int channels = rgbOnly ? 3 : 4;
            for (int c = 0; c < channels; ++c)
            {
                const double d = double(a[i + c]) - double(b[i + c]);
                mse += d * d;
                ++count;
            }
        }
        mse /= double(count);
        if (mse == 0.0)
            return 99.0;
        return 10.0 * std::log10(255.0 * 255.0 / mse);
    }

    std::vector<uint8_t> MakeGradient(uint32_t w, uint32_t h, bool withAlpha)
    {
        std::vector<uint8_t> image(size_t(w) * h * 4);
        for (uint32_t y = 0; y < h; ++y)
        {
            for (uint32_t x = 0; x < w; ++x)
            {
                uint8_t* p = image.data() + (size_t(y) * w + x) * 4;
                p[0] = uint8_t(x * 255 / (w - 1));
                p[1] = uint8_t(y * 255 / (h - 1));
                p[2] = uint8_t((x + y) * 255 / (w + h - 2));
                p[3] = withAlpha ? uint8_t(255 - x * 200 / (w - 1)) : 255;
            }
        }
        return image;
    }

    std::vector<uint8_t> MakeSolid(uint32_t w, uint32_t h, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    {
        std::vector<uint8_t> image(size_t(w) * h * 4);
        for (size_t i = 0; i + 3 < image.size(); i += 4)
        {
            image[i] = r;
            image[i + 1] = g;
            image[i + 2] = b;
            image[i + 3] = a;
        }
        return image;
    }
}

int main()
{
    using namespace GuestGpu;

    // --- Sizes -------------------------------------------------------------
    Check(Etc2DataSize(4, 4, Etc2Kind::Rgb) == 8, "4x4 RGB ETC2 is 8 bytes");
    Check(Etc2DataSize(4, 4, Etc2Kind::Rgba) == 16, "4x4 RGBA ETC2 is 16 bytes");
    Check(Etc2DataSize(64, 64, Etc2Kind::Rgb) == 64 * 64 / 2, "ETC2 is 4 bit/texel");
    Check(Etc2DataSize(5, 3, Etc2Kind::Rgb) == 2 * 1 * 8, "partial blocks round up");
    Check(Etc2DataSize(0, 8, Etc2Kind::Rgb) == 0, "empty texture has no data");

    // --- Solid colour round-trip (must be near-exact) -----------------------
    {
        const auto image = MakeSolid(16, 16, 200, 30, 90, 255);
        std::vector<uint8_t> encoded, decoded;
        Check(EncodeEtc2(16, 16, image, Etc2Kind::Rgb, encoded), "encode solid RGB");
        Check(encoded.size() == Etc2DataSize(16, 16, Etc2Kind::Rgb), "solid RGB size");
        Check(DecodeEtc2(16, 16, encoded, Etc2Kind::Rgb, decoded), "decode solid RGB");
        // ETC2 endpoints are 4/5-bit: a flat colour lands within one
        // quantisation step of the source on every channel.
        bool close = decoded.size() == image.size();
        for (size_t i = 0; close && i + 2 < image.size(); i += 4)
            for (int c = 0; c < 3; ++c)
                close = std::abs(int(decoded[i + c]) - int(image[i + c])) <= 6;
        Check(close, "solid colour survives ETC2 (within +/-6 per channel)");
        std::printf("solid RGB PSNR: %.2f dB\n", Psnr(image, decoded, true));
    }

    // --- Gradient round-trip ------------------------------------------------
    {
        const auto image = MakeGradient(64, 64, false);
        std::vector<uint8_t> encoded, decoded;
        Check(EncodeEtc2(64, 64, image, Etc2Kind::Rgb, encoded), "encode gradient");
        Check(DecodeEtc2(64, 64, encoded, Etc2Kind::Rgb, decoded), "decode gradient");
        const double psnr = Psnr(image, decoded, true);
        std::printf("gradient RGB PSNR: %.2f dB\n", psnr);
        Check(psnr > 28.0, "gradient survives ETC2 (>28 dB)");
    }

    // --- Alpha round-trip ----------------------------------------------------
    {
        const auto image = MakeGradient(32, 32, true);
        Check(!IsOpaque(32, 32, image), "alpha gradient is not opaque");
        std::vector<uint8_t> encoded, decoded;
        Check(EncodeEtc2(32, 32, image, Etc2Kind::Rgba, encoded), "encode RGBA");
        Check(DecodeEtc2(32, 32, encoded, Etc2Kind::Rgba, decoded), "decode RGBA");
        const double psnr = Psnr(image, decoded, false);
        std::printf("gradient RGBA PSNR: %.2f dB\n", psnr);
        Check(psnr > 25.0, "alpha gradient survives ETC2 (>25 dB)");
        Check(IsOpaque(16, 16, MakeSolid(16, 16, 1, 2, 3, 255)), "solid 255 alpha is opaque");
    }

    // --- Non-multiple-of-4 dimensions ---------------------------------------
    {
        const auto image = MakeGradient(13, 7, false);
        std::vector<uint8_t> encoded, decoded;
        Check(EncodeEtc2(13, 7, image, Etc2Kind::Rgb, encoded), "encode 13x7");
        Check(encoded.size() == Etc2DataSize(13, 7, Etc2Kind::Rgb), "13x7 size");
        Check(DecodeEtc2(13, 7, encoded, Etc2Kind::Rgb, decoded), "decode 13x7");
        Check(decoded.size() == image.size(), "13x7 decoded size");
        Check(Psnr(image, decoded, true) > 25.0, "13x7 gradient survives");
    }

    // --- Failure modes are transactional -------------------------------------
    {
        std::vector<uint8_t> out = {1, 2, 3};
        Check(!EncodeEtc2(0, 4, {}, Etc2Kind::Rgb, out), "encode rejects empty");
        Check(out.size() == 3 && out[0] == 1, "failed encode leaves output unchanged");
        const std::vector<uint8_t> truncated = {1, 2};
        Check(!DecodeEtc2(8, 8, truncated, Etc2Kind::Rgb, out), "decode rejects truncated");
        Check(out.size() == 3, "failed decode leaves output unchanged");
    }

    // --- Hash + disk cache ----------------------------------------------------
    {
        const auto image = MakeGradient(16, 16, false);
        const uint64_t hash = TextureContentHash(image);
        Check(hash == TextureContentHash(image), "hash is stable");
        auto changed = image;
        changed[0] ^= 1;
        Check(hash != TextureContentHash(changed), "hash changes with content");

        const auto dir = std::filesystem::temp_directory_path() / "sonic_etc2_cache_test";
        std::error_code ec;
        std::filesystem::remove_all(dir, ec);
        Etc2DiskCache cache(dir);
        std::vector<uint8_t> encoded, loaded;
        Check(EncodeEtc2(16, 16, image, Etc2Kind::Rgb, encoded), "encode for cache");
        const uint64_t key = Etc2DiskCache::MakeKey(hash, 16, 16, Etc2Kind::Rgb);
        Check(!cache.Load(key, 16, 16, Etc2Kind::Rgb, loaded), "cache misses before store");
        cache.Store(key, 16, 16, Etc2Kind::Rgb, encoded);
        Check(cache.Load(key, 16, 16, Etc2Kind::Rgb, loaded), "cache hits after store");
        Check(loaded == encoded, "cache returns identical bytes");
        Check(!cache.Load(key, 32, 16, Etc2Kind::Rgb, loaded), "cache rejects wrong size");
        std::filesystem::remove_all(dir, ec);
    }

    // --- Touch pad state --------------------------------------------------------
    {
        using namespace hid::touch;
        Clear();
        SetEnabled(true);
        Check(!Snapshot().active, "touch pad starts inactive");
        SetButton(Button::A, true);
        SetButton(Button::Y, true);
        Check(Snapshot().buttons == (uint16_t(Button::A) | uint16_t(Button::Y)), "buttons set");
        SetButton(Button::A, false);
        Check(Snapshot().buttons == uint16_t(Button::Y), "button released");
        SetButtons(0);
        Check(Snapshot().buttons == 0, "button mask cleared");

        int16_t x = 1, y = 1;
        ConvertStick(0.1f, 0.0f, x, y);
        Check(x == 0 && y == 0, "dead zone swallows small input");
        ConvertStick(1.0f, 0.0f, x, y);
        Check(x == 32767 && y == 0, "full deflection reaches 32767");
        ConvertStick(0.0f, -1.0f, x, y);
        Check(y == -32767, "negative deflection reaches -32767");
        ConvertStick(0.7071f, 0.7071f, x, y);
        Check(x > 20000 && y > 20000 && std::abs(x - y) < 4, "diagonal stays diagonal");

        SetStick(false, 1.0f, 0.0f);
        Check(Snapshot().leftStickX == 32767, "left stick stored");
        SetTrigger(true, 0.5f);
        Check(Snapshot().rightTrigger >= 127 && Snapshot().rightTrigger <= 128, "trigger scaled");
        SetTrigger(true, 2.0f);
        Check(Snapshot().rightTrigger == 255, "trigger clamped");

        SetEnabled(false);
        Check(Snapshot().buttons == 0 && !Snapshot().active, "disabling clears the pad");
        SetButton(Button::B, true);
        Check(Snapshot().buttons == 0, "disabled pad ignores input");
        SetEnabled(true);
    }

    if (g_failures)
    {
        std::printf("%d check(s) failed\n", g_failures);
        return 1;
    }
    std::printf("texture_transcode + touch_input tests passed\n");
    return 0;
}
