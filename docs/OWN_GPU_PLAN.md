# Свой GPU вместо Xenos: состояние и план

Документ отвечает на один вопрос: **сколько именно ReXGlue сейчас рисует кадр и
что нужно, чтобы это делал наш код**. Данные проверены по исходникам SDK
(пин `f5337cd`) и по нашему репозиторию, а не по названиям файлов.

## 1. Что рисует картинку сегодня

Картинку целиком даёт плагин SDK `rexgpu-xenos` — он грузится явно, одной
строкой в `rex/src/sonic_app.h`:

```cpp
auto original = rex::system::LoadGpuPlugin("xenos", "vulkan");
```

Плагин — отдельная DLL (`src/graphics/plugin_main.cpp` в SDK, экспорт
`rex_gpu_create`), ядро SDK её не линкует: «consumers never link this target».
Её содержимое (только Vulkan, без D3D12-байткода): **148 файлов, ~8.9 МБ
исходников**, а именно:

| Часть | Что делает |
| --- | --- |
| `command_processor.cpp`, `packet_disassembler.cpp`, `registers*.cpp`, `register_table.inc` | разбор PM4-потока, файл регистров Xenos, writeback read-pointer |
| `vulkan/command_processor.cpp`, `render_target_cache.cpp`, `texture_cache.cpp`, `pipeline_cache.cpp`, `primitive_processor.cpp` | собственно рендеринг: EDRAM, resolve, текстуры, пайплайны, примитивы |
| `pipeline/shader/spirv_translator*.cpp` (~413 КБ) | трансляция микрокода шейдеров Xenos в SPIR-V |
| `vulkan/graphics_system.cpp`, `ui/vulkan/vulkan_presenter.cpp` | провайдер и презентер окна |

Наш собственный GPU-код сегодня — это `rex/src/pm4.*`, `native_gpu*.{h,cpp}`,
`gpu_capture.*` и `SonicGenerationsRecomp/gpu/*` (vulkan_backend, vulkan_host,
native_commands, native_resources, resource_conversion, shader_cache):
**≈11 тыс. строк**, из которых 6.4 тыс. — сгенерированный кэш шейдеров, то есть
около 4.7 тыс. написано вручную. То есть
наша часть — это Vulkan-устройство, WSI (swapchain/present), модель команд
(draw/clear/resolve), конвертация форматов и тайлов и **новый** декодер
командного потока; нет EDRAM, resolve-конвейера, кэшей RT/текстур, транслятора
шейдеров и командного процессора как устройства.

## 2. Что должно стать нашим

Плагинная точка входа SDK — две C-функции и интерфейс:

```cpp
extern "C" uint32_t rex_gpu_abi_version(void);
extern "C" rex::system::IGraphicsSystem* rex_gpu_create(uint32_t abi, const GpuCreateInfo*);
```

`IGraphicsSystem` (`include/rex/system/interfaces/graphics.h`) состоит из
`SetupPresentation`, `SetupGuestGpu`, `has_presentation`, `provider`,
`presenter`, `SetInterruptCallback`, `InitializeRingBuffer`,
`EnableReadPointerWriteBack`, `InitializeShaderStorage`, `Shutdown`. Комментарий
в интерфейсе прямо разрешает полностью свой путь: «custom systems may leave
these [provider/presenter] null».

Обязательства перед гостем, которые нельзя пропустить, иначе игра встанет, а не
«просто без картинки»:

1. **MMIO-перехват регистров GPU** — регистрируется в `SetupGuestGpu`; через него
   приходят все записи D3D-драйвера гостя.
2. **Кольцевой буфер** — `VdInitializeRingBuffer(ptr, size_log2)` задаёт базу и
   размер (`1 << (size_log2 + 3)` байт), запись указателя записи идёт через MMIO.
3. **Writeback read-pointer** — `VdEnableRingBufferRPtrWriteBack(ptr, block_log2)`;
   гость ждёт, что его прочитают, и без записи указателя чтения он встанет.
4. **Swap-токен** — `VdSwap` (экспорт ядра, остаётся в ReXGlue) кладёт в
   кольцевой буфер Type-0 пакет с fetch-константой переднего буфера, затем
   Type-3 пакет `0x64` с сигнатурой `'SWAP'`, физическим адресом, шириной и
   высотой, затем NOP-ы. Это и есть запрос на кадр.
5. **Прерывание** — `VdSetGraphicsInterruptCallback(callback, user_data)`; после
   swap нужно вызвать гостевой колбэк (`DispatchInterruptCallback` в SDK —
   метод конкретного класса, у своего плагина он свой).

Проверено по SDK: гостевая память **big-endian**, поэтому и запись токена, и
чтение потока идут через swap — наш `pm4::BigEndianDwordSource` это делает и
покрыт тестом.

## 3. Граница «нашего» GPU (решение)

Рендеринг — полностью наш: командный процессор, регистровый файл, ring buffer,
writeback, swap, EDRAM/resolve, кэши RT и текстур, пайплайны, трансляция шейдеров.
Из SDK допускаются только **безсостоятельные таблицы и форматы** Xenos
(`xenos.cpp`, конвертация текстур, индексы регистров) — то, что уже лежит в ядре
rexcore и не содержит эмуляции устройства. Плагинная сборка `rexgpu-xenos` в
нашем маршруте не используется вовсе.

## 4. Что уже сделано в этом направлении

- `rex/src/pm4.h/.cpp` — свой декодер PM4: заголовки всех четырёх типов,
  регистровые записи (включая бит «писать в один регистр»), рекурсия по
  `INDIRECT_BUFFER` с лимитами по глубине и количеству, распознавание swap-токена
  только по подписи и только без предиката, учёт всех пакетов по действиям
  (`Stats`), отказ при обрыве потока; **никаких зависимостей от SDK**.
- `rex/tests/pm4_tests.cpp` — 16 проверок, включая big-endian, обрыв потока,
  лимиты, поддельный (`0x64` без подписи) и предицированный swap.
- `rex/src/gpu_hooks.cpp` — зонд реального потока: после swap-хелпера читает
  кандидаты-аргументы (до 4 КБ каждый), находит токен по подписи, выгружает
  окно 8 КБ потока в `assets/rex-cache/pm4/` вместе с отчётом нашего же декодера
  (гистограмма опкодов). Только чтение, лимит 8 дампов, включается
  `SONIC_REX_PM4_DUMP=1`.
- `rex/src/native_coverage.h` — доля draw-ов, которые наш рендерер реально
  исполняет (`coverage.txt`, строка `[native] coverage:`), с разбором причин.

### Свой GPU-девайс (ядро скелета)

- `rex/src/gpu_native/registers.h`, `register_file.{h,cpp}` — свой регистровый
  файл: гостевые семантики чтения (`RB_EDRAM_TIMING`, `RB_BC_CONTROL`,
  v-counter, interrupt status, viewport size) и записи (kick `CP_RB_WPTR` только
  из MMIO, запись выше окна сохраняется, а не теряется).
- `rex/src/gpu_native/command_processor.{h,cpp}` — свой командный процессор:
  ring buffer с индексами в dword-ах и переносом через конец, вытяжка
  доступных пакетов, **writeback read-pointer в гостевой памяти**, исполнение
  регистровых записей, swap-токена (через собственный презентер) и
  `PM4_INTERRUPT` по маске CPU, `MarkVblank` для vblank-прерывания, пул
  INDIRECT_BUFFER с маской `0x1FFFFFFF`, счётчики всего, включая
  неисполненное.
- Обрыв пакета не потребляется: чтение возвращается к последнему целому
  пакету (`completedWords`), поэтому недописанный гостём кадр не исполняется ни
  частично, ни дважды.
- `rex/tests/gpu_device_tests.cpp` — 15 проверок устройства (перенос кольца,
  writeback, swap, прерывания, обрыв пакета, INDIRECT_BUFFER, отказ при
  некорректной инициализации, пустой kick). Локально пройдены под
  `-Wall -Wextra -Werror` и под ASAN/UBSAN.

### SDK-оболочка плагина (сделана целиком, вместе с презентером)

`rex/plugins/native/` — наш `rexgpu-native`: экспорты `rex_gpu_abi_version`/
`rex_gpu_create` (чужой backend отвергается, а не подменяется), `IGraphicsSystem`
с MMIO-окном `0x7FC80000` через `AddVirtualMappedRange`, kick `CP_RB_WPTR` только
из MMIO, ring/writeback/swap/прерывания — через наш `CommandProcessor`,
vblank-поток `XHostThread` и **рабочий поток командного процессора** (без него
никто не пишет read pointer и гость встаёт на первом swap),
`ExecuteInterrupt` по колбэку гостя.

Презентер — наш, на нашем Vulkan-устройстве:

| Файл | Что делает |
| --- | --- |
| `native_vulkan_api.{h,cpp}` | свой резолв `vulkan-1.dll`: таблица функций по фазам (global/instance/device). Линкуется только `Vulkan::Headers` — ни loader, ни Vulkan SDK не нужны |
| `native_vulkan_core.{h,cpp}` | instance, выбор адаптера (discrete → integrated → virtual → CPU), устройство, очередь graphics/present, поверхность Win32 HWND, память, команды, барьеры |
| `native_vulkan_presenter.{h,cpp}` | `rex::ui::Presenter` + `GraphicsProvider`: swapchain (mailbox → immediate → fifo), 3 mailbox-изображения, clear + `vkCmdBlitImage`, letterbox, реконнект по `kPresentedSuboptimal`, `CaptureGuestOutput` |
| `native_frame_source.{h,cpp}` | кадр из гостевой памяти по адресу переднего буфера из swap-токена (8_8_8_8), через тот же адаптер, что и командный процессор |
| `presenter_logic.h` | арифметика презентации без Vulkan: letterbox, extent, число изображений, границы кадра — тесты `rex_presenter_logic` |
| `rex/src/gpu_native/stream_dump.{h,cpp}` | запись настоящего потока команд из кольца (см. ниже) |

Кадр приходит по цепочке: swap-токен → `SwapSink` → `NativeGraphicsSystem::OnGuestFrame`
→ `NativePresenter::OnGuestFrame` → `RefreshGuestOutput` (mailbox) → paint
(clear + blit) → present. Пока рендер не резолвит EDRAM в передний буфер, в окне
видно ровно то, что лежит в гостевой памяти по адресу из токена, а если читать
нечего — палитра «нет кадра» (`kNoFrameClear`), чтобы это нельзя было принять за
нарисованный кадр.

Сборка — опция `SONIC_REX_BUILD_NATIVE_PLUGIN=ON`, загрузка хостом —
`SONIC_REX_GRAPHICS_MODE=native` (или `SONIC_REX_GPU_PLUGINS=native` для
`rexglue_configure_target`); если DLL нет рядом с EXE, запуск падает с ошибкой.
По умолчанию остаётся `xenos`.

Отдельно стоит записать две ошибки, каждая из которых стоила прогона CI, потому
что они типовые для «свой рендерер без SDK»:

1. **Типы Win32.** `HMODULE` — не `void*`. Локальная заглушка `windows.h`
   (`rex/tools/winstub`) объявляла его как `void*` и пропускала
   `FreeLibrary(void*)`, который на Windows — ошибка компиляции. Теперь заглушка
   держит `HMODULE`/`HINSTANCE`/`HWND`/`HMONITOR`/`HDC` непрозрачными типами, как
   настоящий SDK, и это зафиксировано тестом.
2. **Выходной каталог.** Цель, объявленная в подкаталоге (`rex/plugins/native`),
   при Visual Studio кладёт DLL в `build-rex-plugin/plugins/native/Release`, а не
   рядом с остальными бинарниками. Теперь `RUNTIME_OUTPUT_DIRECTORY_<CONFIG>`
   задан явно, а CI ищет DLL рекурсивно и складывает её в одно место
   (`native-plugin/rexgpu-native.dll`) для упаковки и артефакта — «сборка прошла,
   а DLL нет» больше не может произойти незаметно.
3. **Loader не линкуется.** Плагин резолвит `vulkan-1.dll` сам и не линкует
   импорт-библиотеку, поэтому обращение к `vkGetInstanceProcAddr` как к глобальной
   функции — это `undefined symbol` на линковке. Теперь `VK_NO_PROTOTYPES`
   выставлен для всех TU плагина, и такое обращение становится ошибкой
   компиляции; резолв идёт только через собственные указатели
   (`Api::GetInstanceProcAddr`, `Api::GetDeviceProcAddr`), а конверсия
   `FARPROC` → типизированный указатель делается побитовым копированием
   (`FunctionCast`), потому что `reinterpret_cast` функций ловит
   `-Wcast-function-type-mismatch`.

Важное про CI: плагин собирается **отдельным CMake-проектом**, и в нём нужен тот
же vcpkg-тулчейн, что у игры (`find_package(Vulkan)` иначе ничего не находит).
Раньше этот шаг был `continue-on-error` и падал молча, а маркер-артефакт
`rex-native-plugin-built` писался и тогда, когда DLL не было вовсе: так пакет
уехал без плагина. Теперь конфигурация получает тулчейн и триплет, отсутствие
`build-rex-plugin/Release/rexgpu-native.dll` — это ошибка, а не строчка в логе,
артефакт `rexgpu-native-plugin` содержит саму DLL, а «пакет без плагина»
отмечается аннотацией `::error`.

### Живые данные: что показал дамп swap-хелпера

Первый удачный прогон `SONIC_REX_PM4_DUMP=1` дал 32 идентичные строки
`arguments.txt`: `r3=40033300`, `r4=4003A010/4003A060` (два передних буфера),
`r6=0BADF00D`, `r7=FFFFFFFF`, `r10=00001000`. Разбор по коду самой игры
(`sub_82DC48B0`) и по `VdSwap`: это вызов `VdSwap(r3+4, …)`, то есть **фиксированный
буфер на 64 слова**, куда пишется только swap-токен.

Отсюда два вывода:

1. Аргументы swap-хелпера потоком команд не являются и им быть не могут; даже
   идеальный скан даёт один токен кадра. Рендерер на этом не построить.
2. Настоящий поток знает только наш командный процессор: ему
   `VdInitializeRingBuffer` отдаёт базу и размер кольца, а
   `VdEnableRingBufferRPtrWriteBack` — адрес writeback. Поэтому запись потока
   сделана внутри устройства: `SONIC_REX_GPU_DUMP=1` (в native-режиме) пишет
   `assets/rex-cache/gpu-dump/frame-NNN.bin` (сырые байты гостя между двумя swap)
   и `frame-NNN.txt` (разбор нашим же walker'ом), плюс `packets.txt` с итогами.

Отдельно исправлен сам зонд: он читал окно 1 КБ одним `ReadProcessMemory`,
упирался в невыделенную страницу за 256-байтовым буфером гостя и молчал, хотя
токен лежал в первом же слове. Теперь `ProbeSwapToken` читает по словам
(`wordsRead`), окно читается чанками, а каждая неудача пишется строкой в
`arguments.txt` и stderr.

### Состояние и геометрия (сделано)

`rex/src/gpu_native/render_state.{h,cpp}` — то, без чего рендерер не начать:

- `SET_CONSTANT` (0x2D): `(type << 16) | index`, дальше значения; type 4 пишет
  регистры (база 0x2000), 0/1/2/3 — таблицы ALU (0x4000), FETCH (0x4800),
  BOOL (0x4900), LOOP (0x4908). Неизвестный type считается, а не пишется в
  похожее место.
- `SET_CONSTANT2` (0x55) и `SET_SHADER_CONSTANTS` (0x56): плоский 16-битный
  индекс в том же пространстве регистров.
- `LOAD_ALU_CONSTANT` (0x2F): адрес, `(type << 16) | index`, размер; слова
  читаются из памяти гостя (big-endian) **сейчас**, потому что позже гость эту
  память перезапишет.
- draw-пакеты `DRAW_INDX` (0x22, с viz-токеном) и `DRAW_INDX_2` (0x36):
  `VGT_DRAW_INITIATOR` (primitive type, source select, major mode, размер
  индекса, количество), для DMA-источника — `VGT_DMA_BASE`/`VGT_DMA_SIZE` с
  длиной буфера в байтах; каждая запись `DrawCall` несёт снимок состояния
  (surface/color/depth info, scissor, адреса программ), потому что к моменту
  растеризации живые регистры уже относятся к другому draw-у.
- `IM_LOAD` (0x27) и `IM_LOAD_IMMEDIATE` (0x2B): байткод шейдера, из памяти гостя
  или из самого пакета; слова копируются, адрес программы публикуется в регистре.
- `PM4_MEM_WRITE` (0x3D): реальная запись значений в память гостя — гость её
  опрашивает, и потеря такой записи вешает его.

Считается всё, что не исполнено: `unknown_tables`, immediate-индексы, нечитаемые
и обрезанные загрузки шейдеров, непроверенные `DRAW_INDX_*_BIN`. Покадровый учёт
(`FrameSummary`) закрывается swap-токеном, а презентер забирает список draw-ов —
это контракт на следующий шаг. Проверки: `rex/tests/render_state_tests.cpp`
(цель `rex_render_state`), локально зелёные под `-Wall -Wextra -Werror` и
ASAN/UBSAN.

### Что ещё не сделано

- Первый кадр: причина `0xC0000005` найдена и исправлена (нулевой `VkDevice` в
  конструкторе презентера, раздел 6), сборка зелёная — **ждём прогон
  пользователем**. Пока наш презентер не рисует содержимое кадра: он умеет
  залить uniform-цвет, если гостевой передний буфер не поднялся.
- Растеризация: пайплайны, трансляция шейдеров, EDRAM/resolve в передний буфер,
  кэши RT и текстур, два draw-пути, viewport/state → Vulkan. Это следующий шаг,
  и у него теперь есть входные данные: офлайн-реплей даёт точный список работ
  кадра (опкоды, регистры, draw-ы) вместо догадок.
- Мост «наш декодер → наш Vulkan-бэкенд ровно в плагине»: сегодня
  `SonicGenerationsRecomp/gpu/*` (vulkan_host, native_commands, кэш SPIR-V,
  конвертация форматов) живёт на пути старых гостевых хуков, а `DrawCall`-ы
  плагина забирает презентер и пока только считает их.

## 5. Порядок работ

1. **Данные (частично получено).** `arguments.txt` с живой машины показал, что
   аргументы swap-хелпера — фиксированный буфер токена, а не поток. Следующий шаг
   данных — `rex\windows\Run-Native-GPU-Dump.cmd`:
   `SONIC_REX_GRAPHICS_MODE=native` + `SONIC_REX_GPU_DUMP=1`, после прогона
   `assets\rex-cache\gpu-dump\frame-NNN.bin/.txt` дают настоящие опкоды и их
   порядок. Это уже работает и не зависит от того, что рендера ещё нет.
2. **Командный процессор как устройство.** Регистровый файл, writeback
   read-pointer, swap по токену, прерывание, MMIO-перехват — то, без чего гость
   не живёт. Пока плагин Xenos остаётся активным, свой CP пишется и проверяется
   «в тени» на захваченных потоках.
3. **Рендер.** По гистограмме закрывать опкоды: EDRAM и resolve, кэш RT,
   кэш текстур, пайплайны, `SET_CONSTANT`/`SET_STATE`, два оставшихся draw-пути.
   Покрытие мерить тем же `coverage.txt`; критерий переключения — падение
   `unsupported` до нуля на реальных уровнях.
4. **Переключение.** Свой плагин (`rex_gpu_create` + `IGraphicsSystem` со своим
   провайдером/презентером на нашем Vulkan WSI) подключается к сборке; пока
   картинку рисует Xenos, режим `native` остаётся **отдельным** выбором, а не
   подменой.

Сейчас сделаны шаги 1 (декодер, зонд, запись с `memory.bin` и офлайн-реплей),
2 (устройство) и SDK-оболочка плагина с презентером. Шаг 3 (рендер) начинается с
моста: то, что декодер уже отдаёт (`DrawCall`, `ShaderProgram`, `FrameSummary`),
должно доходить до нашего Vulkan-кода (`SonicGenerationsRecomp/gpu/*`), а не
только считаться в статистике. Первый проверяемый кусок этого моста — описание
работы кадра (`viewport`/`scissor`, fetch-константы вершин, состояние
blend/depth, ключ пайплайна) **на данных реплея**, без GPU: это то, что можно
проверять в CI на каждой сборке, а не только прогоном на машине пользователя.

## 6. Диагностика падения плагина (в работе)

Состояние на сейчас: `rexgpu-native.dll` собирается, кладётся рядом с EXE и
подхватывается хостом (устройство стартует, `SetupPresentation`/`SetupGuestGpu`
вызываются), но процесс у пользователя завершился кодом `-1073741819`
(`0xC0000005`, access violation) **до первого кадра**, и файлов дампа не
появилось. Это не «медленно» и не «нет данных»: это падение, и лечится оно
локализацией, а не догадками.

Почему падение было «немым»: хост — GUI-приложение, у него нет консоли, а
диагностика плагина шла только в `stderr`. Отдельно: `Run-ReXGlue.cmd`
перенаправляет вывод процесса в `diagnostics\rex-runtime.log`, поэтому часть
строк видна и там; `echo`-строки самого `.cmd` («Graphics: OUR device…»,
«Stream recorder: ON») — это текст скрипта, а не доказательство работы устройства.

Что сделано, чтобы следующий прогон дал ответ:

| Инструмент | Что даёт |
| --- | --- |
| `rex/plugins/native/src/native_log.{h,cpp}` | файловый лог `diagnostics\native-gpu.log` рядом с EXE (плюс зеркало в `stderr`), маркеры стадий `LogSetContext`/`LogContext`, переопределение пути через `SONIC_REX_NATIVE_LOG` |
| `InstallCrashHandler()` (VEH + UEF) | первый AV **внутри нашего модуля** пишется сразу с `модуль+offset` и стадией; непойманное исключение даёт строку `CRASH … at rexgpu-native.dll+0x…; step: …` и последние 24 строки лога |
| `SONIC_REX_NATIVE_NO_PRESENT=1` | устройство (кольцо, рекордер, swap-токены) без Vulkan и без презентера: падение делится на «устройство» и «презентер» |
| `rex\windows\Run-Native-GPU-Trace.cmd` + `windows_crash_trace.exe` | запуск под отладчиком: `EXCEPTION …` и стек каждого исключения в `diagnostics\native-gpu-trace.log`, без ограничения времени (`SONIC_CRASH_TRACE_SECONDS=-1`) |
| артефакт `rexgpu-native-symbols` | `rexgpu-native.pdb`: `модуль+offset` из отчёта превращается в функцию |

Порядок разбора: сначала `rex-runtime.log` (загрузился ли плагин вообще и что
успел сказать хост), затем `native-gpu.log` (последняя стадия перед падением),
затем `native-gpu-trace.log` (стек). Только после этого — правка кода.

### Найдено в коде: `vkCreateCommandPool` с нулевым устройством

Пока диагностика ехала в сборку, причина `0xC0000005` нашлась чтением кода и
подтверждается порядком вызовов хоста (`ReXApp::SetupPresentation`: провайдер и
презентер создаются **до** окна, а устройство рождается только когда есть
поверхность):

| Что было | Почему это падение |
| --- | --- |
| `NativePresenter::NativePresenter` сразу звал `core_->CreateCommandPool(commandPool_, error)` | устройство в этот момент ещё не создано (`device_ == VK_NULL_HANDLE`), то есть в `vkCreateCommandPool` уходил **нулевой `VkDevice`** |
| `Core::CreateBuffer/CreateImage/CreateCommandPool/BeginCommands/SubmitAndWait` не проверяли `device_` | любой такой вызов — обращение к dispatch-таблице несуществующего handle **внутри `vulkan-1.dll`**, а не код ошибки: `0xC0000005`, файлов дампа нет, кадра нет |

Исправление (коммит после `b15c029`):

- `Core::DeviceRequired()` — единая проверка «есть ли устройство» на входе всех
  device-level вызовов; текст ошибки попадает в лог;
- `NativePresenter::EnsureDevice()` — устройство и command pool поднимаются
  лениво, из двух путей, которые могут сработать первыми: подключение
  поверхности (UI-поток) и `RefreshGuestOutput` (поток гостя после swap);
- в конструкторе презентера device-level работы не осталось вовсе (это
  закреплено policy-тестом).

Первый AV внутри нашего модуля теперь пишется с `модуль+offset` и стадией, а
первый AV в постороннем модуле (loader, драйвер) — как `another module`: именно
такой случай и дал этот краш, и без строки в логе он выглядел бы как «процесс
просто умер».

## 7. Честные риски

- Это замена GPU-эмулятора объёмом в тысячи строк, а не переключатель: этап 2–3
  измеряется неделями, и до его конца **видимую картинку рисует плагин Xenos**.
- Пока в сборке есть `rexgpu-xenos`, фризы и нагрузка лечатся не «native», а
  настройками SDK (`vsync`, `native_2x_msaa`,
  `vulkan_pipeline_creation_threads`, `vulkan_async_skip_incomplete_frames` —
  см. README). Наш offscreen-повтор кадр не рисует, а дублирует, то есть нагрузку
  только повышает.
- Совместимость сохранений и точность эмуляции GPU при переключении не
  проверены: `IGraphicsSystem`, MMIO и writeback — это то, что гость видит как
  железо.

## Реально сделано (проверяемо)

| Слой | Код | Состояние |
|---|---|---|
| Декодер/обход PM4 (кольцо, IB, предикаты, лимиты) | `rex/src/pm4.h/.cpp` | есть, контрактные тесты `rex_pm4` |
| Регистровый файл, ring buffer, writeback, swap | `rex/src/gpu_native/*` | есть, тесты `rex_gpu_device` |
| Свой Vulkan-бэкенд/презентер, SPIR-V кодеки | `SonicGenerationsRecomp/gpu/*`, `cmake/VulkanHost.cmake` | есть, но не на пути видимого кадра |
| Плагин `rexgpu-native` (наша `IGraphicsSystem`) | `rex/plugins/native/*` | DLL собирается и подхватывается хостом; причина падения `0xC0000005` найдена (нулевой `VkDevice` в конструкторе презентера) и исправлена — ждём подтверждения прогоном |
| Офлайн-реплей записи (`memory.bin`, отчёт по кадрам) | `rex/src/gpu_native/{memory_image,memory_sidecar,replay}.*`, `rex/tools/replay.cpp` | есть, тесты `rex_replay`, инструмент едет в пакете |
| Видимый кадр в игре | плагин SDK `rexgpu-xenos` | **SDK рисует, не мы** |

Правило о нулевых словах в кольце: слово `0x00000000` — это паддинг, а не Type-0
header. Иначе следующее слово читается как значение регистра 0 и весь поток
сдвигается (закреплено тестом и policy-тестом).
