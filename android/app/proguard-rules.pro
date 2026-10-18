# SDLActivity and the JNI bridge are referenced from native code / the
# Android runtime by name; keep them and their native methods.
-keep class org.libsdl.app.** { *; }
-keep class com.sonicgen.recomp.NativeBridge { *; }
-keepclassmembers class com.sonicgen.recomp.GameActivity { *; }
