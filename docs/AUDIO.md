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
Нужны точные guest context layout, packet/bit offsets, loop/skip semantics,
запись planar BE PCM обратно в guest ring buffer, уведомления завершения и
синхронизация. Нельзя отправлять декодированный PCM напрямую в SDL вместо
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
