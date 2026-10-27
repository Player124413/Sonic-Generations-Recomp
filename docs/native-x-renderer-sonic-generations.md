# Карта D3D-слоя Sonic Generations для NativeXRenderer

Документ в формате `docs/native-x-renderer-potcawe.md` из проекта-первоисточника: адреса, улики,
что подтверждено, а что нет. Всё, что ниже, воспроизводится командами из репозитория и не требует
запуска игры.

## Что и как снято

Код игры в `ppc/` — вывод старого XenonRecomp (`PPC_FUNC_IMPL(__imp__sub_…)`). Инструменты NXR ждут
кодогенерацию ReXGlue (`DEFINE_REX_FUNC(sub_…)`), поэтому в `tools/nxr/ppc_index.py` добавлен разбор
обоих форматов; дальше работает их методика: пакеты PM4 собираются парами `lis` + `ori`/`addi`, и
функция библиотеки D3D видна по пакетам, которые она строит.

```bash
python tools/nxr/ppc_index.py build ppc     # 153 882 функции, 4 866 637 инструкций, 603 файла
python tools/nxr/scan.py --markdown         # сводка: пакеты по функциям
PPC_INDEX=out/ppc_index.pkl python thirdparty/native_x_renderer/tools/pm4_consts.py
python tools/nxr/ppc_index.py dis 82DC85F0  # дизассемблер одной функции
python tools/nxr/ppc_index.py callers 82DC85F0
```

Диапазон адресов в `ppc/`: `0x82480000`–`0x83694A40`. Файл индекса (`out/ppc_index.pkl`) в git не
попадает.

## Кандидаты по пакетам

Из 153 882 функций только 41 строит пакет draw/tiling/event/query. Это и есть библиотека D3D.

| Функция | Пакеты | Рабочая гипотеза |
|---|---|---|
| `sub_82DC85F0` | flush масок состояния, `INVALIDATE_STATE`, `IM_LOAD_IMM`, fetch-константы (`reg 4800+6`, `4802+6`), VS-константы (`reg 4000+48`), `DRAW_INDX_2@0x82DC8C5C`, `EVENT_WRITE` | **главный draw-путь** (`DrawIndexedPrimitives` с выгрузкой состояния) |
| `sub_82DBE9A0` | fetch-константа 0, регистры `2000+2`, `4003+1`, `DRAW_INDX_2@0x82DBEBCC` | draw с одной текстурой |
| `sub_82DB1048` | `INVALIDATE_STATE`, `IM_LOAD_IMM`, `DRAW_INDX[4]@0x82DB1164` | draw (inline-вершины) |
| `sub_82DAF7E0`, `sub_82DAF938`, `sub_82DB2458`, `sub_82DBA1A8` | `IM_LOAD_IMM` + `DRAW_INDX_2` | `BeginVertices`/`EndVertices`-семейство (inline draw), кандидаты в `kInlineBegin`/`kInlineEnd` |
| `sub_82DA6F60`, `sub_82DA7468`, `sub_82DA7A48`, `sub_82DA7E60` | 2 или 4 вершины, одна fetch-константа (`reg 48BA+6`), `SET_BIN_MASK_LO`, `EVENT_WRITE_EXT`, `EVENT_WRITE` | **resolve/copy**: полный экран двумя треугольниками + событие разрешения EDRAM |
| `sub_82DAAE90`, `sub_82DAC270`, `sub_82DB5400`, `sub_82DAD210` | `SET_BIN_MASK_LO/HI`, `SET_BIN_SELECT_LO/HI` | tiling (`BeginTiling`/`EndTiling`, бины) |
| `sub_82DF3E18` | `EVENT_WRITE_ZPD`, `VIZ_QUERY`, `SET_BIN_MASK_LO`, `SET_BIN_SELECT_LO` | запросы видимости (`QueryIssue`) и z-pass |
| `sub_82F069A8` | `MEM_WRITE`, `WAIT_REG_MEM`, `DRAW_INDX_BIN`, `EVENT_WRITE_SHD` | контекст/swap/скейлер — сверить с `Swap`/`Present` |
| `sub_83344890` | `CONTEXT_UPDATE` | смена контекста GPU (не draw) |
| `sub_82A305C0` | много записей `reg 20xx` + `DRAW_INDX` | похоже на «холодную» инициализацию состояния, не игровой draw |

Вызовы (для восстановления цепочки «движок → D3D»):

```
sub_82DC85F0 ← sub_82DC8EB8          (единственный вызов: обёртка движка)
sub_82DA6F60 ← sub_82DA7420, sub_82DC3D60, sub_8321FB88
sub_82DA7468 ← sub_82DA79A8
sub_82DBE9A0 ← sub_82DBEC58 (3 вызова)
sub_82DB2458 ← sub_82DC3690
sub_82FA4280 ← sub_82FA44C0, sub_82FCFAC8
```

## Устройство D3D: что видно в flush-функции `sub_82DC85F0`

Разбор её пролога — единственный источник улик о `DeviceLayout`:

```
82DC85F0  mflr r12
82DC8610  addi r30,r3,23756     ; r30 = что-то в устройстве (+23756)
82DC8614  bl   0x82db2340       ; "начать запись пакетов": r4=0, r5=112, r6=16
82DC8618  ld   r4,16(r31)
82DC861C  cmpldi cr6,r4,0
82DC8638  lwz  r5,10560(r31)
82DC863C  bl   0x82db5400       ; выгрузка одной группы состояния (r5 = 0x2000?)
82DC8648  clrldi r10,r11,52     ; выделить группу битов из маски @+16
82DC8658  li   r5,8704          ; 0x2200 — база группы регистров
82DC8664  bl   0x82db5790       ; выгрузка группы регистров по маске
```

Ссылки на поля устройства (`r31` = указатель D3D-устройства) в этой функции:

| Смещение | Обращения | Гипотеза |
|---|---|---|
| `+16`, `+24`, `+32`, `+40` | 64-битные `ld`/`std` (11/3/2/1 раз) | грязные маски состояния (VS-константы, PS-константы, группы регистров, fetch-слоты) |
| `+48` | `stw`/`lwz` (9/2 раза) | **указатель записи командного буфера** — то же смещение, что в профиле POTCAWE для XDK 2.0.5426 |
| `+56` | `lwz` (7 раз) | граница/размер сегмента кольца (гипотеза) |
| `+10392`, `+10560`, `+13888` | `lwz`/`stw` | счётчики/указатели выгрузки, читаются рядом с выгрузками |

Смещение `+48` для write pointer совпадает с профилем POTCAWE (`d.command_buffer_write = 48`), база
группы `0x2200` — тоже. Sonic Generations (2011) собран XDK из той же серии, что и POTCAWE
(2.0.5426), поэтому рабочая гипотеза: **layout устройства близок к POTCAWE**, но это надо
подтвердить observer'ом, а не скопировать.

## Чего ещё нет (и как это получить)

- **Версия XDK** исполняемого файла: `node tools/xex/xdkver.mjs assets/default.xex` (recomp-tools).
  Она определяет, какой справочный layout (`native_x_renderer/docs/xdk-d3d-reference.md`) брать
  за основу.
- **Полный `DeviceLayout`**: разобрать flush (`sub_82DB5790`, `sub_82DB5400`) и посмотреть, какие
  регистры в какие группы сгруппированы — это даёт `register_groups`, базы констант
  (`vs_float_constants`, `ps_float_constants`, fetch) и число масок.
- **`ObjectLayout`**: как устроены объект текстуры (fetch-константа) и поверхность render target.
  Читается из `SetTexture`/`SetRenderTarget`-кандидатов после подтверждения хуков.
- **`scene_resolve_caller`**: адрес возврата `Resolve`, который копирует готовую сцену (после
  пост-обработки, до HUD). Виден в trace как ` from 0x…` у resolve-вызова.
- **Подтверждение хуков**: trace (`--native_x_renderer_trace=true`) даёт счётчики вызовов на кадр;
  observer (`--native_x_renderer_verify=true`) — процент совпадения состояния. Пока не 100 %, хуки
  в `rex/src/native_x/sonic_generations_hooks.inc` не вписываются.

## Правило, которое здесь важнее скорости

Ни одно смещение и ни один адрес не попадают в профиль или в список хуков без улики. Выдуманный
адрес в хуке означает чтение не того устройства: рендерер нарисует мусор, а выглядеть это будет как
«NXR не работает» — и отлаживать придётся не то место. Пустой список хуков и `kUnknown` в профиле —
это честное «ещё не размечено», а не недоделка.
