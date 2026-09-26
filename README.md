# Sonic Generations Recompiled (Xbox 360)

> **Новый курс разработки:** Windows x64, ядро/XMA/ввод/VFS от ReXGlue,
> собственная графика поверх Vulkan. Отдельный миграционный target и честный
> статус этапов: [rex/README.md](rex/README.md). Штатный Xenos сохраняется как
> reference до проверки native/shadow пути. Ниже описан прежний собственный
> runtime; его зелёные тесты не являются проверкой новой архитектуры.


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

## Готовность

**Это незавершённый runtime, не готовый порт для игрового тестирования.**
Сборка Windows EXE и автоматические проверки проходят, но загрузка уровня,
правильная графика и прохождение не подтверждены. Известные пробелы включают
D24FS8, MSAA/MRT, полную синхронизацию GPU-текстур с памятью CPU и
неподдержанные типы объектов ядра (например, file/timer/mutant). Для event,
semaphore и thread реализованы гостевые структуры, HLE-дескрипторы типов и
учёт ссылок/handles; это ещё не полная совместимость ядра. Ограниченная цветовая связка
render target → resolve → выбранный backbuffer реализована и проверена
синтетическими Vulkan-тестами; это не проверка игрового кадра. Успешная линковка импортов не означает реализацию их поведения.

Windows-инструкции и результаты проверок: [TESTING_WINDOWS.md](docs/TESTING_WINDOWS.md).

## Целевой объём поддержки

Единственный целевой графический API — **Vulkan**, в том числе на Windows.
Шейдерный путь: **XenosRecomp → HLSL → SPIR-V**. DirectX/DXIL и другие
графические API не входят в объём работ; отсутствие DXIL не является блокером.

Цель завершения — реализовать и проверить все компоненты таблицы ниже до
статуса ✅, **кроме патчей игры**. Незавершённые компоненты сохраняют фактический
статус до устранения известных ограничений; прохождение отдельных синтетических
тестов не заменяет завершение компонента и не доказывает проходимость игры.

## Готовность новой Windows/ReXGlue-версии

Это основной чек-лист **готового порта**, а не только компиляции. Галочка здесь
требует подтверждения именно на Sonic Generations; SDK или другой игре она не наследуется.

- [x] Точка подключения `IGraphicsSystem`: Windows-тесты передачи параметров,
  ошибок, presentation и завершения прошли (Actions `36156714239`).
- [x] Базовый EXE на ReXGlue: полная Windows-сборка, линковка, `--help` и
  упаковка Xenos/Vulkan прошли в [Actions 36229760484](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/36229760484)
  (`99b1375`). Это reference-сборка; новые D3D hooks проверяются отдельно.
- [ ] Загрузка Sonic, меню и уровень на эталонном Xenos/Vulkan.
- [ ] Ядро/XAM, XMA, ввод и VFS от ReXGlue проверены в этой игре.
- [ ] Перехваты Sonic D3D работают с памятью и ABI ReXGlue.
- [ ] Собственный Vulkan renderer: текстуры, шейдеры, геометрия, depth/stencil,
  render targets, resolve и синхронизация проверены на игровых сценах.
- [ ] Замена Xenos сохраняет fences, interrupts, ring-buffer и vblank протокол.
- [ ] Сравнение эталонных/нативных кадров, ролики, переходы и эффекты.
- [ ] Сохранение/загрузка, повторный запуск и длительная игровая сессия.
- [ ] Проверка прохождения и Windows-пакет без ручных исправлений.

Актуальный Rayman уже имеет нативный Vulkan renderer —
[что из него можно использовать](docs/RAYMAN_NATIVE_REVIEW.md).
Это существенно полезнее прежнего плана, но не проверка 3D-рендеринга Sonic.
Патчи FPS/widescreen остаются за пределами обязательного завершения.

## Что уже сделано в прежнем runtime (не статус ReXGlue-порта)

| Компонент | Статус |
|---|---|
| PPC-код игры (`ppc/`, ~77 000 функций) | ✅ рекомпилирован XenonRecomp, собирается в `SonicGenerationsRecompLib` |
| Ядро Xbox 360 (`xboxkrnl`: Nt/Ke/Mm/Ex/Io/Ob/Rtl/Hal) | Функциональные символы связаны; переменные и поведение API реализованы частично — [XEX_IMPORT_BINDING.md](docs/XEX_IMPORT_BINDING.md) |
| XAM (контент, пользователь, уведомления, ввод) | 🚧 Уведомления, snapshot-enumerators и event/polling OVERLAPPED проверены на Windows/Linux; APC, sessions/stats и остальная HLE ещё не завершены |
| Файловая система (Nt\* → виртуальные корни `game:`, `update:`, `D:`) | ✅ |
| Гостевые потоки/CRT (TLS, стеки, `\_\_restgprlr` и т.д.) | ✅ |
| printf-семейство CRT (sprintf/swprintf/…) | ✅ собственная реализация над гостевой памятью |
| Аудио (XAudio render driver → SDL) | ✅ базовый вывод звука |
| XMA-декодер | XMAFRAMES → guest PCM ring подключён; проверки и ограничения — [AUDIO.md](docs/AUDIO.md) |
| Ввод (геймпад/клавиатура → XAMINPUT) | ✅ SDL |
| Инсталлятор (папка / ISO-XISO + `.xexp` апдейт) | ✅ CLI |
| GPU (`Vd\*`, present, backend-интерфейс) | 🚧 Vulkan: indexed draws, descriptors, цветовые RT → resolve → texture sampling → Present; native D24S8 depth/stencil реализован в ограниченном профиле; D24FS8, MSAA/MRT и CPU/GPU coherence ещё не завершены — [VULKAN.md](docs/VULKAN.md) |
| Шейдеры (XenosRecomp → HLSL → SPIR-V, Vulkan) | 🚧 Все 6404 SPIR-V модуля проверены; поддержка всех игровых Vulkan pipelines ещё не завершена |
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

## Общая автоматическая проверка

Добавлен workflow **Verify Windows Vulkan runtime**: Windows EXE, kernel/XAM,
GPU capture, Vulkan, XMA и shader-проверки запускаются на одной ревизии, с единым
итоговым отчётом. Отсутствующая, пропущенная, отменённая или упавшая проверка
не считается успехом. Это автоматизация тестирования, не автоматическая
реализация оставшихся компонентов и не подтверждение готовности игры.
Подробности — [TESTING_WINDOWS.md](docs/TESTING_WINDOWS.md).

## Шейдеры и фактическая готовность

Предоставленный кэш из 6404 SPIR-V модулей уже подключён и проверен.
Проверка кэша требует ровно 6404 записи и проверяет SPIR-V через SPIRV-Tools
на Linux. Учёт DXIL в диагностике формата кэша не означает поддержку DirectX; декодирование и проверки кэша
в CI `35962411199` прошли на Windows и Linux.
Это проверка модулей, а не совместимости всех игровых pipelines.
Повторно компилировать его для текущего runtime не нужно. Экспериментальный
Vulkan direct-draw путь создаёт pipelines, дескрипторы и выполняет indexed draws.
Цветовая цепочка native RT → resolve → sampling → второй RT → backbuffer
проверена с чтением пикселей и validation layer (`35962280938`, lavapipe,
headless и WSI). Используются тестовые шейдеры в явном fixture-кэше, не игровой
кадр и не подмена шейдеров в runtime. Полные render-target/Clear/resolve
семантики и работоспособность игры не подтверждены.

XAM/kernel CI `35963266469` прошёл на Windows и Linux: handles, уведомления,
64-битные аргументы PPC, snapshot-enumeration и завершение OVERLAPPED через
событие/опрос. APC-callback пока явно отклоняется без потребления записей;
это не полная XAM HLE. Полная сборка EXE и игровой прогон — отдельные проверки.
Дополнительные проверенные изменения:
- Vulkan: несколько vertex streams с независимыми strides/offsets вместо
  ограничения stream 0. Pixel-тесты headless/WSI прошли (`35989892512`),
  проверки гостевого capture — на Windows/Linux (`35990034485`). Instancing
  и stream-frequency semantics не входят в эту реализацию.
- Vulkan D24S8: самостоятельный depth/stencil target, сравнение и запись глубины,
  stencil операций обеих сторон, reference/read/write masks, полные и частичные
  clear по отдельным аспектам. Проверено сохранение содержимого при переключении
  цветовой цели; CI `35966388857` прошёл headless/WSI с validation layer.
  Это single-sample D24S8 с RT0 того же размера и неперекрывающимися EDRAM views;
  D24FS8, depth-only passes без RT0 и depth resolve/sampling ещё не поддержаны.
- Vulkan: частичные цветовые Clear с viewport/scissor и сохранением остальных
  пикселей (`35964365384`, headless/WSI); это отдельная проверка цветового пути, не MSAA.
- XAM ContentClose: завершение event/polling OVERLAPPED, сохранение пользовательского
  completion context, ошибка отсутствующего корня и отказ до изменения корня при
  неподдержанном APC/неверном event handle (`35964593544`, Windows/Linux).
  Это исправление снятия виртуального корня и completion, не полная семантика
  content packages, закрытия всех открытых файлов пакета или всей XAM HLE.
- XMA: настоящий сжатый образец через MMIO → FFmpeg → гостевой PCM ring,
  включая эквивалентность PCM после release/reuse (`35964700653`, Windows/Linux).

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
