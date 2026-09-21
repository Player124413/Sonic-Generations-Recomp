# Архитектура / Architecture

## Принцип

Как и Unleashed Recompiled: **статическая рекомпиляция**. XenonRecomp
преобразует PPC-код `default.xex` в C++ (`ppc/`), который собирается в
нативную библиотеку. API Xbox 360 (xboxkrnl/xam/…) реализованы на хосте
и подключаются через механизм импортов.

## Слои

```
┌──────────────────────────────────────────────────────────┐
│ ppc/ (рекомпилированный код игры, ~77k функций)          │
│   вызовы импортов → __imp__NtCreateFile(...) и т.д.      │
├──────────────────────────────────────────────────────────┤
│ kernel/  ядро: Nt*/Ke*/Mm*/Ex*/Io*/Ob*/Rtl*/Hal*         │
│          xam: контент/пользователь/уведомления/UI-заглушки│
│          guest_printf: printf-семейство CRT              │
│          xex_module: XEX header/секции                   │
├──────────────────────────────────────────────────────────┤
│ cpu/     гостевые потоки (PCR/TEB/TLS/стек в гостевой    │
│          памяти), GuestToHostFunction/HostToGuestFunction │
├───────────────┬──────────────┬───────────────────────────┤
│ gpu/          │ apu/         │ hid/                      │
│ Vd*, present, │ XAudio→SDL,  │ SDL → XAMINPUT            │
│ IRenderBackend│ XMA (шов)    │                           │
├───────────────┴──────────────┴───────────────────────────┤
│ os/, ui/, user/: окно SDL2, конфиг, пути, логирование    │
└──────────────────────────────────────────────────────────┘
```

## Гостевая память

4 GiB (PPC_MEMORY_SIZE) отображаются одним блоком (`Memory::base`).
Гостевой адрес = смещение. Все загрузки/сохранения — с bswap (PPC big-endian).
Таблица косвенных вызовов — «идеальный хеш» после образа
(PPC_LOOKUP_FUNC). Куча (`Heap`) — o1heap поверх регионов гостевой памяти;
регион `0x7FEA0000..+64K` зарезервирован под XMA MMIO.

## Импорты и хуки

- Генератор создаёт для каждой функции слабый символ `sub_XXX` (alias на
  `__imp__sub_XXX`). Хук игры = сильное определение `sub_XXX`, вызывающее
  оригинал `__imp__sub_XXX` (см. `kernel/function.h`: `PPC_FUNC_IMPL` +
  `PPC_FUNC`, `GUEST_FUNCTION_HOOK`).
- Импорты ядра определяются напрямую: `GUEST_FUNCTION_HOOK(__imp__NtCreateFile, NtCreateFile)`.
- **Все 456 импортов** игры покрыты (контролируется линковочным тестом
  `tests/import_link_test`, сгенерированным по списку импортов).

## Файловая система

Игра зовёт `NtCreateFile` с объектными именами вида
`\Device\Harddisk0\Partition1\game:\...` → `FileSystem::ResolvePath`
сопоставляет корни (`game`, `update`, `D`, `SYS-DATA`, DLC) с каталогами
установки (регистрируются через `XamRegisterContent` при старте).

## GPU (текущее состояние)

Игра использует низкоуровневый интерфейс **Vd\*** (ring buffer Xenos) — в
отличие от Unleashed, где поверх D3D-слоя игры. Реализовано: жизненный цикл
(VdInitialize\*, VdSwap→Present), режимы видео, интерфейс `IRenderBackend`.
Сейчас подключён `NullBackend`.

Следующий большой шаг (см. ROADMAP) — транляция Xenos: чтение PM4 из ring
buffer либо перехват слоя рисования игры (модель Unleashed: `GuestDevice` +
диспетчерские таблицы + реплей функций по адресам из образа).

## Шейдеры

`SonicGenerationsRecompLib/shader/shader_cache.h` — интерфейс кэша.
XenosRecomp (сабмодуль) переводит бинарники шейдеров игры в HLSL; DXC
собирает DXIL/SPIR-V. Пока кэш пуст (`ShaderCache::IsAvailable() == false`).
