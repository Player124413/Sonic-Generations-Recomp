# Windows x64: диагностическая версия

Linux и Python для запуска этого пакета не нужны. Требуются Windows x64,
процессор с AVX и драйвер видеокарты с Vulkan 1.2 и необходимыми renderer features.
Это незавершённый runtime, не версия с подтверждённой играбельностью.

1. В успешном workflow **Windows x64 runtime** скачайте артефакт
   `windows-x64-diagnostic-runtime` и распакуйте ZIP полностью, включая DLL.
2. Перетащите папку собственного Xbox 360 дампа (с `default.xex`) или ISO на
   `Install-Game.cmd`. Дождитесь кода завершения 0.
3. Запустите `Run-Diagnostic.cmd`. Лог будет в `diagnostics\runtime.log`, код
   завершения — в `diagnostics\exit-code.txt`. Следующий запуск перезапишет их.
4. Перед отправкой логов проверьте личные данные/пути. Скрипты ничего не загружают
   в сеть. Игровые файлы и дампы памяти отправлять не нужно.

Установка хранится в `%LOCALAPPDATA%\SonicGenerationsRecomp`. Для portable-режима
создайте пустой `portable.txt` рядом с EXE **до установки**. Не устанавливайте
поверх единственной копии игровых файлов или сохранений.

## Самостоятельная сборка

Visual Studio 2022 с C++ desktop tools, компонентом ClangCL и Windows SDK;
CMake >= 3.21, Git, vcpkg. В PowerShell задайте `VCPKG_ROOT` на каталог vcpkg:

```powershell
& "$env:VCPKG_ROOT/vcpkg.exe" install sdl2:x64-windows-static vulkan-headers:x64-windows-static vulkan-loader:x64-windows-static
git submodule update --init tools/XenonRecomp tools/XenosRecomp tools/ffmpeg-xma
git -C tools/XenonRecomp submodule update --init --recursive
git -C tools/XenosRecomp submodule update --init thirdparty/smol-v thirdparty/zstd thirdparty/xxHash
cmake --preset windows-clang
cmake --build --preset windows-clang --parallel 2
ctest --preset windows-clang
```

CI собирает диагностический вариант без оптимизации PPC для быстрого выявления
ошибок. Это не измерение производительности Release. Проверки ядра, линковки и
`--help` не означают проверку игрового кадра. Clear/resolve/backbuffer и прочие
незавершённые части GPU не становятся реализованными от смены платформы.
