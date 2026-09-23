# Sonic Generations Recompiled (Xbox 360)

Нерекомпиляция (static recompilation) **Xbox 360** версии *Sonic Generations*
в нативное приложение для PC — по образцу
[Unleashed Recompiled](https://github.com/hedge-dev/UnleashedRecomp)
на инструментах [XenonRecomp](https://github.com/hedge-dev/XenonRecomp).

> **Важно:** проект **не содержит** файлов игры. Нужна ваша собственная
> легальная копия (дамп ISO/XISO или распакованная папка с `default.xex`).
> Xbox 360 версия игры — именно она поддерживается.

---

## Что уже сделано

| Компонент | Статус |
|---|---|
| PPC-код игры (`ppc/`, ~77 000 функций) | ✅ рекомпилирован XenonRecomp, собирается в `SonicGenerationsRecompLib` |
| Ядро Xbox 360 (`xboxkrnl`: Nt/Ke/Mm/Ex/Io/Ob/Rtl/Hal) | ✅ полная реализация всех импортов игры |
| XAM (контент, пользователь, уведомления, ввод) | ✅ |
| Файловая система (Nt\* → виртуальные корни `game:`, `update:`, `D:`) | ✅ |
| Гостевые потоки/CRT (TLS, стеки, `\_\_restgprlr` и т.д.) | ✅ |
| printf-семейство CRT (sprintf/swprintf/…) | ✅ собственная реализация над гостевой памятью |
| Аудио (XAudio render driver → SDL) | ✅ базовый вывод звука |
| XMA-декодер | XMAFRAMES → guest PCM ring подключён; проверки и ограничения — [AUDIO.md](docs/AUDIO.md) |
| Ввод (геймпад/клавиатура → XAMINPUT) | ✅ SDL |
| Инсталлятор (папка / ISO-XISO + `.xexp` апдейт) | ✅ CLI |
| GPU (`Vd\*`, present, backend-интерфейс) | 🚧 NullBackend; 8 наблюдательных SDK-перехватов, без рендеринга — [GPU.md](docs/GPU.md) |
| Шейдеры (XenosRecomp → HLSL → DXIL/SPIR-V) | ⏳ позже (у вас) — шов `shader_cache.h` готов |
| Патчи игры (FPS, widescreen и пр.) | ⏳ нужны адреса/символы — см. ROADMAP |

## Структура

```
├── config.toml               # конфиг XenonRecomp (ваш default.xex → ppc/)
├── switch_tables.toml        # jump-таблицы (XenonAnalyse)
├── ppc/                      # рекомпилированный код игры (сгенерирован)
├── SonicGenerationsRecompLib/# статическая библиотека из ppc/ + шов шейдеров
├── SonicGenerationsRecomp/   # рантайм (ядро, GPU, APU, HID, install, os)
│   ├── kernel/               # xboxkrnl/xam/импорты (адаптация UnleashedRecomp)
│   ├── cpu/                  # гостевые потоки, PPC context
│   ├── gpu/                  # Vd*, Video, backend-интерфейс
│   ├── apu/                  # XAudio, XMA
│   ├── hid/                  # SDL-ввод
│   ├── install/              # установка из дампа
│   ├── os/, user/, ui/       # платформенный слой, конфиг, окно
├── tools/
│   ├── XenonRecomp/          # сабмодуль: XenonRecomp + XenonAnalyse + XenonUtils
│   ├── XenosRecomp/          # сабмодуль: рекомпилятор шейдеров (для следующего этапа)
│   └── o1heap/               # аллокатор гостевой кучи
├── tests/                    # смоук-тесты ядра + тест полноты импортов
└── docs/                     # BUILDING.md, ARCHITECTURE.md, ROADMAP.md
```

## Быстрый старт

Подробности — в [docs/BUILDING.md](docs/BUILDING.md).

```bash
# 1. Клонировать с сабмодулями
git clone --recursive <this repo>
cd Sonic-Generations-Recomp

# 2. Собрать (нужны CMake ≥ 3.20, C++20 компилятор, SDL2)
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j$(nproc)

# 3. Установить игру из вашего дампа (папка или .iso/.xiso)
./build/SonicGenerationsRecomp/SonicGenerationsRecomp --install /path/to/dump

# 4. Запустить
./build/SonicGenerationsRecomp/SonicGenerationsRecomp
```

Рекомендуется **Clang** (как у Unleashed Recompiled); GCC также поддерживается.

## Шейдеры (ваш следующий шаг)

Шов готов: `SonicGenerationsRecompLib/shader/shader_cache.h`.
Порядок описан в [docs/ROADMAP.md](docs/ROADMAP.md) — выгрузить `shader.ar`
из дампа, прогнать `XenosRecomp`, скомпилировать HLSL через DXC.

## Лицензия

Код рантайма derived from [UnleashedRecomp](https://github.com/hedge-dev/UnleashedRecomp)
(GPLv3), поэтому проект распространяется на условиях **GPLv3** — см. `COPYING`
и `THIRD_PARTY.md`. XenonRecomp/XenosRecomp — MIT. Файлы игры не
распространяются и не входят в репозиторий.

## Кредиты

- [hedge-dev](https://github.com/hedge-dev) — XenonRecomp, XenosRecomp, Unleashed Recompiled (архитектура рантайма, ядро, install)
- [Xenia Project](https://xenia.jp) — исследование Xbox 360 (таблицы экспорта, XISO, структуры)
- N64: Recompiled — вдохновение для XenonRecomp
