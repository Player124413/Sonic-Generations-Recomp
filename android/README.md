# Android-сборка

Дерево перенесено из рабочего порта `Player124413/Sonic-Generations-recomp-android-and-pc-edition`
(там оно лежало рядом с `port/`). Отличия после переноса — только пути: порт игры теперь `rex/`,
скрипт подготовки SDK лежит в корне репозитория (`android_sdk.sh`), а не в `tools/`.

## Что здесь

| Путь | Что это |
|---|---|
| `app/src/main/java/com/rexauto/port/` | лаунчер: выбор `default.xex`/ISO/STFS, извлечение файлов игры, настройки графики, загрузка кастомного Vulkan-драйвера (Turnip/Adreno через libadrenotools) |
| `app/src/main/java/com/rexauto/port/gamepad/` | экранный геймпад (геометрия, темы, настройки, мост в SDL) |
| `app/src/main/java/org/libsdl/app/` | Java-обвязка SDL3; `android_sdk.sh` обновляет её копией из SDK |
| `app/src/main/cpp/android_main.cpp` | нативная точка входа: читает `game_root.txt` и `settings.txt` из внешнего каталога приложения, поднимает SDL, грузит драйвер через adrenotools |
| `app/src/main/cpp/android_gamepad.cpp` | ввод экранного геймпада в SDL |
| `app/src/main/cpp/CMakeLists.txt` | сборка SDK + libadrenotools + сгенерированного кода игры (`recomp`) + `libmain.so` |
| `patches/` | 9 патчей к ReXGlue SDK **v0.10.0** (см. ниже) |

## Патчи SDK

`android_sdk.sh` клонирует `rexglue/rexglue-sdk` на тег `v0.10.0` и накатывает по порядку:

1. `rexglue-sdk-v0.10.0.patch` — базовый набор для сборки вне оригинального дерева;
2. `-android.patch` — собственно Android;
3. `-android-perf.patch` — флаги ARMv8.2-A/fp16/dotprod, LTO, урезание PLT;
4. `-tolerant-dispatch.patch` — не падать на неизвестном госте;
5. `-android-custom-vulkan.patch` — загрузка внешнего Vulkan-драйвера;
6. `-fps-cap.patch` — ограничитель кадров;
7. `-android-quiet.patch` — меньше шума в logcat;
8. `-signal-chain.patch` — цепочка обработчиков сигналов;
9. `-join-once.patch` — единственный join потока.

Эти патчи написаны против v0.10.0 и **не совместимы** с веткой `recomp` SDK (на ней построен
удалённый NativeXRenderer). Поэтому SDK здесь всегда v0.10.0 + патчи.

libadrenotools и liblinkernsbypass закреплены на ревизиях `8fae8ce…` и `aa3975…` — их тянет тот же скрипт.

## Сборка

```bash
# 1. SDK + патчи + libadrenotools + Java-обвязка SDL3 -> android/sdk/rexglue-sdk
./android_sdk.sh

# 2. код игры из вашего default.xex (на ПК; см. docs/REXGLUE_WINDOWS.md)
cd rex && rexglue codegen sonicgenerations_manifest.toml && cd ..

# 3. APK
cd android
./gradlew assembleRelease \
  -PrexName=sonicgenerations \
  -PrexPortDir="$(cd .. && pwd)/rex" \
  -PrexSdkDir="$(cd .. && pwd)/android/sdk/rexglue-sdk"
```

Нужны Android SDK и NDK r29 (libc++ с `std::atomic_ref`/`jthread`). `android/sdk/`, `.gradle/`, `build/`
и `*.apk` в `.gitignore` — в репозитории только исходники.

## Чего здесь нет и что не проверено

- **Ни Gradle, ни NDK, ни телефон в этой песочнице не запускались.** Сборка APK отсюда — не проверенный
  факт, а инструкция. Последний успешный прогон Android APK в CI относился к другой структуре дерева.
- Экранный геймпад и настройки пришли из другого порта (Hell's Gate) и здесь не перепроверялись на
  Sonic Generations.
- Порт читает `settings.txt` лаунчера и передаёт значения как `--ключ=значение`; имена ключей должны
  совпадать с cvar'ами SDK — при обновлении SDK это первое, что нужно сверить.
- Рендеринг на телефоне сейчас — путь Xenos (эмуляция GPU консоли). Нативный рендерер
  ([docs/NATIVE_RENDERING.md](../docs/NATIVE_RENDERING.md)) пока только поднимает устройство:
  `-DREX_NATIVE_RENDERER=ON` (по умолчанию выключен) + `--sg_native_renderer=true`, рисования нет.
