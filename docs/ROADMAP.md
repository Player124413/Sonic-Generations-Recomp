# Дорожная карта / Roadmap

Порядок работ после текущего состояния.

## 1. Шейдеры (ваш приоритет)

Экспериментальный workflow: [SHADER_WORKFLOW.md](SHADER_WORKFLOW.md).
Кэш upstream требует адаптации ABI и не является готовой заменой runtime-кэша.

1. Из дампа достать архив шейдеров игры (у Unleashed это `shader.ar` в
   `shader/`; у Generations аналогичный контейнер в составе данных игры —
   ищите .ar/.pkt в `game/work/`).
2. Распаковать контейнер при необходимости: `tools/x_decompress` (LZX).
3. Собрать `tools/XenosRecomp` и прогнать на бинарниках шейдеров —
   на выходе HLSL. Правки под Generations могут потребоваться: README
   XenosRecomp прямо предупреждает, что репортер рассчитан на Unleashed
   (константы, семантики, инстансинг — см. его README).
4. Скомпилировать HLSL через **DXC** в DXIL (D3D12) и SPIR-V (Vulkan).
5. Сгенерировать `SonicGenerationsRecompLib/shader/shader_cache.cpp`
   (массив `ShaderCacheEntry`) и включить
   `SONIC_GENERATIONS_HAVE_SHADER_CACHE`.

## 2. GPU-бэкенд

Реализован опциональный Vulkan backend: реальные host buffers/images,
загрузка/копирование/clear/readback, очередь с fence и SDL swapchain/Present.
Три проверенных leaf state-функции заменяются host-обработчиками.
**Графические draw-пайплайны игры ещё не подключены.** Сборка и ограничения:
[VULKAN.md](VULKAN.md).

Добавлен независимый от готовых шейдеров слой: снимки нативного состояния,
константы/привязки, копии индексных данных и ограниченная очередь пакетов.
`SONIC_GPU_CAPTURE=1` включает его; NullBackend пакеты отклоняет.
Полная замена таблиц диспетчеризации остаётся незавершённой. Vulkan теперь
выполняет transfer/clear-команды; графические draw-команды игры пока не отправляются.
Подробности и ограничения — [GPU.md](GPU.md).

Выбран вариант A. Восемь наблюдательных SDK-перехватов сохраняют оригинальный
PPC-код; карта адресов и тесты — [GPU.md](GPU.md). **Рендеринга пока нет:
используется NullBackend.** Таблицы состояний, ресурсы и host GPU submission
ещё предстоит реализовать.

Вариант A (как Unleashed): найти в образе игры статический D3D-слой
(`D3D__Device`-подобная структура с диспетчерскими таблицами функций) и
перехватить его, как в `UnleashedRecomp/gpu/video.cpp` (GuestDevice +
`setRenderStateFunctions` + очереди команд + plume/D3D12/Vulkan).

Вариант B: читать PM4-пакеты из ring buffer (игра объявляет его через
`VdInitializeRingBuffer`/`MmAllocatePhysicalMemoryEx`) и транслировать
напрямую — универсальнее, но больше работы.

Оба варианта опираются на готовые швы: `IRenderBackend`, `Video::Present`,
кэш шейдеров.

## 3. Аудио

XMAFRAMES подключён к MMIO, гостевым input/output buffers и исходному игровому
микшеру. Требуется проверка всего аудио на реальном дампе Generations.
Сборка и ограничения: [AUDIO.md](AUDIO.md).

- Проверить XMAFRAMES loop/subframe semantics, тайминги и физические alias
  на игровых потоках; текущий kick обрабатывается синхронно.
- Точная маршрутизация категорий/громкости (`XAudioGetVoiceCategoryVolume`).

## 4. Патчи игры

Когда появятся символы/адреса ( Ghidra/IDA + `api`-аналог SWA.h для
Generations): midasm-хуки в `config.toml` (формат как у Unleashed) —
widescreen, FPS-limit, пропуск лого и т.д.

## 5. Установщик/UI

- GUI-мастер установки (как InstallerWizard у Unleashed).
- Опции (ImGui), оверлеи, достижения (XDBF уже парсится в `kernel/xdbf.h`).

## Известные ограничения текущего этапа

- `XexGetProcedureAddress` — заглушка (логирует запрос).
- DPC выполняются инлайн (при жёстких требованиях к таймингу — вынести в поток).
- `NtSetInformationFile(FileEndOfFileInformation)` — без truncate.
- Обработчики `IoCreateDevice` и др. — минимальные (STFS-устройство заглушкой).
- `_xstart` — заглушка (старт идёт от XEX entry).
