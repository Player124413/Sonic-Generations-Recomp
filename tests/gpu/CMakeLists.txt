cmake_minimum_required(VERSION 3.20)
project(GuestGpuHookTests LANGUAGES CXX)
enable_testing()
find_package(Threads REQUIRED)
set(ROOT "${CMAKE_CURRENT_LIST_DIR}/../..")
add_library(gpu_hooks STATIC "${ROOT}/SonicGenerationsRecomp/gpu/guest_hooks.cpp")
target_compile_features(gpu_hooks PUBLIC cxx_std_20)
target_include_directories(gpu_hooks PUBLIC
    "${ROOT}" "${ROOT}/SonicGenerationsRecomp"
    "${ROOT}/tools/XenonRecomp/thirdparty/simde")
add_library(mock_generated STATIC mock_originals.cpp)
target_link_libraries(mock_generated PRIVATE gpu_hooks)
add_executable(guest_hooks_tests guest_hooks_tests.cpp)
target_link_libraries(guest_hooks_tests PRIVATE gpu_hooks mock_generated Threads::Threads)
add_test(NAME guest_hooks_tests COMMAND guest_hooks_tests)
find_package(Python3 REQUIRED COMPONENTS Interpreter)
add_test(NAME guest_entry_evidence
    COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_LIST_DIR}/test_entry_evidence.py")
