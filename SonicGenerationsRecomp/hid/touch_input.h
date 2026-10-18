#pragma once

#include <cstdint>

namespace hid::touch
{
    // -----------------------------------------------------------------------
    // Virtual touch gamepad state.
    //
    // The Android overlay (Kotlin TouchOverlayView) forwards button/stick
    // events through JNI into this state; hid::GetState merges it into the
    // XAMINPUT gamepad exactly like a physical controller, so the guest
    // cannot tell the difference. The layout itself (positions, sizes,
    // opacity) lives entirely in the Android layer and is editable there;
    // this module is only the thread-safe input sink.
    //
    // Button bits use the standard XInput/XAMINPUT gamepad layout, so the
    // overlay, the JNI bridge and the guest all share one numbering:
    //   DPadUp 0x0001, DPadDown 0x0002, DPadLeft 0x0004, DPadRight 0x0008,
    //   Start 0x0010, Back 0x0020, LeftThumb 0x0040, RightThumb 0x0080,
    //   LeftShoulder 0x0100, RightShoulder 0x0200,
    //   A 0x1000, B 0x2000, X 0x4000, Y 0x8000.
    // This header is deliberately free of SDL/xbox.h dependencies so the
    // state machine is unit tested on the host.
    // -----------------------------------------------------------------------

    enum class Button : uint16_t
    {
        DPadUp = 0x0001,
        DPadDown = 0x0002,
        DPadLeft = 0x0004,
        DPadRight = 0x0008,
        Start = 0x0010,
        Back = 0x0020,
        LeftThumb = 0x0040,
        RightThumb = 0x0080,
        LeftShoulder = 0x0100,
        RightShoulder = 0x0200,
        A = 0x1000,
        B = 0x2000,
        X = 0x4000,
        Y = 0x8000,
    };

    struct PadState
    {
        uint16_t buttons = 0;
        // XAMINPUT stick range (-32768..32767, +Y up) and triggers (0..255).
        int16_t leftStickX = 0, leftStickY = 0;
        int16_t rightStickX = 0, rightStickY = 0;
        uint8_t leftTrigger = 0, rightTrigger = 0;
        // True once any control reported input since the last Clear; the HID
        // layer uses it to decide that a virtual controller is "connected".
        bool active = false;
    };

    // Master switch (Config TouchControls / launcher setting). When disabled
    // the virtual pad never reports as connected.
    void SetEnabled(bool enabled) noexcept;
    bool IsEnabled() noexcept;

    // Full-state setters used by the JNI bridge (one call per overlay frame
    // of changes; values are already normalised by the caller).
    void SetButtons(uint16_t mask) noexcept;
    void SetButton(Button button, bool pressed) noexcept;
    // Stick values are normalised floats in [-1, 1], +Y up (game convention).
    // Conversion applies a radial dead zone and the XAMINPUT int16 range.
    void SetStick(bool right, float x, float y) noexcept;
    void SetTrigger(bool right, float value) noexcept; // [0, 1]
    void Clear() noexcept;

    PadState Snapshot() noexcept;

    // Applies the standard stick dead zone (axial, matching XInput's
    // XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE ratio) and converts to int16.
    // Exposed for host tests.
    void ConvertStick(float x, float y, int16_t& outX, int16_t& outY) noexcept;
}
