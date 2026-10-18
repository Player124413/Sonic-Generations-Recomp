#include <hid/touch_input.h>

#include <algorithm>
#include <atomic>
#include <cmath>
#include <mutex>

namespace hid::touch
{
namespace
{
    std::mutex g_mutex;
    PadState g_state;
    std::atomic<bool> g_enabled{true};

    // 7849/32767 ~= 0.2395 (XInput left-stick dead zone ratio).
    constexpr float kDeadZone = 0.2395f;

    int16_t ScaleAxis(float value) noexcept
    {
        const float clamped = std::clamp(value, -1.0f, 1.0f);
        const int32_t scaled = int32_t(std::lround(clamped * 32767.0f));
        return int16_t(std::clamp(scaled, int32_t(-32768), int32_t(32767)));
    }
}

    void SetEnabled(bool enabled) noexcept
    {
        g_enabled.store(enabled, std::memory_order_relaxed);
        if (!enabled)
            Clear();
    }

    bool IsEnabled() noexcept
    {
        return g_enabled.load(std::memory_order_relaxed);
    }

    void SetButtons(uint16_t mask) noexcept
    {
        if (!IsEnabled())
            return;
        std::lock_guard lock(g_mutex);
        g_state.buttons = mask;
        g_state.active = true;
    }

    void SetButton(Button button, bool pressed) noexcept
    {
        if (!IsEnabled())
            return;
        std::lock_guard lock(g_mutex);
        if (pressed)
            g_state.buttons |= uint16_t(button);
        else
            g_state.buttons &= uint16_t(~uint16_t(button));
        g_state.active = true;
    }

    void ConvertStick(float x, float y, int16_t& outX, int16_t& outY) noexcept
    {
        const float magnitude = std::sqrt(x * x + y * y);
        if (magnitude <= kDeadZone || magnitude == 0.0f)
        {
            outX = 0;
            outY = 0;
            return;
        }
        // Rescale the remaining travel to [0, 1] so the edge of the dead
        // zone is 0 and full deflection is 1, keeping direction intact.
        const float scaled = std::min(1.0f, (magnitude - kDeadZone) / (1.0f - kDeadZone));
        const float nx = x / magnitude * scaled;
        const float ny = y / magnitude * scaled;
        outX = ScaleAxis(nx);
        outY = ScaleAxis(ny);
    }

    void SetStick(bool right, float x, float y) noexcept
    {
        if (!IsEnabled())
            return;
        int16_t outX = 0, outY = 0;
        ConvertStick(x, y, outX, outY);
        std::lock_guard lock(g_mutex);
        if (right)
        {
            g_state.rightStickX = outX;
            g_state.rightStickY = outY;
        }
        else
        {
            g_state.leftStickX = outX;
            g_state.leftStickY = outY;
        }
        g_state.active = true;
    }

    void SetTrigger(bool right, float value) noexcept
    {
        if (!IsEnabled())
            return;
        const auto byte = uint8_t(std::clamp(int(std::lround(value * 255.0f)), 0, 255));
        std::lock_guard lock(g_mutex);
        if (right)
            g_state.rightTrigger = byte;
        else
            g_state.leftTrigger = byte;
        g_state.active = true;
    }

    void Clear() noexcept
    {
        std::lock_guard lock(g_mutex);
        g_state = PadState{};
    }

    PadState Snapshot() noexcept
    {
        std::lock_guard lock(g_mutex);
        return g_state;
    }
}
