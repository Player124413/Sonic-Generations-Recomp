# Сборка / Building

## Требования

- **CMake** ≥ 3.20
- **C++20** компилятор: Clang/clang-cl (GCC/MSVC не поддерживаются полным runtime)
- **SDL2** (для окна/ввода/звука)
- Git (для сабмодулей)
- ~8 GB RAM и ~5 GB на диске (код игры большой)

Windows: Visual Studio 2022 + vcpkg (`sdl2`).
Linux: `clang cmake ninja-build libsdl2-dev`.
macOS: `brew install cmake sdl2`.

## Шаги

```bash
git clone --recursive <repo>
cd Sonic-Generations-Recomp
git submodule update --init --recursive   # если клонировали без --recursive

cmake --preset linux-vulkan
# Полная инструкция и диагностический workflow: TESTING_RUNTIME.md
cmake --build --preset linux-vulkan --parallel 2
```

Тесты (без данных игры):

```bash
ctest --preset linux-vulkan
```

## Установка игры

Нужен **ваш** дамп Xbox 360 версии (ISO/XISO или распакованная папка с
`default.xex` в корне):

```bash
./build/linux-vulkan/SonicGenerationsRecomp/SonicGenerationsRecomp --install /path/to/dump
# с title update:
./build/linux-vulkan/SonicGenerationsRecomp/SonicGenerationsRecomp --install /path/to/dump --update /path/to/default.xexp
```

Файлы копируются в пользовательское хранилище (`GetUserPath`). Чтобы хранить
их рядом с executable, создайте там `portable.txt` **до установки**. Старые
установки в корне исходников автоматически не перемещаются.
Проверка: `--check`. Запуск: без аргументов.

## Регенерация ppc/ (опционально)

`ppc/` уже сгенерирован. Если хотите перегенерировать из своего `default.xex`:

```bash
# положите расшифрованный default.xex в корень репозитория
cmake --build build --target recomp
```

`config.toml` в корне — конфигурация XenonRecomp (адреса CRT-хелперов
определяются автоматически, jump-таблицы лежат в `switch_tables.toml`).

## Примечания

- Сборка ppc/ (~606 файлов) занимает время: на 8 потоков ≈ 10–25 минут.
- Для максимальной производительности используйте Clang + LTO (см. CMakePresets).
- Код игры (default.xex и производные) **нельзя** публиковать/коммитить.

## XMA audio dependency

Полная сборка теперь использует закреплённый submodule `tools/ffmpeg-xma`
(Xenia/FFmpeg XMAFRAMES), а не системный libavcodec. Не забудьте:

```sh
git submodule update --init tools/ffmpeg-xma
```

Он собирается C-компилятором вместе с runtime на Windows/Linux x86-64.
Старый флаг `SONIC_GENERATIONS_FFMPEG_XMA` больше не нужен. Подробности и
standalone-тесты без полной PPC-сборки: [AUDIO.md](AUDIO.md).

## Optional Vulkan backend

The resource/transfer/WSI backend is opt-in with
`-DSONIC_GENERATIONS_ENABLE_VULKAN=ON` and requires Vulkan SDK/loader plus SDL2.
Select it before launch with `SONIC_RENDER_BACKEND=vulkan`. It currently uploads
resources and presents a host clear; it does not render game draws yet.
See [VULKAN.md](VULKAN.md) for execution tests and limitations.
