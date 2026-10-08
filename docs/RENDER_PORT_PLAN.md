# План: видимый кадр через наш переводчик (путь B)

Решение (выбрано пользователем): **путь B** — портируем/доводим переводчик
draw-вызовов, штатный Xenos не трогаем. Трек `rexgpu-native` (эмулятор GPU)
**заморожен как инструмент данных**: он остаётся собираться и остаётся полезен
для дампов и офлайн-реплея, но картинки от него больше не ждём.

## 1. Что уже написано (проверено по коду, а не по названиям)

| Слой | Где | Состояние |
|---|---|---|
| Хуки гостевых вызовов устройства | `SonicGenerationsRecomp/gpu/guest_hooks.cpp` + `guest_entries.inc`, в новом хосте — `rex/src/gpu_hooks.cpp` | есть: CreateDevice, DrawVertices, DrawIndexedVertices, Clear, Resolve, SwapHelper |
| Захват батча (состояние + ресурсы + индексы) | `SonicGenerationsRecomp/gpu/{native_commands,native_resources,resource_conversion}.cpp`, мост `rex/src/native_gpu_bridge.{h,cpp}` | есть; покрыты **два** пути вывода, `NativeBatch::CompleteCoverage = false` |
| Перевод состояния в Vulkan | `SonicGenerationsRecomp/gpu/vulkan_backend.cpp` (`SubmitNativeFrame`) | есть: тайловые поверхности EDRAM, depth-цели, clear, resolve, последовательность команд, отказ при неоднозначных целях |
| Пайплайны | `vulkan_host.cpp::CreateGraphicsPipeline` (SPIR-V вершинного и пиксельного шейдеров, биндинги, атрибуты, cull/front-face, depth/stencil, blend, color write mask) | есть |
| WSI (swapchain) | `vulkan_host.cpp`: surface, `ResizeSwapchain`, `SwapchainNeedsResize`, acquire/present | есть |
| Шейдеры | `shader_cache_loader.cpp` + `shader_cache.cpp` (24 МБ, SPIR-V **и** DXIL, хэш XXH3) | есть |
| Драйвер пути в новом хосте | `rex/src/native_gpu.cpp`: `NativeGpuBridge` → `VulkanBackend` → (offscreen / BMP) | есть, но в экспериментальном offscreen-режиме |

Итого: у нас не «нет рендера», а «рендер есть, но он не показывает кадр в окно и
покрывает не все пути вывода». Это разница между месяцами и днями.

## 2. Чего не хватает (это и есть работа)

1. **Единое устройство.** Сейчас в процессе два независимых Vulkan-устройства:
   у плагина (`rex/plugins/native/src/native_vulkan_core.cpp`, владеет swapchain
   окна) и у переводчика (`vulkan_host.cpp`). Обмениваться изображениями между
   ними нельзя без external-memory, и это не нужно: устройство должно быть одно.
2. **Кадр в окно.** Перевод рисует в offscreen-изображение и отдаёт его
   readback'ом (BMP) вместо презентации в swapchain.
3. **Покрытие.** Захвачены два пути вывода из нескольких; полнота батча явно
   помечена как неполная.
4. **Обвязка режима.** Видимый кадр должен включаться явным режимом (например
   `SONIC_REX_GRAPHICS_MODE=translate`), чтобы `reference` оставался ровно тем,
   чем был.

## 3. Решение по устройству (уточнено по коду, чтобы не переделывать дважды)

Первая редакция этого плана предполагала «устройство и swapchain принадлежат
плагину `rexgpu-native`, переводчик переезжает в плагин». Чтение кода показало,
что это лишняя работа: переводчик (`SonicGenerationsRecomp/gpu/*`) **уже имеет
полноценное устройство с WSI** в хосте (`HostGpu::VulkanHost`: instance/device/
очередь, `createSurface`, `ResizeSwapchain`, `PresentImage`), а `VulkanBackend`
уже принимает окно. Поэтому:

- **Устройство и swapchain — хостовые**, в переводчике. Ничего никуда не
  переезжает, граница DLL не участвует, `rexgpu-native` в этом режиме вообще не
  задействован.
- **Презентер — наш, хостовый** (`rex/src/translate_presenter.{h,cpp}`): окно
  само отдаёт презентеру поверхность (`Window::SetPresenter` →
  `CreateSurface(GetSupportedSurfaceTypes())`), мы строим Vulkan-поверхность из
  HWND/hinstance и презентуем кадр переводчика через `PresentImage`.
- **SDK-устройство остаётся SDK-у**: гостевое кольцо, writeback, фенсы,
  прерывания и shader storage — как в `reference`, поэтому игра ведёт себя
  одинаково в обоих режимах. Меняется ровно одно: **кто подключён к окну**.
  Внутренний презентер Xenos никуда не подключается (в него SDK-шный command
  processor и пишет кадры), так что на HWND всегда один swapchain — как требует
  платформа.
- **Подменить SDK-шный презентер своим нельзя, и это проверяемо:** его command
  processor (`src/graphics/vulkan/command_processor.cpp:2411`) приводит контекст
  refresh к `VulkanPresenter::VulkanGuestOutputRefreshContext`. Чужой презентер
  там — это UB, а не «не поддерживается». Поэтому наш презентер — отдельный
  объект для окна, а не замена их.
- **`plume` не добавляем сейчас.** Он нужен, если мы захотим D3D12/Metal или
  захотим выкинуть свой RHI ради сопровождаемого. Наш `vulkan_host` уже тонкий
  RHI с WSI, пайплайнами и барьерами; сначала показываем кадр им, а замену RHI
  делаем измеренной задачей, а не верой. (Если позже понадобится — `plume` MIT,
  лицензия совместима.)

## 3a. Что уже сделано (этот шаг)

- Режим `SONIC_REX_GRAPHICS_MODE=translate` (`host_policy.h`, `sonic_app.h`) и
  обёртка `TranslateGraphics` (`rex/src/translate_graphics.h`): гостевые сервисы
  идут в SDK, презентер окна — наш, `provider()` намеренно `nullptr` (overlay'ев
  в этом режиме пока нет).
- `TranslatePresenter` (`rex/src/translate_presenter.{h,cpp}`): поверхность
  Win32 → `VulkanBackend::SetWin32Surface`, презент кадра переводчика, счётчики
  `frames/presents/refused`, `CaptureGuestOutput` для скриншотов.
- Win32-поверхность без SDL в `vulkan_backend.cpp` (+
  `VK_USE_PLATFORM_WIN32_KHR` в `cmake/VulkanHost.cmake`): ReXGlue владеет окном,
  поэтому SDL не спрашиваем вообще.
- Устройство создаётся **вместе с поверхностью**: до подключения презентера
  кадры считаются (`frames_without_surface`), а не рендерятся в никуда — иначе
  устройство создалось бы без расширений платформы и презентовать было бы некуда.
- Отчёты прогона: `status.txt` (`mode=present`, `presentable`, `notified`,
  `notify_refused`, `frames_without_surface`, `frames_without_presenter`) и
  `coverage.txt` (по каким причинам draw-вызовы не приняты) — в
  `assets/rex-cache/native/<сессия>/`.
- Запуск: `rex/windows/Run-ReXGlue-Translate.cmd` — ставит режим и печатает
  оба отчёта, чтобы «чёрное окно» было диагнозом, а не загадкой.
- Проверки: `host_contract_tests` (разбор режима, включая отказ на `translate `),
  `test_translate_mode_policy` (что видимый кадр — наш и что SDK-презентер к окну
  не подключён), `rex/tools/check_windows_tus.py` теперь компилирует **Windows-ветку**
  презентера на Linux (со заглушками Win32-заголовков из `rex/tools/winstub`).

## 3b. Что осталось в шаге 1

- Первый живой прогон: он покажет `presentable`/`notified` (доходит ли кадр до
  окна) и `coverage.txt` (что именно переводчик отказывается рисовать).

## 4. Порядок работ

1. **Кадр в окне на уже готовом переводе.** Перевести offscreen-путь на
   презентацию в swapchain плагина; критерий — кадр игры виден в окне при
   `translate`, а `reference` не изменился.
2. **Покрытие путей вывода.** Закрыть оставшиеся draw-пути и снять
   `CompleteCoverage = false` там, где это честно; каждый отказ — со счётчиком и
   причиной (как сейчас в `CaptureErrors`).
3. **Шейдеры Generations.** Прогнать `tools/XenosRecomp` по шейдерам игры,
   дописать то, что в рекомпиляторе захардкожено под Unleashed (вершинные
   локации, семантики, инстансинг), и подключить SPIR-V из нашего кэша.
4. **Пост-обработка и MSAA.** Гамма, resolve MSAA (2x/4x/8x), motion blur —
   из готового HLSL Unleashed (GPL-3.0, наш рантайм уже производная от него).
5. **Производительность.** Многопоточная подготовка пайплайнов/дескрипторов,
   кэш пайплайнов по ключу состояния, затем — измерение и только потом решения.

## 5. Что считается «сделано» на каждом шаге

| Шаг | Проверка, которую можно предъявить |
|---|---|
| 1 | скриншот кадра игры в режиме `translate` + `reference` без изменений |
| 2 | покрытие: ноль отказов `Incomplete` на уровне, счётчики причин пусты |
| 3 | шейдеры уровня компилируются в SPIR-V, нет «placeholder draws» |
| 4 | сверка с `reference` по кадрам (ролики, переходы, эффекты) |
| 5 | fps и время кадра на GTX 1050 Ti, сравнение с `reference` |

## 6. Что замораживается

- `rex/src/gpu_native/*` (CP, EDRAM-эмуляция, render_state), `rex/plugins/native`
  как *эмулятор*, офлайн-реплей — **остаются** как инструмент данных: дампы,
  отчёты, разбор потока. Новых фич растеризации в них не добавляем.
- Инструменты (`rex_gpu_replay`, `Run-Native-GPU-*`) остаются в пакете: они не
  мешают и объясняют, что видит гость.
