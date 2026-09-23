# Sonic Generations Recompiled (Xbox 360)

рекомпиляция (static recompilation) **Xbox 360** версии *Sonic Generations*
в нативное приложение для PC — по образцу
[Unleashed Recompiled](https://github.com/hedge-dev/UnleashedRecomp)
на модифицированных инструментах [Player124413/XenonRecomp](https://github.com/Player124413/XenonRecomp)
и [Player124413/XenosRecomp](https://github.com/Player124413/XenosRecomp).
Закреплённые версии и обновление сабмодулей: [docs/TOOLCHAIN.md](docs/TOOLCHAIN.md).

> **Важно:** проект **не содержит** файлов игры. Нужна ваша собственная
> легальная копия (дамп ISO/XISO или распакованная папка с `default.xex`).
> Xbox 360 версия игры — именно она поддерживается.

---

## Что уже сделано

| Компонент | Статус |
|---|---|
| PPC-код игры (`ppc/`, ~77 000 функций) | ✅ рекомпилирован XenonRecomp, собирается в `SonicGenerationsRecompLib` |
| Ядро Xbox 360 (`xboxkrnl`: Nt/Ke/Mm/Ex/Io/Ob/Rtl/Hal) | Импорты связаны; поведение в полной игре требует проверки |
| XAM (контент, пользователь, уведомления, ввод) | ✅ |
| Файловая система (Nt\* → виртуальные корни `game:`, `update:`, `D:`) | ✅ |
| Гостевые потоки/CRT (TLS, стеки, `\_\_restgprlr` и т.д.) | ✅ |
| printf-семейство CRT (sprintf/swprintf/…) | ✅ собственная реализация над гостевой памятью |
| Аудио (XAudio render driver → SDL) | ✅ базовый вывод звука |
| XMA-декодер | XMAFRAMES → guest PCM ring подключён; проверки и ограничения — [AUDIO.md](docs/AUDIO.md) |
| Ввод (геймпад/клавиатура → XAMINPUT) | ✅ SDL |
| Инсталлятор (папка / ISO-XISO + `.xexp` апдейт) | ✅ CLI |
| GPU (`Vd\*`, present, backend-интерфейс) | 🚧 Опциональный Vulkan: ресурсы, transfer/clear/Present и 3 state-replacement; отрисовка игры ещё не готова — [VULKAN.md](docs/VULKAN.md) |
| Шейдеры (XenosRecomp → HLSL → DXIL/SPIR-V) | Кэш 6404 модулей подключён; поддержка всех игровых pipelines ещё не завершена |
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
cmake -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DSONIC_GENERATIONS_ENABLE_VULKAN=ON
cmake --build build -j$(nproc)

# 3. Установить игру из вашего дампа (папка или .iso/.xiso)
./build/SonicGenerationsRecomp/SonicGenerationsRecomp --install /path/to/dump

# 4. Запустить
./build/SonicGenerationsRecomp/SonicGenerationsRecomp
```

**Clang обязателен для полного runtime**; GCC/MSVC не поддерживают используемые Xbox ABI aggregates.
Диагностическая сборка и сбор логов: [TESTING_RUNTIME.md](docs/TESTING_RUNTIME.md).

## Шейдеры и фактическая готовность

Предоставленный кэш из 6404 SPIR-V модулей уже подключён и проверен.
Повторно компилировать его для текущего runtime не нужно. Экспериментальный
Vulkan direct-draw путь создаёт pipelines, дескрипторы и выполняет indexed draws.
Полные render-target/Clear/resolve семантики и работоспособность игры не проверены.
Наличие всех импортов и успешная сборка **не означают полную реализацию SDK или
подтверждённую проходимость**. См. [VULKAN.md](docs/VULKAN.md).

## Лицензия

Код рантайма derived from [UnleashedRecomp](https://github.com/hedge-dev/UnleashedRecomp)
(GPLv3), поэтому проект распространяется на условиях **GPLv3** — см. `COPYING`
и `THIRD_PARTY.md`. XenonRecomp/XenosRecomp — MIT. Файлы игры не
распространяются и не входят в репозиторий.

## Кредиты

- [hedge-dev](https://github.com/hedge-dev) — XenonRecomp, XenosRecomp, Unleashed Recompiled (архитектура рантайма, ядро, install)
- [Xenia Project](https://xenia.jp) — исследование Xbox 360 (таблицы экспорта, XISO, структуры)
- N64: Recompiled — вдохновение для XenonRecomp
