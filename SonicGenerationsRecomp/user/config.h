#pragma once

#include <cstdint>
#include <string>
#include <type_traits>
#include <unordered_map>

#include <SDL_scancode.h>

    enum class ELanguage : uint32_t
{
    Invalid = 0,
    English,
    Japanese,
    German,
    French,
    Spanish,
    Italian,
    Count
};

enum class EChannelConfiguration : uint32_t
{
    Stereo = 0,
    Surround,
    Count
};

enum class EGraphicsBackend : uint32_t
{
    Null = 0,
    D3D12,
    Vulkan
};

// Renderer selection (Video::Init). Native is the default everywhere:
// the project's own Vulkan backend replays guest draws directly.
// Reference keeps the capture/transfer path used for comparisons and
// debugging. Null runs the guest without submitting any GPU work.
// The SONIC_RENDER_BACKEND environment variable still overrides this.
enum class ERenderMode : uint32_t
{
    Native = 0,
    Reference,
    Null,
    Count
};

// Guest texture upload format on the host GPU.
//   Auto: ETC2 when the device exposes ETC2 sampling (every Vulkan
//         Android device), RGBA8 otherwise.
//   Etc2: require ETC2, fall back to RGBA8 per texture on failure.
//   Off:  always upload RGBA8 (desktop behaviour, 8x the bandwidth).
enum class ETextureCompression : uint32_t
{
    Auto = 0,
    Etc2,
    Off,
    Count
};

enum class EQualityPreset : uint32_t
{
    Performance = 0,
    Balanced,
    Quality,
    Count
};

namespace Config
{

    template <typename T>
    struct ConfigValue
    {
        using ValueType = T;

        T Value{};
        T Default{};

        ConfigValue() = default;
        explicit ConfigValue(T defaultValue) : Value(defaultValue), Default(defaultValue) {}

        ConfigValue& operator=(const T& value)
        {
            Value = value;
            return *this;
        }

        operator const T&() const { return Value; }
    };

    // [Video]
    extern ConfigValue<EGraphicsBackend> GraphicsBackend;
    extern ConfigValue<uint32_t> WindowWidth;
    extern ConfigValue<uint32_t> WindowHeight;
    extern ConfigValue<bool> Fullscreen;
    extern ConfigValue<ERenderMode> RenderMode;
    // Render/present resolution scale in [0.5, 1.0]; the guest still
    // renders at its own resolution, the host target is scaled.
    extern ConfigValue<float> RenderScale;
    extern ConfigValue<ETextureCompression> TextureCompression;
    extern ConfigValue<EQualityPreset> QualityPreset;

    // [Touch] (Android virtual gamepad; harmless on desktop)
    extern ConfigValue<bool> TouchControls;
    extern ConfigValue<float> TouchOpacity; // [0.15, 1.0]
    extern ConfigValue<float> TouchScale;   // [0.6, 1.8]

    // [Audio]
    extern ConfigValue<EChannelConfiguration> ChannelConfiguration;
    extern ConfigValue<float> MasterVolume;

    // [Input]
    extern ConfigValue<bool> AllowBackgroundInput;
    extern ConfigValue<bool> Vibration;
    extern ConfigValue<SDL_Scancode> Key_A;
    extern ConfigValue<SDL_Scancode> Key_B;
    extern ConfigValue<SDL_Scancode> Key_X;
    extern ConfigValue<SDL_Scancode> Key_Y;
    extern ConfigValue<SDL_Scancode> Key_DPadUp;
    extern ConfigValue<SDL_Scancode> Key_DPadDown;
    extern ConfigValue<SDL_Scancode> Key_DPadLeft;
    extern ConfigValue<SDL_Scancode> Key_DPadRight;
    extern ConfigValue<SDL_Scancode> Key_Start;
    extern ConfigValue<SDL_Scancode> Key_Back;
    extern ConfigValue<SDL_Scancode> Key_LeftTrigger;
    extern ConfigValue<SDL_Scancode> Key_RightTrigger;
    extern ConfigValue<SDL_Scancode> Key_LeftBumper;
    extern ConfigValue<SDL_Scancode> Key_RightBumper;
    extern ConfigValue<SDL_Scancode> Key_LeftStickUp;
    extern ConfigValue<SDL_Scancode> Key_LeftStickDown;
    extern ConfigValue<SDL_Scancode> Key_LeftStickLeft;
    extern ConfigValue<SDL_Scancode> Key_LeftStickRight;
    extern ConfigValue<SDL_Scancode> Key_RightStickUp;
    extern ConfigValue<SDL_Scancode> Key_RightStickDown;
    extern ConfigValue<SDL_Scancode> Key_RightStickLeft;
    extern ConfigValue<SDL_Scancode> Key_RightStickRight;

    // [Game]
    extern ConfigValue<ELanguage> Language;
    extern ConfigValue<uint32_t> FPSLimit;

    constexpr uint32_t FPS_MIN = 30;
    constexpr uint32_t FPS_MAX = 1000;

    // Loads config.toml (if present) from the user directory and returns the
    // path it was loaded from.
    std::string Load();

    // Serialises the current values to config.toml in the user directory.
    void Save();
}
