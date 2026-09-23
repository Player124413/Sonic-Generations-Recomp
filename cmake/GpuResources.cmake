include_guard(GLOBAL)
add_library(SonicGpuResources STATIC
    "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp/gpu/resource_conversion.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp/gpu/shader_bindings.cpp")
target_compile_features(SonicGpuResources PUBLIC cxx_std_20)
target_include_directories(SonicGpuResources PUBLIC "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp")

set(_xxhash "${CMAKE_CURRENT_LIST_DIR}/../tools/XenosRecomp/thirdparty/xxHash")
if(NOT EXISTS "${_xxhash}/xxhash.h")
    message(FATAL_ERROR "Initialize tools/XenosRecomp and its thirdparty/xxHash submodule")
endif()
target_include_directories(SonicGpuResources PRIVATE "${_xxhash}")
