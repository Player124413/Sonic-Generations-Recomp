# Android: сборка и производительность

Android-порт — тот же host ReXGlue, что и Windows, с Vulkan на телефоне. Существующий рабочий порт
живёт в вашем репозитории
[`Player124413/Sonic-Generations-recomp-android-and-pc-edition`](https://github.com/Player124413/Sonic-Generations-recomp-android-and-pc-edition)
и там же записана известная проблема: **лагает и есть графические артефакты**. Этот документ — про то,
как собрать и как лечить производительность, не переписывая рендерер.

## Что уже лежит в этом репозитории

| Что | Где |
|---|---|
| Gradle-лаунчер (Activity, импорт ISO/STFS, экранный геймпад, настройки графики и GPU-драйвера) | `android/app` |
| Java-обвязка SDL3 | `android/app/src/main/java/org/libsdl/app` |
| **9 патчей SDK v0.10.0**: Android, perf, custom Vulkan, fps cap, tolerant dispatch, signal chain, join once, quiet | `android/patches/` (~256 КБ) |
| Скрипт подготовки SDK: клонирует v0.10.0, накатывает патчи, тянет libadrenotools и liblinkernsbypass (закреплённые ревизии), копирует Java-обвязку | `android_sdk.sh` в корне |
| Нативный код приложения (JNI/`android_main`, геймпад) | `android/app/src/main/cpp` |
| Порт игры | `rex/` + `rex/generated/default` (код из вашего дампа) |

Подробности по каждому каталогу, списку патчей и сборке — [android/README.md](../android/README.md).

Источник — ваш рабочий порт `Sonic-Generations-recomp-android-and-pc-edition`. Android SDK/NDK ставится
отдельно (нужен NDK r29: libc++ `std::atomic_ref`/`jthread`); в `.gitignore` уже исключены `android/sdk/`,
`android/.gradle/`, `android/build/`, `android/app/build/`, `*.apk`.

## Сборка (рецепт вашего рабочего порта)

```bash
# 1. SDK + патчи + libadrenotools + Java-обвязка SDL3
bash android_sdk.sh                       # клонирует v0.10.0 в android/sdk/rexglue-sdk и накатывает android/patches/*

# 2. Код игры из вашего дампа (тот же манифест, что и для Windows)
cd rex && rexglue codegen sonicgenerations_manifest.toml && cd ..

# 3. APK
cd android && ./gradlew assembleRelease \
  -PrexName=sonicgenerations \
  -PrexPortDir=$PWD/../rex \
  -PrexSdkDir=$PWD/sdk/rexglue-sdk
```

Третий шаг ждёт от проекта `generated/default/sources.cmake` — его создаёт шаг 2. JNI-CMake
(`android/app/src/main/cpp/CMakeLists.txt`) собирает SDK, libadrenotools и сгенерированный код игры;
порт передаётся через `-PrexPortDir`.

## Производительность

GPU на телефоне — TBDR (Adreno/Mali): любая промежуточная копия и любой resolve стоят особенно дорого,
а эмуляция EDRAM делает и то и другое каждый кадр. Отсюда правила:

1. **Разрешение — первым делом.** Cvar'ы SDK: `resolution_scale` (и `draw_resolution_scale_x/y`).
   На телефоне начинайте с `resolution_scale=1`, при лагах — ниже, и только потом трогайте остальное.
2. **MSAA выключать.** `native_2x_msaa=false` (по умолчанию выключен — проверьте, что ваши патчи его не
   включают): сглаживание в эмуляции EDRAM дороже, чем весь остальной кадр.
3. **Кэш текстур ограничить.** `texture_cache_memory_limit_render_to_texture` — на телефоне память
   кончается раньше GPU.
4. **Кадровый лимит.** `gpu_guest_fps_limit=60` и `vsync` по вкусу; игра рассчитана на 30 FPS консоли,
   и `sg_frame_rate=original` — самый дешёвый режим (см. [REXGLUE_WINDOWS.md](REXGLUE_WINDOWS.md)).
5. **Драйвер.** libadrenotools позволяет подсунуть Turnip на Adreno — часто это и есть разница между
   «лагает» и «играбельно». Он уже в вашем Android-порте; на Mali (Samsung/Exynos) аналога нет.
6. **Логи и метрики.** Не включайте `gpu_debug_markers` и валидацию в релизе.

## Артефакты: что обычно виновато

| Артефакт | Частая причина | Что проверить |
|---|---|---|
| Чёрные/мигающие текстуры | кэш текстур, форматы `DXT5A/DXN`, упакованные мипы | патчи `-android-perf.patch`, лимит кэша, `gpu_3d_to_2d_texture` |
| Пропавшие тени | resolve → texture без writeback, `D24FS8` | depth-путь SDK, `depth_float24_*` |
| Рваные полигоны, «мусор» | точность depth/`gpu_depth_clamp` | включить `gpu_depth_clamp=true` |
| Зависания на загрузке | ожидание GPU-потока (спины) | `sg_spin_waits.cpp` уже в сборке — проверьте, что манифест с хуками применён |
| Тормоза только в бою | Havok-потоки дерутся за ядра | тот же `SgHavokJobWait` |

## Нативный рендеринг на Android

Он решит и лаги, и часть артефактов (никакой эмуляции EDRAM и resolve), но это работа по
[плану](NATIVE_RENDERING.md), а не настройка. Ключевое ограничение: рендерер должен строиться на
**ваших** патчах SDK v0.10.0, поэтому ветка `recomp` (путь NativeXRenderer) для Android не подходит —
нужен RHI без требований к SDK, то есть plume.

## Честно о состоянии

Ни APK, ни Gradle-сборка в этой среде не запускались: здесь нет Android SDK/NDK, устройства и Gradle.
Рецепт сборки взят из вашего рабочего порта; настройки производительности — из cvar'ов SDK 0.10.0,
их действие на вашем телефоне нужно измерить и записать в [../STATUS.md](../STATUS.md).
