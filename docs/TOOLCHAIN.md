# Закреплённые модифицированные инструменты

Сабмодули заменены на форки пользователя, а не добавлены вторыми копиями:

| Путь | Репозиторий | Закреплённый commit |
|---|---|---|
| `tools/XenonRecomp` | https://github.com/Player124413/XenonRecomp | `92dfd8fdaa6a08ec671de7a1c5821936d452af0f` |
| `tools/XenosRecomp` | https://github.com/Player124413/XenosRecomp | `034c1fb4a23dc243811c1e27a8a78abc22f1273c` |

Это HEAD веток по умолчанию форков на момент переключения. Gitlink фиксирует
именно commit: последующие изменения этих веток не попадут в сборку незаметно.

После получения изменений в существующем клоне:

```sh
git submodule sync --recursive
git submodule update --init --recursive tools/XenonRecomp tools/XenosRecomp
```

Существующий `ppc/` и опубликованный `gpu/shader_cache.cpp` не перегенерированы.
Смена сабмодуля сама по себе не исправляет уже сгенерированный код и не доказывает
совместимость с любой исторической версией инструментов, которой он получен.

## Отличия XenosRecomp, влияющие на runtime

- Девять полей cache entry: hash, DXIL offset/size, SPIR-V offset/size, AIR
  offset/size, specialization mask, source filename. Ранее неизвестные три
  числовых поля теперь подтверждены исходником `main.cpp` форка.
- Shared constants существенно отличаются от старого upstream; смещения
  перечислены в [VULKAN.md](VULKAN.md). Нельзя использовать старую раскладку.
- `getPackedBooleanIndex` вычисляет `(boolAddress % 128) + (pixel ? 16 : 0)`.
  Доступ ограничен 32 packed bits; форк имеет предупреждения и fallback-ветви
  для неподдержанных индексов. Это не полноценный аппаратный банк 256 бит и не
  основание утверждать, что условные ветвления игры воспроизводятся без ошибок.
- Старый `patches/xenos-generations-booleans.patch` оставлен как исторический
  материал, **не применяется** в workflow: он написан под другую версию/ABI.
- Workflow явно выбирает Vulkan и сохраняет отчёт компилятора. Не используются
  `--allow-failures`, автоматическая перегенерация PPC или подстановка шейдеров.
