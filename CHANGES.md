## 5.0.4

- add `syncMethod` prop to `LineChart`, `AreaChart`, `BarChart`, `ComposedChart`

## 5.0.3

- fix tick props in `XAxis`, `YAxis` and `ZAxis`

## 5.0.2

- change Tooltip.cursor Obj type to open object type

## 5.0.1

- update `recharts` to `2.14.1`

## 5.0.0

- _[breaking]_ improve bindings for XYZ axes, Treemap, Pie and Cell components [#59](https://github.com/ahrefs/melange-recharts/pull/59)
- _[breaking]_ remove `TooltipCursor` module [#60](https://github.com/ahrefs/melange-recharts/pull/60)

## 4.0.7 (2024-11-23)

- add `payload` to `Pie` and `Bar` event handler
- add `style` to `XAxis` and `YAxis`

## 4.0.6 (2024-10-19)

- add `strokeOpacity` to `Line`

## 4.0.5 (2024-10-01)

- add `style` to `AreaChart`
- add `style` to `BarChart`
- add `style` to `ComposedChart`
- add `style` to `LineChart`
- add `style` to `PieChart`
- add `style` to `ScatterChart`

## 4.0.4 (2024-07-26)

- add `data` to `Line`

## 4.0.3 (2024-06-04)

- add `filterNull` to `Tooltip`
- support `melange.3.0.0` and `reason-react.0.14.0`

## 4.0.1 (2024-02-16)

- add `strokeDasharray` to `Line`

## 4.0.0 (2023-10-22)

- Migrate to Melange v2.

## 3.6.0 (2023-02-24)

- add `Dot` bindings

## 3.5.0 (2023-02-20)

- add `LabelList`

## 3.4.1 (2023-02-17)

- add missing `Treemap` to `BsTreemap`

## 3.4.0 (2023-02-17)

- add `Treemap`

## 3.3.0 (2022-11-11)

- change `strokeDasharray` type from `int` to `string` in `Scatter` bindings

## 3.2.0 (2022-10-21)

- add bindings to `ZAxis`
- change `data` prop type for `Scatter` bindings
- add `stroke`, `strokeDasharray`, `hide` props to `Scatter` bindings

## 3.1.0 (2022-08-19)

- Bump `recharts` peer dependency to `2.1.13`

## 3.0.0 (2022-08-08)

- Bump `recharts` peer dependency to `2.1.13`

## 2.1.0 (2022-03-30)

- Reinstate `recharts` as peer dependency
- Add `ticksCount` to `YAxis`

## 2.0.0 (2021-12-03)

- Bump `bs-platform@9`
- Drop `Jsx2` wrappers

## 1.0.4 (2021-11-09)

- Add `radius` prop to `Bar` bindings

## 1.0.3 (2021-11-08)

- Add `cursor` prop to `Bar` bindings

## 1.0.2 (2021-05-19)

- Bump url-parse from 1.4.7 to 1.5.1 in /examples (#40)
- Bump lodash from 4.17.19 to 4.17.21 in /examples (#41)
- Bump elliptic from 6.5.3 to 6.5.4 in /examples (#36)
- Bump y18n from 4.0.0 to 4.0.1 in /examples (#37)

## 1.0.1 (2021-01-09)

- `key` prop is restored for BarChart, CartesianAxis, ComposerChart, Pie, ResponsiveContainer, Tooltip, XAxis, and YAxis

## 1.0.0 (2020-01-03)

- Update type of `label` prop in `XAxis` and `YAxis`

## 0.4.8 (2020-12-31)

- Add `hide` prop to `Line` bindings
- Add `hide` prop to `Area` bindings
- Extract `Line`/`Area` `type_` prop inline definition.
- Add missing `[@bs.string]` annotation.

## 0.4.7 (2020-12-21)

- make `TooltipCursor` config props optional

## 0.4.6 (2020-12-21)

- Add `Bool(bool)` variant to `TooltipCursor`

## 0.4.5 (2020-12-21)

- Add type of `Tooltip.cursor`

## 0.4.4 (2020-12-16)

- Add `fillOpacity` prop to `ReferenceArea`

## 0.4.3 (2020-12-16)

- Fix typo in `BarChart`

## 0.4.2 (2020-12-16)

- Add `onMouseUp`/`onMouseDown` to `LineChart`/`BarChart`/`ComposedChart`/`AreaChart`

## 0.4.1 (2020-11-18)

- Add `background` prop to `Cell`

## 0.4.0 (2020-09-29)

- Bump `recharts` from 1.6.2 to 1.8.5 (#33)

## 0.3.3 (2020-02-21)

- Bump `lodash` from 4.17.11 to 4.17.15 (#26)
- Add bindings for `ReferenceArea` (#25)

## 0.3.2 (2019-07-31)

- Add `jsx2` wrappers

## 0.3.1 (2019-07-31)

- add `children` prop to `Bar` cmponent

## 0.3.0 (2019-07-08)

- migrate to jsx3 (#20)

## 0.2.14 (2019-05-20)

- move recharts to peerDependencies (#17)

## 0.2.13 (2019-03-28)

- remove deprecated `string_of_float`

## 0.2.12 (2018-12-26)

- add `strokeWidth` prop to `Cell`

## 0.2.11 (2018-12-26)

- add `stackOffset` prop to `ComposedChart`

## 0.2.10 (2018-11-29)

- untype `dataKey` prop

## 0.2.9 (2018-11-15)

- add `Scatter`
- add `ScatterChart`

## 0.2.8 (2018-10-10)

- unwrap `barCategoryGap` and `barGap` in `ComposedChar`

## 0.2.7 (2018-10-10)

- export `ComposedChart`

## 0.2.6 (2018-10-10)

- add `ComposedChart`

## 0.2.5 (2018-10-10)

- fix `type_` in `Area`, `Line`

## 0.2.4 (2018-09-18)

- `dataKey` is required in `Pie`, `Brush`, `Bar` and `Area`
- `tickMargin` is required in `CartesianAxis`

## 0.2.3 (2018-09-17)

- add 'stroke' to Pie

## 0.2.2 (2018-09-17)

- refmt
- Pie chart updates:
  - add fill
  - encode PxOrPrc

## 0.2.1 (2018-08-16)

- change data type form `array(Js.t({..}))` to `array('dataItem)`, so we can accept `Json.t` too
- add reason-react to devDeps

## 0.2.0 (2018-08-13)

- upgrade Reason React and bs-platform

## 0.1.10 (2018-08-09)

- add bindings to Brush component

## 0.1.9 (2018-08-09)

- move ReasonReact to peer dependencies

## 0.1.8 (2018-08-02)

- use floats for measurement

## 0.1.7 (2018-08-02)

- ReferenceLine bindings

## 0.1.6 (2018-07-14)

- Pie chart bindings

## 0.1.5

- the begining of the `CHANGELOG.md`
