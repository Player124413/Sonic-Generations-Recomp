# Как запустить Sonic Generations на ПК (путь ReXGlue)

Это **самый короткий путь к игре**, и он не требует NativeXRenderer. Он повторяет то, что уже
работает: ваш собственный iOS-порт `Player124413/SonicGenerations-iOS` запускает эту же игру на этом
же SDK (60 FPS, до геймплея). Здесь — тот же рецепт для Windows.

Рисует штатный GPU-плагин ReXGlue (`rexgpu-xenos.dll`, порт GPU из Xenia на Vulkan/D3D12). Ничего
своего в графике не нужно: для того чтобы играть, достаточно кодогенерации из **вашего** дампа и
сборки.

## Что понадобится

| Что | Зачем |
|---|---|
| Windows 10/11 x64 | целевая платформа `rex/` |
| Visual Studio 2022 + **ClangCL** (или LLVM/clang 18+) | ReXGlue собирается только Clang'ом |
| CMake ≥ 3.25, Ninja, Python 3 | сборка и кодогенерация |
| ReXGlue SDK, собранный из исходников с `REXGLUE_USE_VULKAN=ON` | официальный ZIP 0.10.0 не содержит Vulkan-бэкенда |
| Ваш легальный дамп игры: `default.xex` + `disk/`, `movie/` | генерация кода и данные игры |

## Шаг 1. Собрать ReXGlue SDK

```powershell
git clone --recursive https://github.com/rexglue/rexglue-sdk C:\SDK\rexglue-sdk
cd C:\SDK\rexglue-sdk
cmake --preset win-amd64 -DREXGLUE_USE_VULKAN=ON -DREXGLUE_USE_D3D12=OFF -DREXGLUE_REGISTER_PACKAGE=OFF
cmake --build --preset win-amd64 --config Release --parallel
cmake --install out\build\win-amd64 --config Release --prefix out\install\win-amd64
```

Дальше `REXSDK_INSTALL=C:\SDK\rexglue-sdk\out\install\win-amd64`.

## Шаг 2. Сгенерировать код игры из своего дампа

```powershell
cd <репозиторий>\rex
# манифест ждёт default.xex в ../assets/
& $REXSDK_INSTALL\..\build\win-amd64\Release\rexglue.exe codegen sonicgenerations_manifest.toml
```

Что в манифесте (и почему он важен — это перенесённый рабочий конфиг, а не догадка):

| Поле | Значение | Зачем |
|---|---|---|
| `setjmp_address` / `longjmp_address` | `0x833A59C0` / `0x833A5590` | CRT игры: без них кодогенератор делает обычные вызовы вместо `ppc_setjmp`/`ppc_longjmp` |
| `includes` | `config/functions.toml` (68 КБ) | границы функций, которые анализатор режет неверно |
| midasm `SgPresentationInterval` | `0x82DC44E0`, `r11` | интервал презентации (30 FPS консоли); отсюда работает 60 FPS |
| midasm `SgHavokJobWait` | `0x83362D84` | Havok-поток отдаёт ядро вместо спина |
| midasm `SgGpuWaitPoll` | `0x82DB0A34` | ожидание GPU: короткий сон вместо спина |

Выход: `rex/generated/default/` (`sonicgenerations_init.h`, `sources.cmake` и `.cpp` игры).
Каталог в `.gitignore` — код игры в репозиторий не попадает.

## Шаг 3. Собрать игру

```powershell
cd <репозиторий>
cmake -S rex -B build-rex -G "Visual Studio 17 2022" -A x64 -T ClangCL `
  -DCMAKE_PREFIX_PATH="$REXSDK_INSTALL" `
  -DSONIC_REX_BUILD_GAME=ON `
  -DSONIC_REX_GENERATED_DIR="<репозиторий>\rex\generated\default"
cmake --build build-rex --config Release --parallel 2
```

Получится `SonicGenerationsRecomp-ReXGlue.exe`. Рядом должны лежать DLL SDK (`rexruntime.dll`,
`rexgpu-xenos.dll`, …) — SDK кладёт их при сборке; если нет, скопируйте из `$REXSDK_INSTALL\bin`.

## Шаг 4. Данные игры и запуск

```
SonicGenerationsRecomp-ReXGlue.exe
assets\
  default.xex
  disk\  movie\   ...          # содержимое диска
  rex-user\        # сохранения и профиль
  rex-cache\       # кэш шейдеров SDK
  rex-runtime.toml # настройки
```

Запуск:

```powershell
.\SonicGenerationsRecomp-ReXGlue.exe
```

Полезное:

| Ключ / переменная | Что делает |
|---|---|
| `--sg_frame_rate=60` (по умолчанию), `vsync`, `original` | 60 FPS, 60 с привязкой к вертикальной синхронизации или 30 FPS консоли |
| `SONIC_REX_GRAPHICS_MODE=reference` (по умолчанию) | штатный Xenos-плагин SDK рисует; остальные режимы — эксперименты этого репозитория |

Логи: `assets\rex-cache\` и консольный вывод SDK. Если нет картинки — сначала проверьте, что
`rexgpu-xenos.dll` лежит рядом с EXE и собрана с Vulkan.

## Если что-то не так

| Симптом | Причина и что делать |
|---|---|
| CMake: `This SDK has no Vulkan backend` | собран официальный ZIP/D3D12-only SDK — пересоберите SDK из исходников, шаг 1 |
| `rexglue: command not found` | генератор собирается целью `rexglue` в SDK; путь — `out\build\win-amd64\Release\rexglue.exe` |
| `sonicgenerations_init.h` не найден | шаг 2 не выполнен или `-DSONIC_REX_GENERATED_DIR` указывает не туда |
| Линковка: нет `sonicgenerations_init` / чужие точки входа | не включайте `-DSONIC_REX_ENTRY_RECOVERY=ON` (это эксперимент для старого ABI); с настоящей кодогенерацией нужны её собственные `*_init.cpp`/`*_register.cpp` |
| Игра стартует, но чёрный экран | проверьте `--sg_frame_rate=original` (30) — так ведёт себя консоль; затем лог GPU-плагина |
| Падение в Havok/job-wait | убедитесь, что манифест с midasm-хуками применён (шаг 2) и `sg_spin_waits.cpp` в сборке |

## Почему это честный путь, а не обещание

- Тот же код, тот же SDK и тот же манифест уже доводят игру до геймплея на iOS (ваш репозиторий).
- Отличия Windows-сборки от iOS: окно и ввод даёт SDL3 самого SDK, графика — Vulkan-плагин, а не
  MoltenVK; игровые хуки (кадровый интервал, спины) перенесены как есть.
- **Чего я не проверил:** ни один шаг выше не запускался в этой среде — здесь нет ни Windows, ни GPU,
  ни дампа игры, ни clang. Шаги 1–4 воспроизводят проверенный рецепт, но на вашей машине их надо
  пройти и записать результат в [../STATUS.md](../STATUS.md).
