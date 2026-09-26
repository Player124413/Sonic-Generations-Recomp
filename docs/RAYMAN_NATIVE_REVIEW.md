# Rayman: нативный renderer уже появился

Источник: [RaymanOriginsRecomp, 5ab44ae](https://github.com/BelmanteGu/RaymanOriginsRecomp/tree/5ab44ae94326b975b4f38bc3b927d62dbca4c72c).
Этот обзор заменяет прежнее заключение о наличии только плана: `docs/PROGRESS.md`
по-прежнему описывает следующий этап, но код и `docs/NATIVE_RENDERER.md` уже новее.

## Подтверждено просмотром исходников

- `rex/src/native_capture.cpp`: D3D hooks, shader container hashes, draw calls,
  virtual/physical guest memory, capture данных.
- `rex/src/native_renderer.cpp`: second-window и main-window режимы, SDL3/Vulkan,
  обработка Android surface lifecycle.
- `tools/native_renderer/vk_renderer.h`: собственный Vulkan renderer; это уже
  не просто намерение подключить Plume.
- `tools/native_renderer/xenos_texture.h`: guest-memory reader, endian/tiling,
  packed mips, DXT1/3/5 и RGBA8 decoding.
- `docs/D3D_MAP.md`: карта D3D и устройств именно **Rayman, XDK 2.0.20871**.
- `docs/NATIVE_RENDERER.md`: использование `rexgpu-null` для ring buffer,
  fences, interrupts и vblank без рисования. SDK-патчи требуются отдельно.

Автор сообщает о меню, карте и первом уровне, ~59 FPS на M1 и 60 FPS на S23.
Это его результаты, не наш запуск. Он отдельно оставляет неподтверждёнными
некоторые resolve/AfterFx/refraction сценарии. Полное прохождение и Windows
из этого не следуют.

## Применение к Sonic без подмены фактов

1. Сначала завершить рабочую Windows reference-сборку ReXGlue/Xenos. В текущем
   падении проблема на линковке `roundevenf`, не в Vulkan или импортах XEX.
2. Подключить наш Sonic D3D capture к виртуальной и физической памяти SDK.
   Старые `g_memory` и адреса Rayman нельзя использовать как взаимозаменяемые.
3. Использовать общий подход capture → owned resources → pipeline → draw.
   Texture conversion сравнить с уже имеющимися Sonic-тестами, не переписывать
   проверенные компоненты только ради одинаковых имён файлов.
4. Shader lookup и binding ABI проверить на предоставленном Sonic cache.
   Rayman UBO-патчи, shader hashes и UbiArt layouts не переносить автоматически:
   в нём stride выбирает конкретный UbiArt vertex struct. Sonic — другая 3D-игра.
5. Не отключать GPU protocol: заменить рисование и сохранить завершение fences,
   interrupts/vblank. Тесты нулевого протокольного GPU нужны до replace mode.
6. Проверить Sonic depth/stencil, resolve, render targets, несколько streams,
   а затем уровни/ролики/сохранения. Успех Rayman не выставляет эти галочки за Sonic.

В этом изменении чужой renderer не скопирован и не объявлен подключённым.
Сначала исправлена обнаруженная причина падения нашего workflow и актуализированы
критерии готовности. Источники Rayman и BSD-производные Xenia требуют сохранения
соответствующих лицензий/атрибуции при последующем переносе кода.
