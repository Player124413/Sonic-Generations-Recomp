# Игровой XMA audio path

Теперь runtime использует **XMAFRAMES** из закреплённого форка Xenia/FFmpeg,
а не обычный пакетный декодер системной FFmpeg. Submodule `tools/ffmpeg-xma`:
`15ece0882e8d5875051ff5b73c5a8326f7cee9f5`.

## Путь данных

```
guest XMACreateContext -> 64-byte BE context in physical heap
PPC U32 MMIO write -> Device::Write(kick mask)
 -> Stream::Work(context, guest-memory translator)
 -> assembly of one frame across packets/input buffers
 -> FrameDecoder / FFmpeg XMAFRAMES (persistent overlap state)
 -> interleaved signed-16 BE PCM in guest output ring
 -> original guest XAudio mixer / resampler / categories
 -> XAudioSubmitRenderDriverFrame (planar BE float, 6 channels)
 -> SDL output / MasterVolume
```

PCM не отправляется из декодера прямо в SDL. Игровой микшер остаётся на своём
месте, включая ресемплинг и позиционирование. Context pointers, counts, valid
bits и ring offsets обновляются в гостевой памяти. MMIO — little-endian;
контексты и PCM — big-endian.

Реализованы:
- 320 контекстов, выделение, release/reuse и clear/reset;
- маски kick/lock/clear; kicks исполняются синхронно под runtime mutex;
- packet skip (перемежающиеся потоки), 15-bit frame length, продолжение фрейма
  через границу пакета и не смежные input buffers, включая разрыв length prefix;
- output ring wrap/backpressure; PCM, не поместившийся в кольцо, сохраняется;
- quota 128-sample subframes, начальный skip, конечные/бесконечные loops,
  subframe loop bounds; overlap-состояние декодера сохраняется между фреймами;
- насыщение float PCM до signed-16, interleave и byte swap;
- проверки границ, ошибки в status контекста + runtime log вместо host abort.

## Сборка

```
git submodule update --init tools/ffmpeg-xma
cmake -S tests/audio -B build-audio
cmake --build build-audio --config Debug
ctest --test-dir build-audio -C Debug --output-on-failure
```

Полная сборка runtime подключает backend **по умолчанию**. Старый необязательный
`SONIC_GENERATIONS_FFMPEG_XMA` / системный пакетный wrapper удалён: смешивать
две версии libavcodec в одном executable нельзя. Нужен C и C++20 compiler;
Windows — ClangCL, Linux — GCC/Clang. Закреплённые конфигурации FFmpeg пока
поддерживают Windows/Linux x86-64, не macOS/ARM64.

## Проверки и границы подтверждённого

- xma_decoder_tests: реальный XMAFRAMES открывается при всех hardware rates,
  malformed frames отвергаются.
- xma_device_tests: allocator, registers, BE/LE, clear, guest error status.
- xma_stream_tests: реальный транспорт с управляемым PCM decoder для ring wrap,
  split prefix, delayed input, finite/infinite loop, skip и MMIO-to-PCM пути.
- xma_sample_test: дополнительное декодирование настоящего RIFF XMA файла
  (1 stream, 1/2 channels); проверяет завершение и наличие ненулевого PCM.
  CI использует публичный regression sample FFmpeg, проверяет его MD5,
  не коммитит и не загружает файл/PCM как artifact.

Эти проверки **не равны проверке всех звуков Sonic Generations**. Нужен тест
на легальном дампе игры: музыка, речь, эффекты, смена уровней, пауза, длительные
loops, конец потока. Подфреймовые loop semantics и точные аппаратные тайминги
требуют проверки на потоках игры; синхронный backend не эмулирует отдельный
DSP interrupt scheduler. Физические адреса используют текущую identity mapping
рантайма, а не полную систему физических alias Xbox 360.

`XAudioGetVoiceCategoryVolume` возвращает BE float 1.0, MasterVolume применяется
в SDL один раз. Системные overrides категорий/ducking отдельно не эмулируются;
игровые уровни громкости обрабатывает гостевой микшер.

Источники формата: Xenia `src/xenia/apu/xma_context.h`, `xma_context.cc`,
`xma_register_table.inc`; Microsoft XMA format definitions (`xma2defs.h`).
FFmpeg fork лицензирован LGPL-2.1-or-later (данная конфигурация без GPL/nonfree).
При распространении статической сборки приложите лицензии и соответствующие
исходники/материалы для выполнения лицензионных требований. См. THIRD_PARTY.md.
