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
| **ReXGlue-host** (целевой) | `rex/` | ядро/XAM/XMA/ввод/VFS берутся у SDK ReXGlue, графика — сначала эталонный Xenos, а поверх него [NativeXRenderer](docs/NATIVE_X_RENDERER.md): перехват D3D-вызовов игры и рисование напрямую на Vulkan |
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

## Нативный рендерер (NativeXRenderer)

Целевая графика — Vulkan, и не через эмуляцию Xenos, а через перехват D3D-библиотеки игры:

- как это работает, что уже вшито и что нужно включить — [docs/NATIVE_X_RENDERER.md](docs/NATIVE_X_RENDERER.md);
- карта D3D-слоя Sonic Generations с адресами и уликами — [docs/native-x-renderer-sonic-generations.md](docs/native-x-renderer-sonic-generations.md);
- инструменты разбора нашего кода — [tools/nxr/README.md](tools/nxr/README.md).

Пока рендерер не подтверждён на игре, по умолчанию рисует эталонный путь Xenos — он не ломается и
не ускоряется от этой интеграции.

## Структура

```
├── ppc/                      # рекомпилированный код игры (XenonRecomp)
├── SonicGenerationsRecompLib/# статическая библиотека из ppc/ + шов шейдеров
├── SonicGenerationsRecomp/   # прежний runtime: ядро, GPU, APU, HID, установщик, os/user/ui
├── rex/                      # host на ReXGlue (ядро/XAM/XMA/ввод/VFS от SDK) + интеграция NXR
│   └── src/native_x/         # профиль D3D-устройства и хуки для Sonic Generations
├── thirdparty/native_x_renderer/  # сабмодуль: сам рендерер
├── tools/                    # XenonRecomp, XenosRecomp, o1heap, nxr (разбор кода)
├── tests/                    # смоук-тесты ядра, GPU, аудио, полноты импортов
└── docs/                     # архитектура, сборка, GPU, аудио, тестирование, планы
```

## Документы

| Документ | О чём |
|---|---|
| [STATUS.md](STATUS.md) | что проверено, чем и что нет — единственный источник правды о готовности |
| [docs/BUILDING.md](docs/BUILDING.md) | сборка, тулчейн, генерация кода |
| [docs/ARCHITECTURE.md](docs/ARCHITECTURE.md) | как устроены рантайм и host |
| [docs/NATIVE_X_RENDERER.md](docs/NATIVE_X_RENDERER.md) | нативный рендерер: включение и чек-лист доведения |
| [docs/native-x-renderer-sonic-generations.md](docs/native-x-renderer-sonic-generations.md) | карта D3D-слоя игры |
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
XenonRecomp/XenosRecomp — MIT, NativeXRenderer — MIT (см. `THIRD_PARTY_NOTICES.md` в его дереве).
Файлы игры не распространяются.

## Кредиты

- [hedge-dev](https://github.com/hedge-dev) — XenonRecomp, XenosRecomp, Unleashed Recompiled
  (архитектура рантайма, ядро, установщик)
- [ElGuslml](https://github.com/ElGuslml) — NativeXRenderer и ветка `recomp` SDK ReXGlue
- [Xenia Project](https://xenia.jp) — исследование Xbox 360 (таблицы экспорта, XISO, структуры)
- N64: Recompiled — вдохновение для XenonRecomp
