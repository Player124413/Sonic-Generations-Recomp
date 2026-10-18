plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

android {
    namespace = "com.sonicgen.recomp"
    compileSdk = 34
    ndkVersion = "26.3.11579264"

    defaultConfig {
        applicationId = "com.sonicgen.recomp"
        // Vulkan requires API 24+; 26 keeps SAF/DocumentsContract simple.
        minSdk = 26
        targetSdk = 34
        versionCode = 1
        versionName = "0.1.0"

        externalNativeBuild {
            cmake {
                // The recompiled game is ARM64-first (SIMDe/NEON). Add
                // "x86_64" locally if you need the emulator; the runtime is
                // portable, but release builds ship arm64-v8a only.
                abiFilters += listOf("arm64-v8a")
                arguments += listOf("-DANDROID_STL=c++_shared")
            }
        }
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
        }
    }

    externalNativeBuild {
        cmake {
            path = file("src/main/cpp/CMakeLists.txt")
            version = "3.22.1"
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions {
        jvmTarget = "17"
    }

    packaging {
        jniLibs {
            // Keep .so files uncompressed and page-aligned for direct
            // loading (also required for 16 KiB pages).
            useLegacyPackaging.set(false)
        }
    }
}
