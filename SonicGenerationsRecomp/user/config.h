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
