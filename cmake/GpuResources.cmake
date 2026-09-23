include_guard(GLOBAL)
add_library(SonicGpuResources STATIC
    "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp/gpu/resource_conversion.cpp")
target_compile_features(SonicGpuResources PUBLIC cxx_std_20)
target_include_directories(SonicGpuResources PUBLIC "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp")
