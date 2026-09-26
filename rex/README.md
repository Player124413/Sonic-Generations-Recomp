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

**Пока не реализованы:** D3D shadow hooks, второе окно, нативная отрисовка,
покадровое сравнение, замена Xenos, Plume-интеграция. `forward` — это проверяемая
точка подключения, а не готовый shadow mode и не сокращение GPU-нагрузки.

## Сборка

Workflow **Windows ReXGlue migration** по push проверяет host-контракты с
закреплённым официальным SDK (SHA256 проверяется) и пытается собрать настоящий
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
  -DCMAKE_PREFIX_PATH="C:/SDK/rexglue-sdk-0.10.0" `
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
