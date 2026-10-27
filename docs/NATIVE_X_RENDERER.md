# NativeXRenderer в этом репозитории

[NativeXRenderer](https://github.com/ElGuslml/NativeXRenderer) (дальше NXR) — рендерер для игр,
рекомпилированных SDK ReXGlue. Он не эмулирует GPU консоли (Xenos): он перехватывает точки входа
**Direct3D-библиотеки XDK**, слинкованной в `default.xex`, и рисует каждый вызов напрямую на
DiligentCore/Vulkan. Эмуляция Xenos остаётся как эталон и запасной путь.

```
код игры (рекомпилированный PPC)
  │ вызовы
  ▼
точка входа XDK D3D (sub_XXXXXXXX)  ── перехват через REX_HOOK_RAW
  │                                   │
  │ оригинальная функция всё равно    │ после возврата:
  ▼ выполняется                        ▼
PM4-пакеты в кольцо               NXR читает состояние D3D-устройства
  │                               (регистры, константы, шейдеры, поверхности)
  ▼                                и записывает host-draw
SDK command processor в режиме
"только синхронизация": fence,
interrupt, vblank, swap
```

Выигрыш ровно тот, ради которого это делается: render target — обычная host-текстура, resolve —
ссылка на неё, тайловая сцена рисуется один раз, разрешение — любое, а не кратное разрешению
консоли. На POTCAWE это −38…56 % нагрузки на GPU при той же картинке.

## Что уже есть в репозитории

| Часть | Где | Состояние |
|---|---|---|
| Сам рендерер | `thirdparty/native_x_renderer` (сабмодуль, закреплён на коммите из `rex/dependencies.json`) | внешний проект, MIT |
| Инструменты разбора нашего кода | `tools/nxr/` (`ppc_index.py`, `scan.py`) | работают на `ppc/` (старая кодогенерация XenonRecomp) и на новой ReXGlue |
| Карта D3D-слоя Sonic Generations | [native-x-renderer-sonic-generations.md](native-x-renderer-sonic-generations.md) | первый проход: найдены draw-, resolve- и tiling-кандидаты, layout устройства **не** подтверждён |
| Игровая сторона (профиль + хуки) | `rex/src/native_x/` | профиль с `kUnknown`, список хуков пуст — включается после шага 3 чек-листа |
| Сборка | `rex/CMakeLists.txt`, опция `SONIC_REX_NATIVE_X_RENDERER` | выключена по умолчанию, добавляется поверх пути Xenos |

## Что нужно, чтобы включить

1. **SDK из исходников**, ветка `recomp` репозитория `ElGuslml/rexglue-sdk` (закреплённый коммит —
   `rex/dependencies.json`, поле `sdk_recomp`). Установленный пакет SDK v0.10.0 не подойдёт: NXR
   компилирует шейдерный транслятор и код регистров SDK внутрь себя, а `REX_HOOK_RAW`,
   draw observer и общие исправления графики есть только в ветке `recomp` (их список — `RECOMP.md`
   этого SDK).
2. **Сабмодуль NXR с его собственным DiligentCore**:
   ```bash
   git submodule update --init thirdparty/native_x_renderer
   git -C thirdparty/native_x_renderer submodule update --init --recursive
   ```
3. **Сгенерированный код Sonic Generations под ABI ReXGlue** (`SONIC_REX_GENERATED_DIR`).
   Каталог `ppc/` этого репозитория — вывод старого XenonRecomp, он **не** подходит (другая
   кодогенерация); `ppc/` остаётся для старого рантайма и для разбора адресов через `tools/nxr/`.
4. Сборка:
   ```powershell
   cmake -S rex -B build-nxr -G "Visual Studio 17 2022" -A x64 -T ClangCL `
     -DSONIC_REX_BUILD_GAME=ON `
     -DSONIC_REX_NATIVE_X_RENDERER=ON `
     -DREXSDK_DIR=<дерево rexglue-sdk, ветка recomp> `
     -DSONIC_REX_GENERATED_DIR=<generated/default>
   ```

## Порядок доведения до картинки (по чек-листу NXR)

Состояние отмечено честно: то, что здесь нельзя проверить, отмечено как «не сделано».

- [x] **Шаг 0. Инструменты.** Индексатор форматов XenonRecomp и ReXGlue, скан PM4-пакетов —
      `tools/nxr/`; карта снята с `ppc/` (153 882 функции).
- [ ] **Шаг 1. Карта D3D-слоя.** Найдены кандидаты (draw, resolve, tiling, queries), но
      `DeviceLayout` и `ObjectLayout` не выведены: нужен разбор flush-функции draw и проверка.
      Начало — в [карте](native-x-renderer-sonic-generations.md), там же команды.
- [ ] **Шаг 2. Игровая сторона.** `rex/src/native_x/`: профиль и список хуков. Сейчас профиль пуст
      (`kUnknown`) — это правильно: выдуманное смещение в устройстве рисует мусор и маскируется под
      «баг рендерера».
- [ ] **Шаг 3. Проверка без рисования.** `--native_x_renderer_trace=true` (F9 — дамп кадра,
      `thirdparty/native_x_renderer/tools/frame_trace.py`), затем `--native_x_renderer_verify=true`
      (F10 — observer сверяет состояние каждого draw с регистрами SDK). Итерировать до 100 % совпадений
      на меню, уровне, ролике.
- [ ] **Шаг 4. Включение рисования.** `--native_x_renderer=true`, сравнение скриншотов с путём Xenos,
      затем A/B по производительности.
- [ ] Сглаживание/разрешение: `Profile::scene_resolve_caller` (FXAA/SMAA), `widens_cameras`
      (21:9 и выше), DLAA — только после полного прохождения на Xenos-эталоне.

## Как это включается в коде

`SONIC_REX_GRAPHICS_MODE=reference` (по умолчанию) — грузится `rexgpu-xenos.dll` SDK, NXR ничего не
делает. Если собрано с `-DSONIC_REX_NATIVE_X_RENDERER=ON`, в `SonicApp::OnPostSetup()` вызывается
`sonic::rex_host::native_x::Initialize(...)`. Дальше решают cvar'ы самого NXR:

| Cvar | Что делает |
|---|---|
| `--native_x_renderer=true` | NXR рисует вместо Xenos |
| `--native_x_renderer_trace=true` | считает и дампит вызовы D3D по кадрам (F9) |
| `--native_x_renderer_verify=true` | observer: сверяет состояние draw с регистрами SDK (F10) |

Пока cvar не выставлен, путь Xenos работает ровно так, как работал: интеграция ничего не ломает и
ничего не ускоряет.

## Ограничения, о которых нужно сказать вслух

- **NXR не делает игру рабочей.** Он заменяет рисование. Если игра не доходит до меню на пути Xenos,
  NXR это не исправит — эталонный путь должен работать первым.
- **Карта D3D — гипотеза до observer'а.** Номера функций в карте получены по пакетам, которые они
  строят; это сильная, но не окончательная улика.
- **Ни одна строка этой интеграции не проверена запуском** в этой среде: здесь нет ни Windows, ни
  GPU, ни Vulkan, ни дампа игры. Проверка — на вашей машине, шагами 3–4 выше.
