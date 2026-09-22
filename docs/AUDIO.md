# FFmpeg XMA backend — текущий статус

Добавлен host-side `xma::Decoder` (`apu/xma_decoder.*`) на libavcodec/libavutil
FFmpeg 5+. Поддерживает XMA1/XMA2, отдельное состояние для каждого потока,
передачу пакетов, drain/flush, reset и interleaved float PCM. Это библиотечный
API, не запуск внешнего ffmpeg.exe. Память packet/extradata имеет padding,
ошибки декодера возвращаются исключениями, ресурсы освобождаются через RAII.

Сборка runtime с backend: `-DSONIC_GENERATIONS_FFMPEG_XMA=ON`, нужны pkg-config
и development-библиотеки libavcodec>=59, libavutil>=57 (на Windows также нужен
совместимый с выбранным CRT/toolchain пакет FFmpeg с .pc-файлами).
По умолчанию опция OFF; отсутствующая зависимость при ON — ошибка CMake.

Отдельная проверка без сборки PPC:

```
cmake -S tests/audio -B build-audio
cmake --build build-audio
ctest --test-dir build-audio --output-on-failure
```

**Это ещё не звук в игре.** Backend пока не вызывается из `xma::OnMmioWrite`.
Добавлены реальные guest-контексты и MMIO-маршрутизация (ниже), но нужны
packet/bit offsets, loop/skip semantics, запись **interleaved signed-16 BE PCM**
обратно в guest ring buffer, уведомления завершения и синхронизация.
Это не тот же формат, что final planar float buffer в XAudioSubmitFrame. Нельзя отправлять декодированный PCM напрямую в SDL вместо
игрового микшера — это обойдёт эффекты, категории и позиционирование.
Для Decode нужны реальные FFmpeg extradata и пакеты, не целый WAV/RIFF.
Не реализованы demuxer, ресемплинг и автоматическое определение заголовка.

`XAudioGetVoiceCategoryVolume` больше не void-заглушка: двухаргументный ABI
(как в Xenia xboxkrnl_audio.cc), запись BE float 1.0, код статуса.
Это нейтральный уровень, а **не точная реализация системных категорий**.
MasterVolume уже применяется один раз в SDL. Маршрутизация категорий остаётся
следующим этапом; ложные изменения маски громкости не генерируются.

Тесты проверяют наличие кодеков и отбраковку некорректных параметров, но не
качество звука: легальный XMA fixture пока не предоставлен. FFmpeg не vendored;
при распространении соблюдайте лицензию конкретной сборки (LGPL/GPL).

## Гостевые контексты и MMIO: реализован транспорт, не декодирование

- 320 контекстов по 64 байта, общий массив с выравниванием 256 байт в guest
  physical heap. XMACreateContext возвращает адрес, а не прежний номер 1..N.
- Контроль диапазона/выравнивания при release; очистка памяти при освобождении;
  повторный Init не сбрасывает активные контексты; null out pointer отвергается.
- Register 0x1800 возвращает адрес массива; 0x1818 — вращающийся индекс.
- Kick/lock/clear register groups распознаются; clear сбрасывает valid bits и
  кольцевые offsets без уничтожения параметров потока.
- Перехват U32 load/store через ppc_compat.h (включая обычный PPC_LOAD_U32,
  которым игра выполняет lwbrx для MMIO). Генерированный ppc/ не изменён.
  MMIO LE, структуры BE; остальные адреса обслуживаются прежним способом.
- **Kick выделенного контекста бросает явную ошибку неподдерживаемого
  frame-декодирования**, вместо тихого успеха и бесконечного ожидания PCM.
  Это намеренно незавершённый путь, не готовый аудиодвижок.

Почему нельзя просто вызвать Decoder::Decode: игра хранит битовые смещения,
частичные фреймы через границы двух input buffers, loop/skip параметры.
Xenia использует не стандартный AV_CODEC_ID_XMA2, а собственный
AV_CODEC_ID_XMAFRAMES в модифицированной FFmpeg. Полная интеграция требует
такого frame-decoder API либо эквивалентной корректной реализации поверх
пакетного кодека; подмена адресов/пакетов и обнуление PCM не подходят.

Проверенные исходники:
- https://github.com/xenia-project/xenia/blob/master/src/xenia/apu/xma_context.h
- https://github.com/xenia-project/xenia/blob/master/src/xenia/apu/xma_context.cc
- https://github.com/xenia-project/xenia/blob/master/src/xenia/apu/xma_decoder.cc
- https://github.com/xenia-project/xenia/blob/master/src/xenia/apu/xma_register_table.inc

Standalone xma_device_tests проверяет allocator, exhaustion/reuse, LE/BE,
clear/status registers, отказ неподдерживаемого kick и обычную память.
Полная runtime-сборка и воспроизведение игры этими тестами не проверяются.
