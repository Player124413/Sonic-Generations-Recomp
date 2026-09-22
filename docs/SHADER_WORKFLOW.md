# Workflow шейдеров Xbox 360

Файл: `.github/workflows/shaders.yml`.
Название в Actions: **Experimental Xbox 360 shaders**.

## Запуск

1. Сначала влейте ветку с workflow в основную ветку через PR. GitHub требует
   `workflow_dispatch` в default branch для появления ручного запуска.
2. Пришлите агенту временную прямую HTTPS-ссылку на ваш `shaders.zip` и попросите
   подготовить её через `scripts/prepare_shader_link.py`. Он сохранит ссылку
   в Actions secret `SHADERS_ZIP_URL` и выдаст SHA-256. Ссылка остаётся в истории
   чата; если это нежелательно, задайте секрет самостоятельно в настройках GitHub.
3. Actions → Experimental Xbox 360 shaders → Run workflow → поле `sha256`.
   Если секрет задан вручную, SHA-256 можно получить в PowerShell:
   ```powershell
   (Get-FileHash .\shaders.zip -Algorithm SHA256).Hash.ToLower()
   ```
4. Для скачивания результата включите `upload_result`. **Артефакт доступен
   читателям репозитория, а не только вам!** Он содержит производные игровые
   ресурсы. Рекомендуется приватный репозиторий; не публикуйте их без разрешения.
   По умолчанию загрузка выключена: workflow лишь проверяет конвертацию.
5. После успешного запуска скачайте artifact `experimental-shaders-<run-id>`.
   Срок хранения — один день. ZIP и извлечённые бинарники туда не включаются.

## Что делает workflow

- Собирает закреплённый submodule XenosRecomp и его DXC на Windows/ClangCL.
  Debug сохраняет assertions upstream для обнаружения ошибок конвертации.
- Скачивает ZIP из секрета; проверяет SHA-256 и лимит 256 MiB.
- Проверяет пути ZIP, дубликаты, последовательность частей `.ar.NN`.
- Объединяет части и ищет несжатые контейнеры Xenos. `.arl` — индексы, они
  не участвуют в поиске. Это не универсальный AR-распаковщик.
- Дедуплицирует контейнеры, генерирует HLSL и экспериментальный C++-кэш
  DXIL/SPIR-V, проверяет количество записей и непустые payload.
- Выдаёт `hlsl/`, `shader_cache.experimental.cpp`, `report.json`, `README.txt`.
- Удаляет временные игровые данные даже при ошибке.

## Честные ограничения

Реальный архив пользователя пока не проверен. Если хотя бы один AR не содержит
распознаваемых несжатых шейдеров, задача остановится, а не выдаст пустой кэш.
Сжатые AR (например, LZX) нужно предварительно распаковать совместимым
инструментом Hedgehog Engine. Проверка заголовков не является полной проверкой
безопасности контейнеров: используйте только собственные доверенные дампы.

XenosRecomp рассчитан прежде всего на Unleashed и может потребовать адаптации
под Generations. Используется общий shader_common.h, без UNLEASHED_RECOMP.
Успешный DXC не доказывает полноту поиска или визуальную корректность.

Выходной кэш upstream **не совместим с текущим ShaderCacheEntry проекта**:
он содержит offsets, specialization masks, Zstd-сжатые DXIL и smol-v SPIR-V.
Не копируйте его в runtime и не включайте SONIC_GENERATIONS_HAVE_SHADER_CACHE
до адаптации ABI, декомпрессии, привязок ресурсов и GPU-бэкенда.

## Локально

Соберите XenosRecomp командами из workflow и выполните:

```powershell
python scripts/shader_pipeline.py --zip C:\dumps\shaders.zip --sha256 <SHA256> --xenos build-shaders/XenosRecomp/Debug/XenosRecomp.exe
```

Результат: `private/shader-build/result/` (исключён из Git).
Для повторного запуска используйте новую папку `--work private/run2` или
удалите старую вручную. Уже существующая рабочая папка отвергается, чтобы
старые результаты не попали в новый artifact.
