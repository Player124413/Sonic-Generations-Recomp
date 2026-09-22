# Kept independent of guest runtime to allow standalone decoder tests.
find_package(PkgConfig REQUIRED)
pkg_check_modules(FFMPEG_XMA REQUIRED IMPORTED_TARGET libavcodec>=59 libavutil>=57)
add_library(SonicXmaDecoder STATIC "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp/apu/xma_decoder.cpp")
target_compile_features(SonicXmaDecoder PUBLIC cxx_std_20)
target_include_directories(SonicXmaDecoder PUBLIC "${CMAKE_CURRENT_LIST_DIR}/../SonicGenerationsRecomp")
target_link_libraries(SonicXmaDecoder PRIVATE PkgConfig::FFMPEG_XMA)
