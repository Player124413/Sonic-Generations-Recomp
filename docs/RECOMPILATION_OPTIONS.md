# Альтернативы: как получить картинку быстрее, чем эмуляцией GPU

Документ отвечает на вопрос «а нет ли готового слоя трансляции, чтобы не писать
GPU с нуля». Все утверждения ниже проверены по исходникам и README проектов, а не
по названиям.

## 1. Главный факт: в рекомпиляции GPU не эмулируют

Из README Sonic Unleashed Recompiled (наш образец, hedge-dev):

> «A new renderer was written from scratch to translate the game's draw calls to
> modern APIs while also taking advantage of multi-threading. **As emulation of
> the Xbox 360's GPU is not required in a recompilation**, many decisions were
> made to skip quirks of the original hardware that are not required in a PC
> port.»

То есть проверенный путь такой:

```
гостевой код (рекомпилированный PPC)
   │  вызовы D3D-устройства гостя (состояние, ресурсы, draw)
   ▼
переводчик draw-вызовов            ← это и есть «translation layer»
   │  pipeline state, дескрипторы, вершинные декларации
   ▼
plume (RHI: Vulkan / D3D12 / Metal, MIT)  →  Vulkan
   ▲
шейдеры: XenosRecomp → HLSL → DXC → SPIR-V (AOT, на этапе сборки)
```

Никакого PM4-потока, EDRAM, resolve, кэшей RT/текстур и транслятора микрокода в
рантайме.

## 2. Что из этого уже есть у нас в репозитории

| Кусок | Где | Состояние |
|---|---|---|
| Рекомпиляция PPC (XenonRecomp) | `tools/XenonRecomp`, `ppc/` | работает, игра запускается |
| Рекомпиляция шейдеров (XenosRecomp) → **SPIR-V** | `tools/XenosRecomp`, `SonicGenerationsRecomp/gpu/shader_cache.cpp` (24 МБ, поля `spirvOffset/spirvSize`) | кэш сгенерирован, грузится в рантайме |
| Захват draw-вызовов гостя | `SonicGenerationsRecomp/gpu/{guest_hooks,native_commands,state_dispatch,state_tables}.cpp` | покрыты два пути вывода (`NativeBatch::CompleteCoverage = false`) |
| Свой Vulkan-бэкенд | `SonicGenerationsRecomp/gpu/{vulkan_host,vulkan_backend,native_frame,video}.cpp` (≈2.2 тыс. строк) | подключён в legacy-хосте, **не на пути видимого кадра** |
| Ядро/XMA/ввод/ФС | ReXGlue SDK (наш `rex/`) | работает, игра грузится |
| Наш GPU-*эмулятор* (`rexgpu-native`) | `rex/plugins/native`, `rex/src/gpu_native` | устройство живёт, растеризатора нет — это самый долгий путь |

То есть **путь «переводчик draw-вызовов» у нас начат и заброшен**, а силы ушли в
эмуляцию GPU. Это и есть ответ на «что мы делаем не то».

## 3. Что можно взять готовым (по лицензиям и по факту)

| Компонент | Что даёт | Лицензия | Совместимость с нами |
|---|---|---|---|
| `plume` (renderbag) | RHI: Vulkan + D3D12 + Metal, одну ветку кода; используется в UnleashedRecomp и RT64 | MIT | да, без ограничений |
| `UnleashedRecomp/gpu/video.cpp` (7882 строки) | сам переводчик: состояние устройства гостя → plume, вершинные декларации, разрешение, MSAA-resolve, пост-эффекты (гамма, motion blur), дескрипторы, шейдерные кэши DXIL/SPIR-V с выбором на рантайме | GPL-3.0 | да: наш рантайм уже GPLv3 (derived from UnleashedRecomp) |
| HLSL пост-обработки Unleashed (`gpu/shader/*.hlsl`) | гамма, resolve MSAA 2x/4x/8x, gaussian blur, копирование | GPL-3.0 | да |
| SDK-плагин `rexgpu-xenos.dll` (Xenia GPU, 263 файла, 17 МБ) | полный эмулятор Xenos на Vulkan со SPIR-V-транслятором | BSD-3 (Xenia) | да, `THIRD_PARTY.md` уже его упоминает |

Важно про шейдеры: XenosRecomp не «из коробки» — README прямо говорит «Do not
expect the recompiler to work out of the box», а вершинные локации и обработка
инстансинга в нём захардкожены под Unleashed. Generations — та же Hedgehog
Engine, поэтому адаптация реалистична, но это работа, а не «включить флаг».

## 4. Решение

Выбрано: **B** — порт/доводка переводчика draw-вызовов; штатный Xenos не трогаем.
Трек `rexgpu-native` (эмулятор GPU) заморожен как инструмент данных. Подробный
план, точки подключения и порядок работ — `docs/RENDER_PORT_PLAN.md`.

## 5. Варианты (для истории решения)

| | Что делаем | Объём | Итог |
|---|---|---|---|
| **A** | Играем на штатном `rexgpu-xenos.dll` (Xenia Vulkan) — `Run-ReXGlue.cmd` | 0 | играбельная игра сегодня; картинку рисует SDK-плагин |
| **B** | Порт переводчика Unleashed: `plume` + `video.cpp` + наш SPIR-V-кэш, адаптация к Generations | дни–недели | «наш» рендер в нашей сборке, Vulkan/SPIR-V, без DXIL; архитектура ровно как у UnleashedRecomp |
| **C** | Гибрид: наш `rexgpu-native` остаётся точкой входа, но EDRAM/resolve/кэши берём из Xenia (BSD) | недели | свой плагин в ReXGlue-хосте без написания эмулятора с нуля |
| **D** | Дожать свой GPU-эмулятор (текущий трек: CP → EDRAM → resolve → кэши → транслятор шейдеров) | месяцы | полный контроль, самый долгий срок |

Практический вывод: **A — чтобы играть сейчас, B — чтобы «наш рендер» появился за
дни, а не месяцы**. C — компромисс, если важно, чтобы видимый кадр шёл через наш
плагин. D имеет смысл только как исследование (он уже дал ценный слой: декодер
PM4, журнал устройства, офлайн-реплей).

## 6. Если берём B: порядок работ

1. `thirdparty/plume` сабмодулем (MIT) + минимальный каркас: устройство Vulkan,
   swapchain, одна процедура вывода в окно (у нас уже есть `vulkan_host.cpp`, но
   его можно заменить на plume, чтобы не тащить два RHI).
2. Портировать перевод состояния из `video.cpp`: гостевое D3D-устройство →
   pipeline state/дескрипторы plume. Начать с одного пути: один шейдер, один
   draw, без MSAA и пост-эффектов — и увидеть кадр.
3. Шейдеры: подключить наш кэш (`ShaderCacheEntry.spirv*`) к пайплайну plume;
   прогнать XenosRecomp по шейдерам Generations и дописать то, что в нём
   захардкожено под Unleashed (вершинные локации, семантики, инстансинг).
4. Подавать draw-вызовы из нашего захвата (`GuestGpu::CommandStream`) прямо в
   переводчик: `NativeBatch` уже несёт состояние, ресурсы и шейдерные хэши.
5. Пост-эффекты и MSAA — из готовых HLSL Unleashed, адаптировав к разрешениям
   Generations.
6. Критерий готовности: играбельный уровень в Vulkan без плагина Xenos, затем
   сверка с эталоном по кадрам (ролики, переходы, эффекты).

## 7. Что честно сказать про лицензии

- `plume` — MIT: можно вендорить как угодно.
- Код UnleashedRecomp — GPL-3.0, и наш рантайм уже под GPLv3 (`COPYING`,
  производная от UnleashedRecomp), поэтому порт совместим. Указание авторства —
  в `THIRD_PARTY.md`.
- `rexgpu-xenos.dll` (Xenia GPU) — BSD-3: совместимо и с GPLv3, и с MIT.
- Файлы игры не распространяются: только код.
