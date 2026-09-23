# Диагностическая сборка полного runtime

Это сборка для исследования, **не готовая к прохождению игра**. Проверки
ядра, линковки импортов и `--help` не проверяют загрузку игры или графику.
Полный render-target/EDRAM/resolve/Clear путь ещё не реализован.

## Linux x86-64

Нужны Clang, CMake, Ninja, SDL2 development, Vulkan development и AVX-capable CPU.
Для запуска нужны SDL2, Vulkan loader и драйвер вашей видеокарты. GCC для полного
runtime не поддерживается. Игровые файлы в сборку не входят.

```sh
git submodule update --init tools/XenonRecomp tools/XenosRecomp tools/ffmpeg-xma
git -C tools/XenonRecomp submodule update --init --recursive
git -C tools/XenosRecomp submodule update --init thirdparty/smol-v thirdparty/zstd thirdparty/xxHash
cmake --preset linux-vulkan
cmake --build --preset linux-vulkan --parallel 2
ctest --test-dir build/linux-vulkan --output-on-failure
```

Полная сборка всех файлов `ppc/` существенно дольше самостоятельных GPU-тестов.
Workflow **Full runtime diagnostic build** собирает весь executable с Vulkan/XMA,
проверяет host-тесты и CLI, затем публикует артефакт. Это Debug с assertions,
без отладочных символов; оценивать производительность Release по нему нельзя.
Статус workflow нужно проверять: наличие workflow не означает успешную сборку.

## Установка и запуск своей копии

Сначала распакуйте артефакт в отдельную папку. На Linux после скачивания артефакта:

```sh
chmod +x SonicGenerationsRecomp
./SonicGenerationsRecomp --install /absolute/path/to/your/dump
./SonicGenerationsRecomp --check
python3 test_runtime.py ./SonicGenerationsRecomp --output ./diagnostics
```

При собственной сборке скрипт находится в `scripts/test_runtime.py`.
Игра устанавливается в пользовательское хранилище runtime; `portable.txt` рядом
с executable переключает на локальное хранилище. Не устанавливайте поверх
единственной копии игровых файлов/сохранений. Title Update должен соответствовать
версии исходного XEX, из которой сгенерирован `ppc/`; произвольные TU не проверены.

Скрипт явно включает экспериментальный Vulkan direct-draw режим, сохраняет
stdout/stderr и код завершения. Он не устанавливает игру, не изменяет игровые
файлы, не собирает дамп памяти или игровые ресурсы и не отправляет данные в сеть.
Validation включается отдельным `--validation`, если установлен соответствующий
Vulkan layer. Выйдите из игры обычным способом; Ctrl+C просит процесс завершиться.
Перед публикацией логов проверьте пути/имена пользователя и другую личную информацию.

Отчёт `report.json`, `runtime.log`, версия игры/TU и скриншот первого сбоя нужны
для воспроизведения. Успешный код завершения не доказывает правильность кадра.

## Проверенный результат

Полная Linux x86-64 сборка с Vulkan и XMA прошла в Actions run
[35913674899](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35913674899)
на ревизии `3958e4b`: все 603 PPC translation units, runtime, executable,
тесты ядра/гостевых XEX headers, линковка импортов и тесты diagnostic launcher.
`--help` проверен запуском самого executable. Артефакт:
`linux-x64-diagnostic-runtime` (Ubuntu 24.04, Clang 18, Debug без символов).
Полная Windows-сборка этим workflow не проверялась.

Исправлены монтирование `game:`/`D:` в фактический каталог установки, загрузка
XEX через закреплённый XenonUtils (включая его decrypt/LZX путь), регистрация
секций из декодированного Image и размещение возвращаемых XEX headers в гостевой
памяти. Границы заголовков и entry point проверяются до запуска PPC.
Совпадение base/size/entry **не является** проверкой точной версии XEX.

Эти проверки не запускали игру: полные guest data imports, GPU SDK/EDRAM,
Clear/resolve, backbuffer mapping и остальные графические профили требуют
дальнейшей реализации/проверки. Не считать артефакт готовой играбельной версией.
