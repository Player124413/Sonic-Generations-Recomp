package com.sonicgen.recomp

/**
 * JNI bridge into the native virtual gamepad (hid/touch_input.cpp).
 * Implementations live in SonicGenerationsRecomp/os/android/jni_bridge.cpp
 * inside libmain.so, which SDLActivity loads before any game UI appears.
 * Calls are defensive: before the library is ready they are dropped.
 */
object NativeBridge {
    // XAMINPUT/XInput button bits (shared with the native side).
    const val DPAD_UP = 0x0001
    const val DPAD_DOWN = 0x0002
    const val DPAD_LEFT = 0x0004
    const val DPAD_RIGHT = 0x0008
    const val START = 0x0010
    const val BACK = 0x0020
    const val LEFT_THUMB = 0x0040
    const val RIGHT_THUMB = 0x0080
    const val LEFT_SHOULDER = 0x0100
    const val RIGHT_SHOULDER = 0x0200
    const val A = 0x1000
    const val B = 0x2000
    const val X = 0x4000
    const val Y = 0x8000

    @JvmStatic external fun nativeSetButtons(mask: Int)
    @JvmStatic external fun nativeSetButton(button: Int, pressed: Boolean)
    @JvmStatic external fun nativeSetStick(right: Boolean, x: Float, y: Float)
    @JvmStatic external fun nativeSetTrigger(right: Boolean, value: Float)
    @JvmStatic external fun nativeSetTouchEnabled(enabled: Boolean)
    @JvmStatic external fun nativeClearTouch()

    private inline fun safe(block: () -> Unit) {
        try {
            block()
        } catch (_: UnsatisfiedLinkError) {
            // libmain.so not loaded yet (launcher context); input is dropped.
        }
    }

    fun setButtons(mask: Int) = safe { nativeSetButtons(mask) }
    fun setButton(button: Int, pressed: Boolean) = safe { nativeSetButton(button, pressed) }
    fun setStick(right: Boolean, x: Float, y: Float) = safe { nativeSetStick(right, x, y) }
    fun setTrigger(right: Boolean, value: Float) = safe { nativeSetTrigger(right, value) }
    fun setTouchEnabled(enabled: Boolean) = safe { nativeSetTouchEnabled(enabled) }
    fun clearTouch() = safe { nativeClearTouch() }
}
