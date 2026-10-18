# Android-порт

Android-версия Sonic Generations Recomp: лаунчер с импортом игры,
редактируемым сенсорным управлением и тем же нативным рантаймом, что и на
десктопе (рекомпилированный PPC-код, собственное Vulkan-ядро). Страница
описывает устройство порта и честный статус: что работает, что проверено,
а что ещё нет.

## Статус

| Часть | Статус |
|---|---|
| Лаунчер (Kotlin): импорт папки/ISO через SAF, статус, настройки | Готов |
| Редактор сенсорной раскладки (drag/resize, прозрачность, размер) | Готов |
| Виртуальный геймпад → JNI → `hid::touch` → XAMINPUT | Готов, тесты на хосте зелёные |
| ETC2-транскодер текстур (энкодер/декодер, диск-кеш, потоки) | Готов, тесты на хосте зелёные (PSNR 35–39 дБ) |
| Vulkan-хуки ETC2 (форматы, `UploadEtc2`, выбор по конфигу) | Готов по коду, без проверки на устройстве |
| Выбор рендера: Нативный (по умолчанию) / Reference / Null | Готов по коду |
| Сборка APK (Gradle + NDK, arm64-v8a) | CI `.github/workflows/android.yml`; в песочнице без Android SDK не проверялась |
| Загрузка уровня и игровой процесс на телефоне | **Не проверено** — десктопный рантайм сам ещё не подтвердил игровой кадр (см. главный README) |

Иными словами: порт как система (лаунчер, ввод, текстуры, рендер-опции,
сборка) реализован; «играбельно на телефоне» никто не обещает, пока
десктопная версия не покажет уровень.

## Архитектура

```
┌─ LauncherActivity (Kotlin) ────────────────┐
│ импорт SAF → internal/import →             │
│ pending_install.txt → нативный Installer   │
│ настройки → тот же config.toml, что у игры │
└───────────────┬────────────────────────────┘
                │ Играть
┌─ GameActivity : SDLActivity ───────────────┐
│ SDL surface (Vulkan) ── libmain.so         │
│ TouchOverlayView ──JNI──► hid::touch ──►   │
│ (редактируемая раскладка)   XAMINPUT гостя │
└─────────────────────────────────────────────┘
```

- **Одна конфигурация.** Лаунчер редактирует `config.toml` во внутреннем
  хранилище (`files/assets/config.toml`) — тот же файл, который читает
  `Config::Load()` в рантайме. Никаких параллельных настроек.
- **Импорт как на десктопе.** Лаунчер копирует выбранную папку/ISO во
  внутреннее хранилище и оставляет `pending_install.txt`; нативный код при
  первом запуске прогоняет штатный `Installer::install` (папка, ISO/XISO,
  `.xexp`). Файлы игры в репозиторий не входят.
- **Сенсорное управление.** Раскладка (относительные координаты, размер,
  прозрачность) хранится в `touch_layout.json`, рисуется и редактируется
  Kotlin-вьюхой поверх SDL-поверхности. Нажатия уходят в JNI
  (`os/android/jni_bridge.cpp`) и вливаются в `hid::GetState` наравне с
  физическим геймпадом: гость не отличает виртуальный пад от настоящего.
  Касания вне кнопок пробрасываются в SDL (меню, сенсорный обзор).
- **Гость на ARM64.** PPC-код рекомпилирован через XenonRecomp в C++ на
  SIMDe, поэтому собирается под arm64-v8a (NEON) тем же Clang, что и
  десктоп. Гостевая память — 4 GiB `mmap(MAP_NORESERVE)`.

## Рендер

Выбор — в настройках лаунчера и в `[Video] RenderMode` (по умолчанию
`Native`), env `SONIC_RENDER_BACKEND` по-прежнему перекрывает конфиг:

| Режим | Что это |
|---|---|
| **Native** (по умолчанию) | Собственный Vulkan-бэкенд проекта, прямые гостевые draw (`vulkan-direct-draw`) |
| Reference | Захват/transfer-путь (`vulkan-transfer`) для сравнений и отладки |
| Null | Без GPU-работы: гость живёт, картинки нет |

Дополнительно: `RenderScale` (0.5–1.0) уменьшает swapchain/презент-цель,
FPS-лимит и пресеты качества (Производительность: 0.66 + ETC2;
Сбалансированный: 0.85; Качество: 1.0).

## ETC2

Гостевые текстуры Xenos (BC1/BC2/BC3) декодируются штатным
`resource_conversion` в RGBA8. На мобильных GPU BC-сэмплинг обычно
недоступен, а ETC2 обязателен для Vulkan на Android, поэтому на загрузке
текстуры в Vulkan-бэкенде (`Config::TextureCompression`, по умолчанию
`Auto`) RGBA8 перекодируется в ETC2:

- 4 бита/тексель вместо 32 → **в 8 раз меньше** памяти и пропускной
  способности текстур;
- энкодер: режимы Individual/Differential, оба flip, все 8 таблиц
  модификаторов, EAC-альфа (16 таблиц), многопоточность по строкам блоков;
- результаты кешируются в памяти и на диске (`texture-cache/`, ключ —
  хеш содержимого), поэтому каждая уникальная текстура кодируется один
  раз за установку, а не за запуск;
- любая ошибка транскода откатывает конкретную текстуру на RGBA8 —
  текстура никогда не теряется из-за сжатия.

Проверка в `tests/texture_transcode_tests.cpp` (хост, без GPU): размеры,
round-trip градиентов (PSNR > 35 дБ), альфа, некратные 4 размеры,
транзакционность ошибок, диск-кеш. Декодер в модуле нужен тестам и
будущему софтверному фолбэку; на устройстве ETC2 декодирует GPU.

## Оптимизации

- ETC2 для текстур (выше) + кеш транскода;
- `RenderScale` и пресеты качества; FPS-лимит из конфига;
- Release: `-O3`, `-ffunction-sections/-fdata-sections` + `--gc-sections`,
  16 KiB page alignment (Android 15+), опциональный ThinLTO
  (`SONIC_ANDROID_LTO=ON`, по умолчанию выкл — линк тяжёлый);
- виртуальный пад без аллокаций в кадре: атомарный снапшот состояния,
  JNI-вызовы только по изменению касаний;
- гостевая память `MAP_NORESERVE` — 4 GiB виртуального резерва без
  физического коммита.

## Известные ограничения

- **XMA-аудио на Android пока немое.** Пиннутый FFmpeg-форк (XMAFRAMES)
  собран конфигом только под x86-64 (`cmake/XmaFrameDecoder.cmake`
  честно падает на других арках). На Android по умолчанию
  `SONIC_GENERATIONS_ENABLE_XMA_FRAMES=OFF` и линкуется стаб
  (`apu/xma_frame_decoder_stub.cpp`): остальной звук работает, XMA-треки
  молчат. Лечение — ARM-конфиг форка, отдельная задача.
- Сборка только arm64-v8a (эмулятор x86_64: добавьте ABI в
  `app/build.gradle.kts`, рантайм переносим).
- Gradle wrapper jar в репозиторий не входит: сборка через Android
  Studio (сама создаст wrapper) или системный Gradle 8.9+.

## Сборка

Требуется: JDK 17, Android SDK (API 34), NDK 29.0.14206865, CMake 3.22,
устройство на Android 14+ (API 34, arm64-v8a),
сабмодули репозитория.

```bash
git clone --recursive <repo>
cd Sonic-Generations-Recomp/android
gradle assembleDebug        # или открыть android/ в Android Studio
# APK: app/build/outputs/apk/debug/app-debug.apk
```

Нативная часть отдельно (без Gradle), для проверки компиляции:

```bash
cmake -S android/app/src/main/cpp -B build/android \
  -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake \
  -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-34 \
  -DCMAKE_BUILD_TYPE=Release
cmake --build build/android -j
```

CI: `.github/workflows/android.yml` собирает debug APK на
каждый push в `android/**` и нативную часть.

## Файлы

| Путь | Что |
|---|---|
| `android/` | Gradle-проект лаунчера и игры |
| `android/app/src/main/java/com/sonicgen/recomp/` | Kotlin: лаунчер, настройки, редактор, оверлей, JNI-мост |
| `android/app/src/main/java/org/libsdl/app/` | Java-часть SDL 2.30.9 (zlib, `cpp/SDL-LICENSE.txt`) |
| `SonicGenerationsRecomp/os/android/` | logcat, process/user/media/version, JNI-мост |
| `SonicGenerationsRecomp/hid/touch_input.*` | состояние виртуального геймпада |
| `SonicGenerationsRecomp/gpu/texture_transcode.*` | ETC2 энкодер/декодер + диск-кеш |
| `SonicGenerationsRecomp/gpu/vulkan_host.*` | `ImageKind::Etc2*`, `UploadEtc2`, `SupportsEtc2` |
