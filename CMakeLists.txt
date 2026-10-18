cmake_minimum_required(VERSION 3.20)

project(SonicGenerationsRecomp-ALL)

set(SONIC_GENERATIONS_RECOMP_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(SONIC_GENERATIONS_TOOLS_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/tools)
set(SONIC_GENERATIONS_RECOMP_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (NOT CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(FATAL_ERROR "The full runtime requires Clang/clang-cl (anonymous Xbox ABI aggregates are not supported by GCC/MSVC).")
endif()
set(BUILD_SHARED_LIBS OFF)

if (POLICY CMP0141)
    cmake_policy(SET CMP0141 NEW)
    set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

if (CMAKE_OSX_ARCHITECTURES)
    set(SONIC_GENERATIONS_ARCHITECTURE ${CMAKE_OSX_ARCHITECTURES})
elseif(CMAKE_SYSTEM_PROCESSOR)
    set(SONIC_GENERATIONS_ARCHITECTURE ${CMAKE_SYSTEM_PROCESSOR})
else()
    set(SONIC_GENERATIONS_ARCHITECTURE ${CMAKE_HOST_SYSTEM_PROCESSOR})
endif()
string(TOLOWER "${SONIC_GENERATIONS_ARCHITECTURE}" SONIC_GENERATIONS_ARCHITECTURE)
message(STATUS "Detected architecture: ${SONIC_GENERATIONS_ARCHITECTURE}")

if (SONIC_GENERATIONS_ARCHITECTURE STREQUAL "x86_64" OR SONIC_GENERATIONS_ARCHITECTURE STREQUAL "amd64")
    # The recompiled VMX code assumes AVX-capable hardware; Sandy Bridge is
    # the same baseline used by Unleashed Recompiled.
    add_compile_options(-march=sandybridge)
endif()

if (NOT MSVC)
    add_compile_options(-fno-strict-aliasing)
endif()

# Vendored tools (XenonRecomp/XenosRecomp and their dependencies).
# On Android the host recompiler tools (XenonRecomp/XenonAnalyse binaries)
# are never built, but the runtime still links XenonUtils and the shared
# thirdparty targets (fmt, tomlplusplus, xxHash, disasm) that XenonRecomp's
# root would normally provide. Configure exactly those, with the same
# THIRDPARTY_ROOT variable XenonUtils' CMakeLists expects.
if (ANDROID)
    set(_xenon_root ${SONIC_GENERATIONS_TOOLS_ROOT}/XenonRecomp)
    if (NOT EXISTS ${_xenon_root}/XenonUtils/CMakeLists.txt)
        message(FATAL_ERROR "Android build needs tools/XenonRecomp (run: git submodule update --init --recursive)")
    endif()
    set(THIRDPARTY_ROOT ${_xenon_root}/thirdparty)
    add_subdirectory(${THIRDPARTY_ROOT} ${CMAKE_BINARY_DIR}/xenon-thirdparty EXCLUDE_FROM_ALL)
    add_subdirectory(${_xenon_root}/XenonUtils ${CMAKE_BINARY_DIR}/XenonUtils EXCLUDE_FROM_ALL)
    unset(_xenon_root)
else()
    add_subdirectory(${SONIC_GENERATIONS_TOOLS_ROOT}/XenonRecomp EXCLUDE_FROM_ALL)
endif()

# Some fmt versions rely on transitive includes for malloc/free which newer
# toolchains no longer provide.
if (TARGET fmt AND NOT MSVC)
    target_compile_options(fmt PRIVATE -include cstdlib)
endif()

# Host dependencies. The Android build provides SDL2::SDL2 via FetchContent
# before this point, in which case no package lookup is needed.
if (NOT TARGET SDL2::SDL2)
    find_package(SDL2 REQUIRED)
endif()

# o1heap (guest heap allocator), vendiled from Unleashed Recompiled's copy.
add_library(o1heap STATIC ${SONIC_GENERATIONS_TOOLS_ROOT}/o1heap/o1heap.c)
target_include_directories(o1heap PUBLIC ${SONIC_GENERATIONS_TOOLS_ROOT}/o1heap)

# Core projects.
add_subdirectory(SonicGenerationsRecompLib)
add_subdirectory(SonicGenerationsRecomp)

if (NOT ANDROID)
    enable_testing()
    add_subdirectory(tests)
endif()
