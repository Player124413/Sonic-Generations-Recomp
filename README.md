# Sonic Generations Recompiled (Xbox 360 → PC)

Статическая рекомпиляция **Xbox 360**-версии *Sonic Generations* в нативное приложение для PC — по
образцу [Unleashed Recompiled](https://github.com/hedge-dev/UnleashedRecomp), на инструментах
[XenonRecomp](https://github.com/Player124413/XenonRecomp) /
[XenosRecomp](https://github.com/Player124413/XenosRecomp) и SDK
[ReXGlue](https://github.com/rexglue/rexglue-sdk).

> **Проект не содержит файлов игры.** Нужна ваша собственная легальная копия: дамп ISO/XISO или
> распакованная папка с `default.xex`. Поддерживается именно версия Xbox 360.

## Статус без прикрас

Порт **не проходим от начала до конца**. Это не оговорка для галочки: прохождение ни разу не
подтверждено, ни на одном из путей. Что проверено и чем — в [STATUS.md](STATUS.md); картина в двух
строках:

| | Состояние |
|---|---|
| Собрать и запустить EXE на Windows | ✅ работает (сборка, линковка, `--help`, упаковка) |
| Дойти до меню и уровня | ❌ не подтверждено |
| Картинка, звук, ввод, сохранения на реальной игре | ❌ нет подтверждённых прогонов |
| Прохождение | ❌ |

Если вы хотите **поиграть сегодня**, этот репозиторий — не тот путь: возьмите официальный PC-релиз
(или *Sonic X Shadow Generations*, где Generations переиздан) либо эмулятор с вашим дампом. Этот
проект нужен для другого: нативная версия без эмуляции, с нормальным разрешением и без EDRAM.

## Два пути в одном репозитории

| Путь | Где | Что это |
|---|---|---|
| **ReXGlue-host** (целевой, через него можно играть) | `rex/` | ядро/XAM/XMA/ввод/VFS и графика — SDK ReXGlue (GPU-плагин Xenos на Vulkan). Код игры генерируется из **вашего** дампа: [docs/REXGLUE_WINDOWS.md](docs/REXGLUE_WINDOWS.md) |
| **Собственный runtime** (прежний) | `SonicGenerationsRecomp/` | самостоятельно написанные ядро, XMA, ввод, установщик из ISO и свой Vulkan-бэкенд; остаётся рабочим материалом и справочником |

Рекомпилированный код игры лежит в `ppc/` (вывод старого XenonRecomp, ~154 тысячи функций). Для
ReXGlue-пути он не подходит по ABI: там нужен код, сгенерированный инструментами ReXGlue из вашего
же дампа (подробности — [docs/BUILDING.md](docs/BUILDING.md)).

## Быстрый старт (прежний runtime)

```bash
git clone --recursive <этот репозиторий>
cd Sonic-Generations-Recomp

cmake -B build -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
      -DSONIC_GENERATIONS_ENABLE_VULKAN=ON
cmake --build build -j$(nproc)

./build/SonicGenerationsRecomp/SonicGenerationsRecomp --install /путь/к/дампу   # папка, .iso/.xiso
./build/SonicGenerationsRecomp/SonicGenerationsRecomp
```

Нужны CMake ≥ 3.20, **Clang** (GCC/MSVC не умеют использующиеся Xbox-ABI агрегаты) и SDL2.
Диагностика: [docs/TESTING_RUNTIME.md](docs/TESTING_RUNTIME.md).

## ## Как запустить игру (путь ReXGlue)

Пошагово: [docs/REXGLUE_WINDOWS.md](docs/REXGLUE_WINDOWS.md). Коротко:

1. собрать ReXGlue SDK из исходников с Vulkan;
2. `rexglue codegen rex/sonicgenerations_manifest.toml` — генерация кода **из вашего** `default.xex`
   (манифест и `config/functions.toml` перенесены из рабочего порта этой же игры);
3. собрать `rex/` с `-DSONIC_REX_BUILD_GAME=ON`;
4. положить данные игры в `assets/` рядом с EXE и запустить.

Рисует штатный GPU-плагин SDK. Разбор альтернатив (ReGPU, plume, native renderer) и почему выбран
этот путь — [docs/RUNTIME_OPTIONS.md](docs/RUNTIME_OPTIONS.md).

**Android** — тот же host, Vulkan на телефоне: сборка и настройки производительности
([docs/ANDROID.md](docs/ANDROID.md)). **Нативный рендеринг** (перехват D3D-вызовов игры, общий код для
Windows и Android) — план, карта D3D-слоя и оценка: [docs/NATIVE_RENDERING.md](docs/NATIVE_RENDERING.md),
[docs/D3D_LAYER_MAP.md](docs/D3D_LAYER_MAP.md), инструменты в `tools/d3dmap/`.

## Структура

```
├── ppc/                      # рекомпилированный код игры (XenonRecomp)
├── SonicGenerationsRecompLib/# статическая библиотека из ppc/ + шов шейдеров
├── SonicGenerationsRecomp/   # прежний runtime: ядро, GPU, APU, HID, установщик, os/user/ui
├── rex/                      # host на ReXGlue (ядро/XAM/XMA/ввод/VFS от SDK) + интеграция NXR
│   ├── config/functions.toml # границы функций для кодогенерации
│   ├── sonicgenerations_manifest.toml  # вход rexglue codegen
│   └── src/sg_*.cpp          # игровые хуки: 60 FPS, spin-wait
├── tools/                    # XenonRecomp, XenosRecomp, o1heap, d3dmap (разбор D3D-слоя)
├── tests/                    # смоук-тесты ядра, GPU, аудио, полноты импортов
└── docs/                     # архитектура, сборка, GPU, аудио, тестирование, планы
```

## Документы

| Документ | О чём |
|---|---|
| [STATUS.md](STATUS.md) | что проверено, чем и что нет — единственный источник правды о готовности |
| [docs/BUILDING.md](docs/BUILDING.md) | сборка, тулчейн, генерация кода |
| [docs/ARCHITECTURE.md](docs/ARCHITECTURE.md) | как устроены рантайм и host |
| [docs/REXGLUE_WINDOWS.md](docs/REXGLUE_WINDOWS.md) | как собрать и запустить игру на ПК |
| [docs/RUNTIME_OPTIONS.md](docs/RUNTIME_OPTIONS.md) | чем рисовать: ReXGlue Xenos, ReGPU, plume, native renderer |
| [docs/NATIVE_RENDERING.md](docs/NATIVE_RENDERING.md) | нативный рендеринг для Windows и Android: план и оценка |
| [docs/D3D_LAYER_MAP.md](docs/D3D_LAYER_MAP.md) | карта D3D-слоя игры (адреса, улики) |
| [docs/ANDROID.md](docs/ANDROID.md) | Android: сборка и производительность |
| [docs/VULKAN.md](docs/VULKAN.md), [docs/GPU.md](docs/GPU.md) | собственный Vulkan-бэкенд (прежний путь) |
| [docs/AUDIO.md](docs/AUDIO.md) | XMA-декодер и вывод звука |
| [docs/TESTING_WINDOWS.md](docs/TESTING_WINDOWS.md), [docs/TESTING_RUNTIME.md](docs/TESTING_RUNTIME.md) | проверки |
| [docs/ROADMAP.md](docs/ROADMAP.md) | оставшиеся работы и порядок |
| [docs/TOOLCHAIN.md](docs/TOOLCHAIN.md) | закреплённые версии инструментов |

Автоматические проверки — в `.github/workflows/`; они покрывают сборку и синтетические тесты, а не
игровой прогон.

## Лицензия и файлы игры

Код рантайма происходит от [Unleashed Recompiled](https://github.com/hedge-dev/UnleashedRecomp)
(GPLv3), поэтому проект распространяется по **GPLv3** — см. `COPYING` и `THIRD_PARTY.md`.
XenonRecomp/XenosRecomp — MIT; ReXGlue SDK — BSD-3-Clause.
Файлы игры не распространяются.

## Кредиты

- [hedge-dev](https://github.com/hedge-dev) — XenonRecomp, XenosRecomp, Unleashed Recompiled
  (архитектура рантайма, ядро, установщик)
- [Xenia Project](https://xenia.jp) — исследование Xbox 360 (таблицы экспорта, XISO, структуры)
- N64: Recompiled — вдохновение для XenonRecomp
