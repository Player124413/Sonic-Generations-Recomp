# tools/nxr — разбор сгенерированного кода для NativeXRenderer

Два скрипта, которые снимают карту D3D-слоя игры (шаг 1 из
`thirdparty/native_x_renderer/docs/integrating-a-game.md`) с кода в `ppc/` или с любой другой
кодогенерации. Python 3, без зависимостей.

| Скрипт | Что делает |
|---|---|
| `ppc_index.py` | Индексирует `*_recomp.N.cpp` в `out/ppc_index.pkl`: функция → (адрес, инструкция). Понимает обе кодогенерации — XenonRecomp (`PPC_FUNC_IMPL(__imp__sub_…)`, как в `ppc/`) и ReXGlue (`DEFINE_REX_FUNC(sub_…)`). Умеет `dis` / `callers` / `range` / `grep`. |
| `scan.py` | Считает PM4-пакеты, которые строит каждая функция (`lis` + `ori`/`addi`), и печатает отчёт: где draw, где tiling, где события и запросы. Флаг `--markdown` — для вставки в docs. |

```bash
python tools/nxr/ppc_index.py build ppc        # ~17 секунд для 153 882 функций
python tools/nxr/scan.py                       # сводка по пакетам
python tools/nxr/ppc_index.py dis 82DC85F0     # дизассемблер функции
python tools/nxr/ppc_index.py callers 82DC85F0 # кто её вызывает
python tools/nxr/ppc_index.py grep "lis r11,0x3c"
```

Файл индекса совпадает по формату с `native_x_renderer/tools/ppc_index.py`, поэтому остальные их
инструменты читают его же:

```bash
PPC_INDEX=out/ppc_index.pkl python thirdparty/native_x_renderer/tools/pm4_consts.py
PPC_INDEX=out/ppc_index.pkl python thirdparty/native_x_renderer/tools/fn_summary.py range 82DA0000 82DD0000
PPC_INDEX=out/ppc_index.pkl python thirdparty/native_x_renderer/tools/rs_setters.py 82DA0000 82DD0000 131080:8192:7
```

`out/` в `.gitignore`, индекс в репозиторий не попадает.

Почему свой индексатор, а не только их: их `ppc_index.py` читает только формат ReXGlue, а `ppc/`
этого репозитория сделан старым XenonRecomp. Логика взята из их скрипта (MIT,
ElGuslml/NativeXRenderer), разбор второго формата добавлен здесь.
