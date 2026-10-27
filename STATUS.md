# STATUS — что проверено, а что нет

Единственный источник правды о готовности. Если строка здесь противоречит README или любому другому
документу — верна эта.

Последние записанные прогоны CI — 18 октября 2026, ветка `arena/a30242c6-sonic-generations-recomp`
(нажмите номер, чтобы увидеть лог). В этой ветке те же workflow ещё не запускались.

## Проверено автоматическими проверками

| Что | Итог | Чем | Чего это **не** доказывает |
|---|---|---|---|
| Сборка Windows-рантайма (x64, ClangCL) | ✅ | [Windows x64 runtime, 39154521696](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39154521696) | что игра запускается и рисует |
| Диагностическая сборка всего рантайма | ✅ | [Full runtime diagnostic build, 39154521658](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39154521658) | ничего про геймплей |
| Тесты GPU-хуков наблюдения | ✅ | [GPU observation hook tests, 39154521720](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39154521720) | что состояние draw переводится полностью |
| XMA-декодер (FFmpeg) | ✅ | [FFmpeg XMA decoder tests, 39150760258](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39150760258) | что звук игры звучит правильно |
| Vulkan-ресурсы, indexed draw, WSI | ❌ последний прогон упал | [Vulkan resources, indexed draw and WSI, 39154521665](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39154521665) | — |
| Windows ReXGlue migration (host + кандидат PPC) | ❌ последний прогон упал | [Windows ReXGlue migration, 39152409301](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39152409301) | — |
| Android APK | ✅ | [Android APK, 39157836973](https://github.com/Player124413/Sonic-Generations-Recomp/actions/runs/39157836973) | ничего про Windows-порт |

Сборка и линковка импортов **не означают**, что поведение этих импортов реализовано.

## Не проверено ни разу

| Что | Состояние |
|---|---|
| Загрузка меню Sonic Generations | ❌ |
| Загрузка уровня, камера, физика | ❌ |
| Правильная картинка (текстуры, шейдеры, тени, эффекты) | ❌ |
| Звук в игре (музыка, эффекты, ролики) | ❌ |
| Ввод геймпада/клавиатуры в игре | ❌ |
| Сохранения: запись, загрузка, повторный запуск | ❌ |
| Длительная сессия (час и больше) | ❌ |
| **Прохождение от начала до конца** | ❌ |
| Путь ReXGlue (Xenos Vulkan): меню, уровень, геймплей на Windows | ❌ не собрано и не запускалось здесь |

## Что нужно, чтобы закрыть строку

1. Собрать ReXGlue SDK с Vulkan и прогнать `rexglue codegen` на вашем `default.xex`
   ([инструкция](docs/REXGLUE_WINDOWS.md)).
2. Собрать `rex/` с `-DSONIC_REX_BUILD_GAME=ON` и запустить на Windows.
3. Записать сюда результат каждого шага: скриншот меню, уровень, длительность сессии — с указанием
   даты и конфигурации, а не «работает».
4. Найденные игровые квирки фиксировать в `rex/src/` (хуки) и в манифесте, а не в общих местах SDK.

## Как читать остальные документы

`docs/VULKAN.md`, `docs/GPU.md`, `docs/ROADMAP.md`, `docs/RENDER_PORT_PLAN.md` и другие — рабочие
записи о компонентах и планах. Их формулировки про «готово» относятся к реализации компонента, а не
к игре; мерило готовности — этот файл.
