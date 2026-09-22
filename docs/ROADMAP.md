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

Host-side FFmpeg backend добавлен, но MMIO-мост ещё не подключён.
Сборка и ограничения: [AUDIO.md](AUDIO.md).

- XMA-декодер (шов `apu/xma.h`, MMIO `0x7FEA0000`): XMA — вариант WMA Pro;
  можно взять decoder из Xenia или ffmpeg.
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
