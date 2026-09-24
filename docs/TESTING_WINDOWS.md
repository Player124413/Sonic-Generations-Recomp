# Windows x64: диагностическая версия

Linux и Python для запуска этого пакета не нужны. Требуются Windows x64,
процессор с AVX и драйвер видеокарты с Vulkan 1.2 и необходимыми renderer features.
Это незавершённый runtime, не версия с подтверждённой играбельностью.

## Полная автоматическая проверка одной ревизии

Workflow [Verify Windows Vulkan runtime](https://github.com/Player124413/Sonic-Generations-Recomp/actions/workflows/verify-runtime.yml)
вызывает существующие проверки как reusable workflows на **одном commit SHA**:

- сборка Windows EXE, runtime-тесты, CLI smoke test и упаковка;
- kernel/XAM и CPU GPU-capture тесты на Windows/Linux;
- Vulkan headless/WSI с validation layer на Linux/lavapipe;
- XMA, включая реальный сжатый образец, на Windows/Linux;
- проверка предоставленного shader cache и безопасности shader tools.

Запуск — `workflow_dispatch` для выбранной ветки; изменения самого общего workflow
также запускают его автоматически. Итоговая таблица находится в Summary.
Пропущенная, отменённая, отсутствующая или упавшая обязательная проверка не даёт
общий успех. Поведение отчёта отдельно проверяется unit-тестами.
Артефакт Windows остаётся диагностическим: общий зелёный CI **не означает**
проверку игрового кадра, отсутствие известных ограничений или готовность порта.
README автоматически не помечается галочками. Старые зелёные запуски других
ревизий не подставляются в итоговую таблицу.

## Проверенная сборка

Windows CI [35924240044](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044)
на коммите `43130a1` успешно собрал EXE, выполнил проверки ядра и линковки
импортов, запустил `--help` до и после упаковки. POSIX-тесты Python-лаунчера
на Windows пропускаются; это не проверка запуска игры или `.cmd` на игровых данных.

[Скачать Windows ZIP](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044/artifacts/10778986806)
(артефакты Actions имеют ограниченный срок хранения; для скачивания может
потребоваться вход в GitHub).

В EXE встроен предоставленный кэш из 6404 шейдерных модулей — повторно
компилировать шейдеры для этого пакета не нужно.

## Установка и диагностика

1. В успешном workflow **Windows x64 runtime** скачайте артефакт
   `windows-x64-diagnostic-runtime` и распакуйте ZIP полностью, включая DLL.
2. Перетащите папку собственного Xbox 360 дампа (с `default.xex`) или ISO на
   `Install-Game.cmd`. Дождитесь кода завершения 0.
3. Запустите `Run-Diagnostic.cmd`. Лог будет в `diagnostics\runtime.log`, код
   завершения — в `diagnostics\exit-code.txt`. Следующий запуск перезапишет их.
4. Перед отправкой логов проверьте личные данные/пути. Скрипты ничего не загружают
   в сеть. Игровые файлы и дампы памяти отправлять не нужно.

Установка хранится в `%LOCALAPPDATA%\SonicGenerationsRecomp`. Для portable-режима
создайте пустой `portable.txt` рядом с EXE **до установки**. Не устанавливайте
поверх единственной копии игровых файлов или сохранений.

## Самостоятельная сборка

Visual Studio 2022 с C++ desktop tools, компонентом ClangCL и Windows SDK;
CMake >= 3.21, Git, vcpkg. В PowerShell задайте `VCPKG_ROOT` на каталог vcpkg:

```powershell
& "$env:VCPKG_ROOT/vcpkg.exe" install sdl2:x64-windows-static vulkan-headers:x64-windows-static vulkan-loader:x64-windows-static
git submodule update --init tools/XenonRecomp tools/XenosRecomp tools/ffmpeg-xma
git -C tools/XenonRecomp submodule update --init --recursive
git -C tools/XenosRecomp submodule update --init thirdparty/smol-v thirdparty/zstd thirdparty/xxHash
cmake --preset windows-clang
cmake --build --preset windows-clang --parallel 2
ctest --preset windows-clang
```

CI собирает диагностический вариант без оптимизации PPC для быстрого выявления
ошибок. Это не измерение производительности Release. Проверки ядра, линковки и
`--help` не означают проверку игрового кадра. Ограниченная цветовая связка
render target → resolve → выбранный backbuffer реализована; её профиль,
Vulkan-проверки и оставшиеся ограничения перечислены в [GPU.md](GPU.md).
Single-sample D24S8 depth/stencil реализован в ограниченном профиле; D24FS8,
MSAA/MRT, depth resolve/sampling и CPU/GPU coherence ещё не завершены.

Привязаны семь переменных ядра: указатель на модуль, timestamp bundle,
указатели отключённых debug/cert monitors и HLE-дескрипторы event/semaphore/thread.
Гостевые тела объектов, ссылки, независимые дубликаты handles и PCR/TEB потока
подключены к менеджеру объектов. Native callbacks дескрипторов и другие типы
(например, file/timer/mutant) пока не поддерживаются. Неизвестные импорты по-прежнему
отклоняются, а не получают фиктивные адреса. Подробности и тестовый профиль:
[XEX_IMPORT_BINDING.md](XEX_IMPORT_BINDING.md). Успешный CI не подтверждает
загрузку уровня, правильную графику или прохождение игры.


## Проверки этого этапа

- Полный Windows runtime и синтетические XEX/PE, kernel/import tests:
  [35924240044](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044), успешно.
- Регрессия полного Linux runtime:
  [35924240050](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240050), успешно.
- GPU CPU-тесты Windows/Linux:
  [35923949884](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35923949884), успешно.
- Vulkan с validation и чтением пикселей после clear/draw:
  [35923949966](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35923949966), успешно.
- Локальные GPU-тесты: 8/8 обычные и 8/8 ASan/UBSan.

Описание границ реализации: [XEX_IMPORT_BINDING.md](XEX_IMPORT_BINDING.md) и
[GPU.md](GPU.md) в репозитории. Реальная игра в этих проверках не запускалась.
