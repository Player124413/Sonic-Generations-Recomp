// JNI bridge between the Android touch overlay (Kotlin) and the native
// virtual gamepad (hid/touch_input). Class: com.sonicgen.recomp.NativeBridge.
// Function names must match the `external fun` declarations in NativeBridge.kt.
#ifdef __ANDROID__
#include <jni.h>

#include <hid/touch_input.h>

extern "C"
{
    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeSetButtons(JNIEnv*, jclass, jint mask)
    {
        hid::touch::SetButtons(uint16_t(mask));
    }

    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeSetButton(JNIEnv*, jclass, jint button, jboolean pressed)
    {
        hid::touch::SetButton(hid::touch::Button(uint16_t(button)), pressed == JNI_TRUE);
    }

    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeSetStick(JNIEnv*, jclass, jboolean right, jfloat x, jfloat y)
    {
        hid::touch::SetStick(right == JNI_TRUE, x, y);
    }

    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeSetTrigger(JNIEnv*, jclass, jboolean right, jfloat value)
    {
        hid::touch::SetTrigger(right == JNI_TRUE, value);
    }

    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeSetTouchEnabled(JNIEnv*, jclass, jboolean enabled)
    {
        hid::touch::SetEnabled(enabled == JNI_TRUE);
    }

    JNIEXPORT void JNICALL
    Java_com_sonicgen_recomp_NativeBridge_nativeClearTouch(JNIEnv*, jclass)
    {
        hid::touch::Clear();
    }
}
#endif
