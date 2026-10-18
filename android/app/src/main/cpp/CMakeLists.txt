# Android native build entry point (invoked by Gradle externalNativeBuild).
#
# Builds SDL2 (shared, for SDLActivity) and the full runtime as libmain.so.
# The desktop entry point is the repository root CMakeLists; this file only
# prepares Android-specific dependencies and optimisation flags, then adds
# the root project, which produces the `main` shared library target.
cmake_minimum_required(VERSION 3.22)
project(sonic_generations_android C CXX)

get_filename_component(SONIC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../../../.." ABSOLUTE)
message(STATUS "Sonic Generations Android build, root: ${SONIC_ROOT}")

include(FetchContent)

# --- SDL2 -------------------------------------------------------------------
# Pinned release tarball. The matching Java sources (org.libsdl.app) are
# vendored under app/src/main/java, so this download is the only network
# dependency of the Android build.
if(NOT TARGET SDL2::SDL2)
    set(SDL_SHARED ON CACHE BOOL "" FORCE)
    set(SDL_STATIC OFF CACHE BOOL "" FORCE)
    set(SDL_TEST OFF CACHE BOOL "" FORCE)
    set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
    FetchContent_Declare(sdl2
        URL https://codeload.github.com/libsdl-org/SDL/tar.gz/refs/tags/release-2.30.9
        URL_HASH SHA256=682a055004081e37d81a7d4ce546c3ee3ef2e0e6a675ed2651e430ccd14eb407)
    FetchContent_MakeAvailable(sdl2)
endif()

# --- Optimisations -----------------------------------------------------------
# Release phones get -O3, per-function sections + GC of unused code, hidden
# visibility for the runtime's own targets (root project targets inherit
# compile options added here before add_subdirectory), and 16 KiB page
# alignment required by Android 15+ on arm64.
add_compile_options($<$<CONFIG:Release>:-O3>)
add_compile_options(-ffunction-sections -fdata-sections)
add_link_options(-Wl,--gc-sections -Wl,-z,max-page-size=16384)

option(SONIC_ANDROID_LTO "ThinLTO for the Android runtime (slow, large link)" OFF)
if(SONIC_ANDROID_LTO)
    add_compile_options($<$<CONFIG:Release>:-flto=thin>)
    add_link_options($<$<CONFIG:Release>:-flto=thin>)
endif()

# Vulkan is the only graphics API of this port (docs/ANDROID.md).
set(SONIC_GENERATIONS_ENABLE_VULKAN ON CACHE BOOL "" FORCE)

add_subdirectory(${SONIC_ROOT} sonic-recomp-build)
