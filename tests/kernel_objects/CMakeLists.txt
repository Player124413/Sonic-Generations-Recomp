cmake_minimum_required(VERSION 3.20)
project(KernelObjectTests LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()
find_package(SDL2 REQUIRED)
find_package(Threads REQUIRED)
set(ROOT "${CMAKE_CURRENT_LIST_DIR}/../..")
add_executable(kernel_object_tests object_tests.cpp
    "${ROOT}/SonicGenerationsRecomp/kernel/object_manager.cpp"
    "${ROOT}/SonicGenerationsRecomp/kernel/xdm.cpp"
    "${ROOT}/SonicGenerationsRecomp/kernel/heap.cpp"
    "${ROOT}/SonicGenerationsRecomp/kernel/memory.cpp"
    "${ROOT}/SonicGenerationsRecomp/cpu/guest_thread.cpp"
    "${ROOT}/tools/o1heap/o1heap.c"
    "${ROOT}/tools/XenosRecomp/thirdparty/xxHash/xxhash.c")
target_include_directories(kernel_object_tests PRIVATE
    "${ROOT}" "${ROOT}/SonicGenerationsRecomp"
    "${ROOT}/tools/XenonRecomp/XenonUtils"
    "${ROOT}/tools/XenonRecomp/thirdparty/fmt/include"
    "${ROOT}/tools/XenonRecomp/thirdparty/simde"
    "${ROOT}/tools/XenosRecomp/thirdparty/xxHash"
    "${ROOT}/tools/o1heap")
target_link_libraries(kernel_object_tests PRIVATE SDL2::SDL2 Threads::Threads)
target_compile_definitions(kernel_object_tests PRIVATE SDL_MAIN_HANDLED)
if(NOT MSVC)
    target_compile_options(kernel_object_tests PRIVATE -march=sandybridge -fno-strict-aliasing)
endif()
add_test(NAME kernel_object_tests COMMAND kernel_object_tests)
set_tests_properties(kernel_object_tests PROPERTIES TIMEOUT 60)
