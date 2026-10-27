# Нативный рендеринг для Sonic Generations: Windows + Android

Цель: рисовать игру не через эмуляцию GPU консоли (Xenos), а напрямую — перехватывая вызовы
Direct3D-библиотеки XDK, которая слинкована в `default.xex`. Тогда EDRAM, тайлинг и resolve-копии
исчезают из кадра, разрешение становится любым, а на телефонах (TBDR-архитектура Adreno/Mali) это
самый большой выигрыш из возможных.

## Главное: рендеринг платформенно-нейтрален

```
код игры (рекомпилированный PPC)
  │  Vd*/D3D-вызовы
  ▼
наш host (ReXGlue) ──► перехват точек входа D3D ──► состояние устройства ──► RHI ──► Vulkan
                                                                        │
                                        ┌───────────────────────────────┼──────────────────┐
                                        ▼                               ▼                  ▼
                                   Windows (Vulkan)              Android (Vulkan)     (D3D12/Metal
                                                                                       — бонус RHI)
```

Ядро рендерера (перехват, состояние, шейдеры, render targets) **одно и то же** на обеих платформах;
различаются только окно/поверхность и RHI. Поэтому «сделать нативно на Windows, а потом отдельно на
Android» — неправильная постановка: делается один слой, а платформ два.

## Что уже есть и чего не хватает

| Часть | Состояние |
|---|---|
| Код игры и карта D3D-слоя | ✅ [D3D_LAYER_MAP.md](D3D_LAYER_MAP.md): найден главный draw-путь `sub_82DC85F0`, resolve/tiling/query-кандидаты, смещения устройства |
| Инструменты разбора | ✅ `tools/d3dmap/` (индекс `ppc/` и ReXGlue-кода, скан PM4, тест) |
| Host и сборка Windows | ✅ `rex/` (ReXGlue) + [REXGLUE_WINDOWS.md](REXGLUE_WINDOWS.md) |
| Сборка Android | ⚠️ дерево импортировано (`android/`, `android_sdk.sh`, 9 патчей SDK), не собиралось — см. [ANDROID.md](ANDROID.md) |
| RHI-слой | ⚠️ выбран plume, есть seam и probe устройства (`rex/src/native/`); pipelines/RT/шейдеров ещё нет |
| Профиль устройства D3D (смещения) | ⚠️ есть улики, нет подтверждения на кадре |

## Чем рисовать: сравнение RHI

| | **plume** (`renderbag/plume`) | **DiligentCore** (путь NativeXRenderer) |
|---|---|---|
| Лицензия | MIT | Apache-2.0 |
| Бэкенды | D3D12, **Vulkan**, Metal | D3D11/12, **Vulkan**, OpenGL, Metal, WebGPU |
| Android | ✅ используется Android-портом Unleashed Recompiled (Vulkan/Turnip) | ✅ Vulkan-бэкенд есть, но на Android в связке с таким рендерером не проверялся |
| Совместимость с вашим SDK | RHI без требований к SDK → работает с **v0.10.0 + ваши Android-патчи** | нужен SDK с ветки `recomp` (NXR) → конфликт с вашими Android-патчами |
| Готовые примеры нативной графики | Xerenge (GPL-3.0, `rexglue/src/plume_renderer/`), daytona, rr6, naruto-rise | NativeXRenderer (MIT, POTCAWE/GRAW/Kameo) |
| Шейдеры | SPIR-V из SDK-транслятора (Xenos → SPIR-V), пайплайн кэшируется | то же |

**Решение (зафиксировано): plume.** Причины: он не тянет вторую ветку SDK, поэтому живёт вместе с
вашими Android-патчами v0.10.0; у него один Vulkan-бэкенд на обе платформы — Win32 `HWND` и Android
`ANativeWindow*` (проверено по `plume_render_interface_types.h` и путям создания поверхности в
`plume_vulkan.cpp`); MIT. Diligent/NXR-путь отброшен: он требует ветку `recomp` SDK и означает, что
Android придётся делать заново.

### Что уже в коде

| Файл | Что |
|---|---|
| `thirdparty/plume` | сабмодуль, закреплён на коммите (см. `rex/dependencies.json`), MIT |
| `rex/src/native/renderer.h` | seam: `Renderer` (Initialize/BeginFrame/Present/Shutdown) и `CreateRenderer()` |
| `rex/src/native/plume_renderer.cpp` | plume-бэкенд: создаёт Vulkan-интерфейс, выбирает устройство, пишет его описание в лог |
| `rex/src/native/native_renderer.cpp` | cvar `sg_native_renderer` (по умолчанию **выключен**) и безопасный запуск: нет драйвера — предупреждение и путь Xenos |
| `rex/CMakeLists.txt` | `-DSONIC_REX_NATIVE_RENDERER_PLUME=ON` собирает бэкенд; без флага код не существует |

Это **этап 3, шаг 1**: устройство поднимается и проверяется, рисование ещё не начато, Xenos ничего не
отдаёт. Следующий шаг — surface/swapchain из окна ReXGlue (Windows) и из `ANativeWindow` (Android),
затем первый очищенный кадр.

Как проверить probe на своей машине (Windows; ничего не рисует и ничего не ломает):

```bash
cmake -S rex -B build -DSONIC_REX_BUILD_GAME=ON -DSONIC_REX_NATIVE_RENDERER_PLUME=ON \
      -DSONIC_REX_GENERATED_DIR=<путь к сгенерированному коду> …
build/SonicGenerationsRecomp-ReXGlue.exe --sg_native_renderer=true
```

В логе будет либо `[native] plume device: <имя> (N MiB of dedicated video memory)`, либо
`[native] plume/vulkan is not available: …` и игра продолжится на Xenos. Никакого падения и никакого
изменения картинки в обоих случаях.

### Два пути устройства, пока рендерер не переехал

В репозитории уже был **Windows-only транслятор на «сыром» Vulkan**: `SonicGenerationsRecomp/gpu/`
(`vulkan_backend`, `vulkan_host`, `native_commands`, `shader_cache`, …) и его host-обвязка
`rex/src/native_gpu.cpp`, включаемая через `SONIC_REX_NATIVE_RENDERER` / `SONIC_REX_BUILD_NATIVE_PLUGIN`.
Он остаётся как есть: это единственный код с настоящим рендерером (шейдерный кэш, состояния,
ресурсы), даже если его WSI-тест в CI пока падает, — и ломать его ради архитектуры нельзя. Пока
plume-бэкенд — отдельный probe рядом с ним, а не его замена.

Переезд делается по частям и по мере того, как у plume появляются нужные вещи (swapchain, пайплайны,
render targets): тогда `vulkan_backend` перестаёт знать про `VkDevice`, а состояние draw из
`native_commands`/`state_dispatch` уходит в общий код `rex/src/native/`. Пока в дереве два пути —
так и написано в [STATUS.md](../STATUS.md), и это не «почти готово», а «два устройства, один из них умеет
рисовать».

## План работ (одинаковый для обеих платформ)

**Этап 0 — фундамент (сделано).** Карта D3D-слоя + инструменты.

**Этап 1 — карта устройства.** Разобрать flush в `sub_82DC85F0` (`sub_82DB5790`, `sub_82DB5400`):
группы регистров, базы констант (VS/PS/fetch), число грязных масок. Выход — структура
`DeviceLayout` (смещения) и `ObjectLayout` (текстуры/поверхности). Проверка — трассировка: счётчики
D3D-вызовов на кадр и сверка состояния draw с регистрами GPU-слоя SDK.

**Этап 2 — seam в host'е.** Один интерфейс рендерера в `rex/src/`:
`Initialize(graphics, window)`, `Draw(...)`, `Resolve(...)`, `Present(...)`; реализация `xenos`
(штатный плагин SDK) остаётся по умолчанию, `native` подключается опцией
(`SONIC_REX_GPU_PLUGINS=native`). Хук-файл игры (`src/native_x/`) регистрирует точки входа D3D.

**Этап 3 — минимальный кадр.** Достать состояние устройства на draw, построить пайплайны из
SPIR-V-транслятора SDK, вывести один render target в окно (Windows), затем то же на Android
(поверхность из `ANativeWindow`, никакого лишнего окна).

**Этап 4 — паритет.** Меню, HUD, ролики, тени, resolve-цепочки, render-to-texture; сравнение скриншотов
с путём Xenos на одних и тех же сценах. Только после 100 % — включать по умолчанию.

**Этап 5 — платформы.** Windows: FSR/DLSS по желанию. Android: TBDR-дружелюбные настройки (без
промежуточных копий, loadOp=clear на тайлах, без MSAA там, где игра сама его не просит), Turnip через
libadrenotools для Adreno.

## Реалистичная оценка

| Работа | Объём |
|---|---|
| Этап 1 (карта устройства) | дни, итерируя по трассировке |
| Этап 2 (seam + хуки) | часы |
| Этап 3 (первый кадр) | недели: пайплайны, состояния, форматы RT |
| Этап 4 (паритет) | недели-месяцы, по сценам |
| Android поверх этого | дни-недели (поверхность, драйвер, настройки) |

Пока нативный рендерер не дошёл до этапа 4, **играть надо на пути Xenos**: он уже работает, и его
производительность на телефоне лечится настройками — [ANDROID.md](ANDROID.md#производительность).

## Чего делать нельзя

- Копировать смещения из профилей других игр (POTCAWE/GRAW/Kameo): XDK-версии разные, а неверное
  смещение = чтение чужой памяти и «магические» артефакты.
- Начинать с Android: отладка рендерера на телефоне без RenderDoc/валидации в разы дороже, чем на ПК.
- Смешивать две ветки SDK в одной сборке: `recomp`-ветка (NXR) и ваши Android-патчи v0.10.0 не
  совместимы. Выбирается одна.
