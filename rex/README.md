# Windows: переход на ReXGlue + собственную графику

**Новая согласованная архитектура:** ReXGlue предоставляет ядро/XAM, XMA,
ввод, VFS и гостевую память. Собственная реализация заменяет только GPU.
Сейчас целевая платформа — Windows x64, графический API — Vulkan.

Это отдельная миграционная сборка. Старый `SonicGenerationsRecomp.exe` продолжает
использовать прежнее ядро: переименование DLL или запуск старого Launcher.cmd
не переводит его на ReXGlue. Новый EXE — **SonicGenerationsRecomp-ReXGlue.exe**.

## Что реализовано в этом этапе

- Host на настоящих `ReXApp` / `RuntimeConfig` SDK **0.10.0**.
- Инициализация ядра, аудио и ввода остаётся у SDK без подмены нашими HLE-функциями.
- `LoadGpuPlugin("xenos", "vulkan")`: строго Vulkan, не автоматический D3D12.
- `SONIC_REX_GRAPHICS_MODE=reference` (по умолчанию): штатный Xenos.
- `SONIC_REX_GRAPHICS_MODE=forward`: собственный `IGraphicsSystem`, передающий
  presentation, GPU setup, interrupt callback, ring buffer, read-pointer
  writeback, shader storage и shutdown исходному Xenos.
- Контрактные тесты с SDK-интерфейсом и тестовым backend: параметры, ошибки,
  presenter/provider, teardown, локальные пути. Это **не тест работы Xenos/GPU**.
- Режимы `shadow` и `native` пока отвергаются, а не маскируются под reference.

**Пока не реализованы:** второе окно, полное нативное покрытие Sonic,
покадровое сравнение, замена Xenos, Plume-интеграция. Собственный backend подключён
в экспериментальном offscreen-режиме (см. раздел тестирования ниже). `forward` — это проверяемая
точка подключения, а не готовый shadow mode и не сокращение GPU-нагрузки.

## Сборка

Workflow **Windows ReXGlue migration** по push проверяет host-контракты с
SDK, собранным из закреплённого исходного commit с Vulkan=ON / D3D12=OFF и пытается собрать настоящий
EXE с PPC-кандидатом. Ручной запуск с `build_game=false` ограничивается контрактами;
`build_game=true` включает также EXE. Используется PPC-кандидат
из указанного пользователем проекта, также закреплённым на commit SHA.
Оба источника записаны в `dependencies.json`. Перед большой сборкой отдельно
компилируются настоящий host и первый generated TU для ранней проверки ABI.

Исходный проект использовал модифицированный SDK. **Совместимость его PPC с
официальным SDK не предполагается заранее:** ошибка компиляции/линковки
блокирует выдачу пакета. Не применять автоматически его большие SDK-патчи,
особенно tolerant-dispatch, только чтобы обойти ошибки.

При успехе полного режима артефакт — `windows-x64-rexglue-reference-candidate`.
Успешные compile/link/`--help` не доказывают меню, уровень или прохождение.

Локально, из Developer PowerShell с ClangCL:

```powershell
cmake -S rex -B build-rex -G "Visual Studio 17 2022" -A x64 -T ClangCL `
  -DCMAKE_PREFIX_PATH="C:/SDK/rexglue-vulkan-install" `
  -DSONIC_REX_BUILD_GAME=ON `
  -DSONIC_REX_GENERATED_DIR="C:/reference/port/generated/default"
cmake --build build-rex --config Release --parallel 2
ctest --test-dir build-rex -C Release --output-on-failure
```

Старый каталог `ppc/` создавался XenonRecomp и **не является drop-in входом**
для ABI ReXGlue. Его не смешиваем с новым runtime. В CI используем готовый
кандидат из reference-проекта, поэтому XEX в workflow загружать не нужно.
Если кандидат несовместим, потребуется отдельно подготовить совместимый
codegen, а не объявлять такой пакет готовым. Инструменты и исходный PPC старого
пути пока сохранены для сравнения и отката.

## Игровые данные и запуск

Распакуйте новый пакет отдельно и разместите копию установленной игры в
`assets` рядом с новым EXE. Запуск — **Run-ReXGlue.cmd**. ISO-установщик в новом
host ещё не перенесён; можно использовать уже извлечённые данные старой сборки.

```text
SonicGenerationsRecomp-ReXGlue.exe
rexruntime.dll / rexgpu-xenos.dll / остальные библиотеки SDK
Run-ReXGlue.cmd
assets/
  default.xex
  ... игровые ресурсы ...
  rex-user/          # корень пользовательских данных SDK, включая сохранения
  rex-cache/
  rex-runtime.toml
diagnostics/
```

Весь новый пользовательский корень находится внутри `assets`. Внутреннюю
структуру сохранений определяет VFS SDK. Старые `assets/save/SYS-DATA` и
`assets/config.toml` не перезаписываются; совместимость форматов сохранений и
их перенос ещё не проверены. Не переносите единственную копию без backup.
Логи запуска: `diagnostics/rex-runtime.log`, `rex-exit-code.txt`; SDK также может
вести собственные логи. Никакие данные игры или логи автоматически не отправляются.

## Порядок следующих этапов

1. **Reference gate:** совместимый codegen, сборка и запуск Sonic на Xenos/Vulkan
   с SDK-ядром, звуком, вводом и VFS. Зафиксировать ревизии и сцену.
2. **Shadow infrastructure:** перехват именно Sonic D3D entry points, вызов
   оригинала ровно один раз, безопасные снимки данных с гостевой памятью SDK.
   Старые GPU hooks связаны с `g_memory` старого runtime — их нельзя просто линковать.
3. **Первый native Present:** второе окно, clear, без отключения исходного Xenos.
4. **2D, затем 3D:** шейдеры, текстуры, layout, ресурсы, состояния и синхронизация.
   У Sonic не «31+4 шейдера» Rayman: имеющиеся 6404 модуля — отдельный вход, ABI
   и способ их использования в новом native пути нужно проверить.
5. **Сравнение:** один guest frame ID для обеих картинок, одинаковые размеры,
   цветовое пространство и alpha, зафиксированные допуски. Таймер двух окон
   сам по себе не обеспечивает сопоставимость кадров.
6. **Replace gate:** отключить Xenos только после проверок нужных сцен и сохранений.
   Plume — кандидат RHI для Vulkan; решение и интеграция ещё впереди.

**Обновление:** Rayman на `5ab44ae94326b975b4f38bc3b927d62dbca4c72c` уже содержит
нативный Vulkan renderer и `docs/NATIVE_RENDERER.md`. Старый раздел PROGRESS
отстал. См. [свежий разбор](../docs/RAYMAN_NATIVE_REVIEW.md). Не переносим
его адреса, UbiArt vertex layouts или шейдерный ABI без проверки Sonic.
Замена Xenos также требует guest GPU protocol (в Rayman это rexgpu-null),
а не просто обнуления `config.graphics`.

## Зависимости и лицензии

Официальный SDK: BSD-3-Clause с производными Xenia и собственными сторонними
зависимостями; уведомление сохранено в `licenses/ReXGlue-BSD-3-Clause.txt`.
Уведомления SDK сохраняются в пакете. SDK/codegen не включены в исходники нашего
репозитория; workflow получает зафиксированные внешние версии. Подключение
ReXGlue разрешено пользователем как новая архитектура, отменяющая прежний запрет.


## Исправление Windows-линковки

В `36157340577` все generated PPC units скомпилировались, но LLVM оставил вызов
C23 `roundevenf`, которого нет в Windows UCRT на runner. `src/roundeven.cpp`
предоставляет этот символ для Windows: округление binary32 к ближайшему целому,
ничья к чётному, независимо от текущего host rounding mode, с сохранением
знака нуля. Это не `roundf` (у него другое правило ничьей) и не `nearbyintf`
(он зависит от fenv). Проверки выполняются до большой PPC-сборки и покрывают
400000 псевдослучайных значений, границы, NaN/Inf и все четыре режима округления;
на Windows дополнительно вызывается сам экспортируемый C-символ.

## Sonic D3D hooks в новом host

`gpu_hooks.cpp` подключает все 10 существующих Sonic entry points из общего
`gpu/guest_entries.inc` через SDK `REX_HOOK_RAW`. Каждая точка всегда вызывает
свой оригинальный `__imp__` с тем же PPCContext/base. GPU protocol и отрисовка
Xenos остаются активны. Сам этот capture **не renderer** и не замена GPU. Отдельный opt-in native replay
использует те же точки входа (см. ниже).

Для ограниченного диагностического захвата:

```bat
set SONIC_REX_GPU_CAPTURE=1
Run-ReXGlue.cmd
```

Файл `assets/rex-cache/gpu-capture.bin` содержит максимум 4096 событий
(менее 52 MiB), r3–r10, исходные биты f1 и копии известного Sonic device prefix
для draw/clear/resolve/swap. Он перезаписывается при следующем запуске с capture.
Содержит данные игры: не включать в Git или публичные артефакты.
Состояние копируется до вызова оригинала; успешное выполнение вызова оно не доказывает.
`ReadProcessMemory` позволяет отметить недоступную память без падения из-за
диагностического чтения. Учтена Windows alias-поправка `+0x1000` закреплённого PPC.

```bat
python tools\inspect_gpu_capture.py assets\rex-cache\gpu-capture.bin
```

В checkout скрипт находится в `rex/tools`. JSON показывает вызовы, недоступные
снимки и комбинации primitive/VS/PS **guest object pointers**, не shader hashes.
В нём нет texture/vertex/index payloads; это ещё не воспроизводимый draw dump.
`SwapHelper` не объявляется кадром/Present без проверки его семантики.

До полной PPC-сборки CI проверяет фактический SDK hook TU с тестовыми оригиналами
(все 10 точек, capture off/on, неизменность контекста на входе, вызов оригинала
ровно один раз, исходный результат), бинарный формат/лимит/ошибки и Python reader.
Эти проверки не заменяют запуск Sonic с настоящими ресурсами и шейдерами.

## Тест подключённого собственного Vulkan renderer

Запуск **`Run-Native-GPU-Test.cmd`** включает
`SONIC_REX_NATIVE_RENDER=offscreen`. Обычный `Run-ReXGlue.cmd` этого режима не
включает (если переменная не задана извне).

Это уже цепочка **Sonic D3D hooks → SDK memory reader → owned resources +
shader identities → наш VulkanBackend → GPU readback**, а не только журнал вызовов.
Она использует существующий Sonic renderer и встроенный Vulkan-only cache:

- snapshots vertex/index buffers, текстур и констант принадлежат batch;
- VS/PS-контейнеры собираются из Sonic shader objects, ключи — XXH3;
- cache SMOL-V/Zstd декодируется в SPIR-V, проверяются stage и shader bindings;
- draw/clear/resolve отправляются в собственный Vulkan device;
- оригинальные guest D3D функции и весь GPU protocol Xenos продолжают работать;
- host FP environment после нативной работы восстанавливается перед оригиналом.

**Видимое окно пока рисует Xenos.** Собственный renderer работает offscreen,
без SDL2 и без вмешательства в SDL3-окно ReXGlue. Это не режим замены GPU, не
объявление полного покрытия Sonic и не гарантия, что конкретная сцена пройдёт
проверки существующего backend.

### Что прислать после теста

1. Установленные Xbox 360 файлы игры должны находиться в `assets/default.xex`
   и соседних каталогах `assets`, как и для reference-сборки.
2. Запустить `Run-Native-GPU-Test.cmd`, дойти до меню/уровня и выйти.
3. Прислать `diagnostics/rex-runtime.log` и `diagnostics/rex-exit-code.txt`.
4. `assets/rex-cache/native/latest-session.txt` указывает **новый каталог запуска**.
   Из него нужны `status.txt` и, если появились, `frame-*.bmp`.
   Старые каталоги не являются результатом нового теста и автоматически не удаляются.

BMP сохраняется только после `Submitted` и успешного GPU readback; никакой
картинки-заглушки и копирования кадра Xenos нет. Максимум восемь изображений за
запуск: первое успешное и затем каждое 60-е успешное представление batch.
`submitted` означает принятый backend batch, а не подтверждение правильного
изображения всей игры; `vulkan_draws` отдельно считает реальные indexed draws.

При отказе инициализации, неподдерживаемом формате/состоянии или несовпадении
shader ABI это видно в логе. При ошибке session выключает собственный replay,
но не выключает Xenos. Не все отказы batch фатальны: неподдерживаемый batch
помечается rejected и не сохраняется как успешный снимок.

**Существующие ограничения:** покрыты два draw entry, не все UP/instancing
варианты; guard на 128 команд и 8 MiB snapshots за batch; MSAA/MRT и все
форматы глубины/текстур не поддержаны. Поэтому отсутствие BMP при работающем
эталонном окне — полезный результат теста, но не успешный нативный рендеринг.
Из-за двойной отрисовки, безопасного чтения памяти и синхронного Vulkan submission
этот диагностический режим может заметно снижать FPS.


## Исправление отсутствующего Vulkan backend в Windows-плагине

Сообщение `requested backend 'vulkan' is not compiled into this plugin` означает,
что DLL загрузилась, но её factory не содержит Vulkan-ветку. Это не ошибка
выбора видеокарты. У SDK 0.10.0 Windows defaults — `REXGLUE_USE_D3D12=ON`,
`REXGLUE_USE_VULKAN=OFF`; ранее используемый готовый Windows ZIP не подходил.
Проверка `--help` этого не обнаруживала.

Workflow теперь собирает **весь SDK** из закреплённого commit, а не смешивает
новый GPU DLL со старым runtime:

```powershell
# В checkout ReXGlue нужного commit с инициализированными submodules,
# из x64 developer shell с Clang >=18, CMake >=3.25 и Ninja:
cmake --preset win-amd64 -DCMAKE_INSTALL_PREFIX=C:/SDK/rexglue-vulkan-install `
  -DREXGLUE_USE_VULKAN=ON -DREXGLUE_USE_D3D12=OFF
cmake --build out/build/win-amd64 --config Release --target install --parallel 2
```

CMake host отклоняет SDK с отключённым Vulkan. Дополнительно
`rex_vulkan_plugin_tests.exe` реально загружает DLL **рядом с собой** и вызывает
`LoadGpuPlugin("xenos", "vulkan")`. CI выполняет его до PPC-сборки и ещё раз из
готового пакета перед публикацией. Тест не требует GPU: проверяется factory,
а не создание Vulkan device/запуск игры.

При обновлении заменять EXE и DLL комплектом; не переносить старый
`rexgpu-xenos.dll` в новую сборку. Каталог `assets` и сохранения не удалять.
Параметры и commit сборки SDK записаны в `sonic-sdk-build.json` внутри пакета.


### Уточнение причины `0xC0000409`

Прогон `36345731699` остановился на этапе `loading DLL and creating Vulkan graphics`,
**до** `factory succeeded` и `CRT_TEARDOWN_BEGIN`. Поэтому гипотеза сбоя при
завершении процесса не подтверждена; патч времени жизни DLL и условие,
требовавшее такого сбоя, удалены из сборки. Используется исходный закреплённый SDK.

`rex_vulkan_plugin` остаётся обязательным CTest. При его отказе отдельный
Windows debugger supervisor записывает исключения, параметры fail-fast,
загруженные DLL и стек. Он не обрабатывает исключение вместо программы и не
превращает провал теста в успех. Артефакт `rex-vulkan-plugin-diagnostics`
содержит `plugin-crash-trace.log`, exit code и `LastTest.log`.
Установлена ошибка точки входа probe: `rex::filesystem::GetExecutablePath()`
в SDK 0.10.0 вызывает `_get_wpgmptr`. Эта CRT-функция разрешена только при
`wmain`/`wWinMain` (см. [Microsoft](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/get-wpgmptr?view=msvc-170)).
Probe ошибочно использовал `main`, тогда как настоящий SDK host использует
`wWinMain`. Probe переведён на `wmain`; перед загрузкой плагина теперь сравниваются
SDK-путь и `GetModuleFileNameW`. Обработчики invalid parameter не подменяются,
проверка factory и нормальное завершение процесса остаются обязательными.

SDK сохраняется в build cache после успешной компиляции, до runtime-проверок;
наличие cache не означает работоспособность игры или разрешение выдачи пакета.
