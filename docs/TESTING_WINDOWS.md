# Windows x64: диагностическая версия

Linux и Python для запуска этого пакета не нужны. Требуются Windows x64,
процессор с AVX и драйвер видеокарты с Vulkan 1.2 и необходимыми renderer features.
Это незавершённый runtime, не версия с подтверждённой играбельностью.

## Полная автоматическая проверка одной ревизии

Workflow [Verify Windows Vulkan runtime](https://github.com/Player124413/Sonic-Generations-Recomp/actions/workflows/verify-runtime.yml)
вызывает существующие проверки как reusable workflows на **одном commit SHA**:

- сборка Windows EXE, runtime-тесты, CLI smoke test и упаковка;
- kernel/XAM и CPU GPU-capture тесты на Windows/Linux;
- Vulkan headless/WSI с validation layer на Linux/lavapipe;
- XMA, включая реальный сжатый образец, на Windows/Linux;
- проверка предоставленного shader cache и безопасности shader tools.

Запуск — `workflow_dispatch` для выбранной ветки; изменения самого общего workflow
также запускают его автоматически. Итоговая таблица находится в Summary.
Пропущенная, отменённая, отсутствующая или упавшая обязательная проверка не даёт
общий успех. Поведение отчёта отдельно проверяется unit-тестами.
Артефакт Windows остаётся диагностическим: общий зелёный CI **не означает**
проверку игрового кадра, отсутствие известных ограничений или готовность порта.
README автоматически не помечается галочками. Старые зелёные запуски других
ревизий не подставляются в итоговую таблицу.

## Проверенная сборка

Windows CI [35924240044](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044)
на коммите `43130a1` успешно собрал EXE, выполнил проверки ядра и линковки
импортов, запустил `--help` до и после упаковки. POSIX-тесты Python-лаунчера
на Windows пропускаются; это не проверка запуска игры или `.cmd` на игровых данных.

[Скачать Windows ZIP](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044/artifacts/10778986806)
(артефакты Actions имеют ограниченный срок хранения; для скачивания может
потребоваться вход в GitHub).

В EXE встроен предоставленный кэш из 6404 шейдерных модулей — повторно
компилировать шейдеры для этого пакета не нужно.

## Собрать свежий пакет в Actions

1. Откройте [Windows x64 runtime](https://github.com/Player124413/Sonic-Generations-Recomp/actions/workflows/windows-runtime.yml).
2. Нажмите **Run workflow**, выберите ветку с изменениями
   (`arena/01a0c572-sonic-generations-recomp`) и подтвердите запуск.
3. После успешного завершения откройте этот запуск → **Artifacts** →
   `windows-x64-diagnostic-runtime`. В `revision.txt` указан точный коммит пакета.

Workflow собирает Windows EXE и упаковывает лаунчер, библиотеки и инструкции.
**Загружать в workflow `default.xex`, ISO или шейдеры не нужно**: используются
уже сгенерированный PPC-код и предоставленный кэш SPIR-V (6404 модуля).
Это сборка текущего поддерживаемого варианта, не автоматическая рекомпиляция
любого другого XEX. Игровые ресурсы в ZIP не входят — они устанавливаются
локально из вашей собственной Xbox 360 копии. ПК-версия игры не подходит.

## Установка и диагностика

1. Распакуйте ZIP полностью в папку, доступную для записи (не запускайте из ZIP).
2. Откройте **`Launcher.cmd`**. Он запускает локальный WinForms-лаунчер через
   штатный Windows PowerShell 5.1; Python, Linux и отдельный PowerShell 7 не нужны.
   `ExecutionPolicy Bypass` действует только для этого процесса, не меняет
   системную политику. Если администратор блокирует скрипты, используйте CLI ниже.
3. Нажмите **Choose ISO...** для ISO/XISO или **Choose folder...** для папки
   дампа с `default.xex`. Можно перетащить файл/папку в окно.
4. Нажмите **Install / extract**, подтвердите путь и дождитесь кода 0.
   Используется встроенный Xbox 360 ISO-установщик EXE, не 7-Zip.
   Перед переустановкой сделайте резервную копию сохранений.
5. **Check installation** проверяет только наличие `default.xex`, а не
   целостность всех ресурсов и не возможность прохождения игры.
6. **Play (Vulkan)** запускает диагностический runtime. **Open logs** открывает
   `diagnostics` рядом с EXE: отдельные `.log`, `.stderr.log` и `.exit-code.txt`
   для каждого запуска установки/проверки/игры. Закройте окно игры перед
   закрытием лаунчера; во время установки дождитесь завершения.

Альтернатива: перетащите дамп/ISO на `Install-Game.cmd`; без аргумента он открывает
лаунчер. `Run-Diagnostic.cmd` работает по-прежнему: `diagnostics\runtime.log`
и `diagnostics\exit-code.txt` перезаписываются при следующем запуске.
CLI без PowerShell: `SonicGenerationsRecomp.exe --install "D:\Games\game.iso"`,
потом запуск EXE с переменными окружения из `Run-Diagnostic.cmd`.

### Где находятся файлы

Все игровые данные хранятся в **`assets` рядом с рантаймом**, независимо от
текущего рабочего каталога и наличия старого `portable.txt`:

```text
SonicGenerationsRecomp.exe
Launcher.cmd
Launcher.ps1
assets/
  default.xex
  ... игровые ресурсы ...
  config.toml
  save/
    SYS-DATA
diagnostics/
```

AppData больше не используется; `portable.txt` не нужен и не меняет путь.
Папка рантайма должна быть доступна для записи. При переходе со старой сборки
закройте игру и лаунчер, сделайте резервную копию, затем перенесите содержимое
`%LOCALAPPDATA%\SonicGenerationsRecomp` в `assets` рядом с новым EXE.
Если ранее использовали portable-режим, перенесите игровые ресурсы, `save` и
`config.toml` из старой папки EXE в `assets`, но не сам EXE и скрипты.
Автоматического переноса/удаления старых данных нет. Можно заново установить
ISO через лаунчер и отдельно скопировать старую папку `save` в `assets\save`.
Не устанавливайте поверх единственной исходной копии дампа.
Кнопка **Open game files** открывает текущий каталог установки.

Перед отправкой логов проверьте личные данные/пути. Лаунчер ничего не загружает
в сеть. Приложите `revision.txt`, логи и код завершения; игровые файлы,
`default.xex`, ISO и дампы памяти отправлять не нужно.

## Самостоятельная сборка

Visual Studio 2022 с C++ desktop tools, компонентом ClangCL и Windows SDK;
CMake >= 3.21, Git, vcpkg. В PowerShell задайте `VCPKG_ROOT` на каталог vcpkg:

```powershell
& "$env:VCPKG_ROOT/vcpkg.exe" install "sdl2[vulkan]:x64-windows-static" vulkan-headers:x64-windows-static vulkan-loader:x64-windows-static
git submodule update --init tools/XenonRecomp tools/XenosRecomp tools/ffmpeg-xma
git -C tools/XenonRecomp submodule update --init --recursive
git -C tools/XenosRecomp submodule update --init thirdparty/smol-v thirdparty/zstd thirdparty/xxHash
cmake --preset windows-clang
cmake --build --preset windows-clang --parallel 2
ctest --preset windows-clang
```

CI собирает диагностический вариант без оптимизации PPC для быстрого выявления
ошибок. Это не измерение производительности Release. Проверки ядра, линковки и
`--help` не означают проверку игрового кадра. Ограниченная цветовая связка
render target → resolve → выбранный backbuffer реализована; её профиль,
Vulkan-проверки и оставшиеся ограничения перечислены в [GPU.md](GPU.md).
Single-sample D24S8 depth/stencil реализован в ограниченном профиле; D24FS8,
MSAA/MRT, depth resolve/sampling и CPU/GPU coherence ещё не завершены.

Привязаны семь переменных ядра: указатель на модуль, timestamp bundle,
указатели отключённых debug/cert monitors и HLE-дескрипторы event/semaphore/thread.
Гостевые тела объектов, ссылки, независимые дубликаты handles и PCR/TEB потока
подключены к менеджеру объектов. Native callbacks дескрипторов и другие типы
(например, file/timer/mutant) пока не поддерживаются. Неизвестные импорты по-прежнему
отклоняются, а не получают фиктивные адреса. Подробности и тестовый профиль:
[XEX_IMPORT_BINDING.md](XEX_IMPORT_BINDING.md). Успешный CI не подтверждает
загрузку уровня, правильную графику или прохождение игры.


## Проверки этого этапа

- Полный Windows runtime и синтетические XEX/PE, kernel/import tests:
  [35924240044](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240044), успешно.
- Регрессия полного Linux runtime:
  [35924240050](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35924240050), успешно.
- GPU CPU-тесты Windows/Linux:
  [35923949884](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35923949884), успешно.
- Vulkan с validation и чтением пикселей после clear/draw:
  [35923949966](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/35923949966), успешно.
- Локальные GPU-тесты: 8/8 обычные и 8/8 ASan/UBSan.

Описание границ реализации: [XEX_IMPORT_BINDING.md](XEX_IMPORT_BINDING.md) и
[GPU.md](GPU.md) в репозитории. Реальная игра в этих проверках не запускалась.

## Ошибка «Vulkan support is either not configured in SDL»

Ранние Windows-пакеты собирались с `sdl2` без опциональной feature `vulkan`.
Флаг Vulkan у самого рантайма не включает эту feature у зависимости. Workflow
теперь явно устанавливает `sdl2[vulkan]:x64-windows-static` и проверяет реальный
Vulkan loader hook Windows-драйвера SDL до сборки большого runtime, а также
через CTest. Проверка намеренно использует отсутствующую DLL: она различает
отсутствие Vulkan-кода в SDL и попытку загрузить Vulkan loader, не требуя GPU
на runner. Контрольный тест с dummy-драйвером проверяет отрицательную ветку.
Это не проверка создания Vulkan surface, игрового кадра или вашего драйвера.

Скачайте исправленный Windows-пакет, закройте рантайм и замените EXE и скрипты,
сохранив свою папку `assets` (сначала сделайте резервную копию сохранений).
SDL статически связан с EXE: подмена `SDL2.dll` рядом со старым EXE не поможет.
Переустанавливать ISO или перекомпилировать шейдеры из-за этой ошибки не нужно.
Если новый лог сообщает об отсутствии `vulkan-1.dll` или совместимого GPU,
потребуется проверить официальный драйвер вашей видеокарты. Не скачивайте
отдельные DLL с посторонних сайтов. Приложите новый лог и `revision.txt`.

## Ошибка XEX import binding: ordinal 0x1C0

`xboxkrnl.exe!0x1C0` — переменная `VdGpuClockInMHz`, а не функция.
Рантайм экспортирует адрес 32-битного big-endian значения **500** (частота
гостевого Xenos в MHz, не частота вашей видеокарты). Также предусмотрены
гостевые pointer slots `VdGlobalDevice` / `VdGlobalXamDevice` (0x1BE/0x1BF),
изначально нулевые. Это не host-указатели Vulkan и не создание устройства XAM.
Регрессионные тесты проверяют привязку IAT, байты значения, независимость
слотов и стабильность адресов. Остальные неизвестные экспорты по-прежнему
вызывают ошибку, а не подменяются произвольными заглушками.

ABI сверено с [Xenia xboxkrnl table](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_table.inc)
и [video exports](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_video.cc).
В предоставленном PPC `ppc_recomp.274.cpp`, блок `0x82DC6B38`, читает указатель
из `0x82000520`, затем разыменовывает его как DWORD. Шейдерный кэш к этой
ошибке не относится. Исправление привязки импорта само по себе не доказывает
успешную загрузку меню или уровня; нужен повторный запуск нового EXE.

## Ошибка XEX import binding: ordinal 0x1C1

`VdHSIOCalibrationLock` — критическая секция, которую игра получает из IAT
`0x82000540` и передаёт в `RtlEnterCriticalSection` / `RtlLeaveCriticalSection`
(`ppc_recomp.274.cpp`, `0x82DC9D38`). Экспорт теперь указывает непосредственно
на 28-байтовый объект в гостевой physical heap с выравниванием 32 байта.
Spin count — 10000 (упакованное значение 40), начальные owner/recursion — нули,
lock count — -1. Хранилище и состояние не сбрасываются при повторной регистрации
XEX или привязке импортов.

Используется существующая реализация Rtl из UnleashedRecomp и её native-endian
поля bookkeeping из `XRTL_CRITICAL_SECTION` форка XenonRecomp — не структура
host mutex и не самостоятельный несовместимый механизм блокировок. Размер,
выравнивание и начальное состояние сверены с Xenia `xboxkrnl_video.cc` / `xboxkrnl_rtl.cc`.
Тесты проверяют IAT, рекурсивный захват, отказ TryEnter другого потока, передачу
владения после освобождения и взаимное исключение двух потоков.

Загрузчик также собирает отсутствующие **переменные** из структурно корректной
таблицы импортов в один отчёт с именами, вместо остановки на первой переменной.
Неизвестные импорты не заменяются нулями; при любой ошибке IAT не изменяется.

## Общий аудит импортов без запуска игры

В новом пакете откройте **Audit-Imports.cmd** или кнопку **Audit imports**.
Команда `SonicGenerationsRecomp.exe --audit-imports` проверяет установленный
`assets/default.xex` без создания окна Vulkan, запуска гостевого кода,
монтирования данных и изменения сохранений. Она выводит всю доступную таблицу
импортов: библиотеку, ordinal, тип, имя, адрес IAT/thunk и результат привязки.
Ошибки собираются вместе; неизвестные экспорты не заменяются заглушками.

Для анализа нужны только `diagnostics/imports.log`,
`diagnostics/imports.exit-code.txt` и `revision.txt`. GUI сохраняет аналогичные
логи с префиксом `imports-` и временем запуска. Не отправляйте сам XEX/ISO.
Успешный аудит означает корректную привязку, но не полноту поведения функций.
В пакете также есть `import-inventory.json`: проверенные по сгенерированному PPC
219 импортов функций; наличие обработчика **не** означает отсутствие заглушек.
