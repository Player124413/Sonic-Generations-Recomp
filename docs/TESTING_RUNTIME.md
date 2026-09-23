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
