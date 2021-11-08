# v1.0.2 (08.11.2021)

- Add `cursor` prop to `Bar` bindings

# v1.0.2 (19.05.2021)

-  Bump url-parse from 1.4.7 to 1.5.1 in /examples (#40)
-  Bump lodash from 4.17.19 to 4.17.21 in /examples (#41)
-  Bump elliptic from 6.5.3 to 6.5.4 in /examples (#36)
-  Bump y18n from 4.0.0 to 4.0.1 in /examples (#37)

# v1.0.1 (09.01.2021)

- `key` prop is restored for BarChart, CartesianAxis, ComposerChart, Pie, ResponsiveContainer, Tooltip, XAxis, and YAxis

# v1.0.0 (03.01.2020)

- Update type of `label` prop in `XAxis` and `YAxis`

# v0.4.8 (31.12.2020)

- Add `hide` prop to `Line` bindings
- Add `hide` prop to `Area` bindings
- Extract `Line`/`Area` `type_` prop inline definition.
- Add missing `[@bs.string]` annotation.

# v0.4.7 (21.12.2020)

- make `TooltipCursor` config props optional

# v0.4.6 (21.12.2020)

- Add `Bool(bool)` variant to `TooltipCursor`

# v0.4.5 (21.12.2020)

- Add type of `Tooltip.cursor`

# v0.4.4 (16.12.2020)

- Add `fillOpacity` prop to `ReferenceArea`

# v0.4.3 (16.12.2020)

- Fix typo in `BarChart`

# v0.4.2 (16.12.2020)

- Add `onMouseUp`/`onMouseDown` to `LineChart`/`BarChart`/`ComposedChart`/`AreaChart`

# v0.4.1 (18.11.2020)

- Add `background` prop to `Cell`

# v0.4.0 (29.09.2020)

- Bump `recharts` from 1.6.2 to 1.8.5 (#33)

# v0.3.3 (21.02.2020)

- Bump `lodash` from 4.17.11 to 4.17.15 (#26)
- Add bindings for `ReferenceArea` (#25)

# v0.3.2 (31.07.2019)

- Add `jsx2` wrappers

# v0.3.1 (31.07.2019)

- add `children` prop to `Bar` cmponent

# v0.3.0 (08.07.2019)

- migrate to jsx3 (#20)

# v0.2.14 (20.05.2019)

- move recharts to peerDependencies (#17)

# v0.2.13 (28.03.2019)

- remove deprecated `string_of_float`

# v0.2.12 (26.12.2018)

- add `strokeWidth` prop to `Cell`

# v0.2.11 (26.12.2018)

- add `stackOffset` prop to `ComposedChart`

# v0.2.10 (29.11.2018)

- untype `dataKey` prop

# v0.2.9 (15.11.2018)

- add `Scatter`
- add `ScatterChart`

# v0.2.8 (10.10.2018)

- unwrap `barCategoryGap` and `barGap` in `ComposedChar`

# v0.2.7 (10.10.2018)

- export `ComposedChart`

# v0.2.6 (10.10.2018)

- add `ComposedChart`

# v0.2.5 (10.10.2018)

- fix `type_` in `Area`, `Line`

# v0.2.4 (18.09.2018)

- `dataKey` is required in `Pie`, `Brush`, `Bar` and `Area`
- `tickMargin` is required in `CartesianAxis`

# v0.2.3 (17.09.2018)

- add 'stroke' to Pie

# v0.2.2 (17.09.2018)

- refmt
- Pie chart updates:
  - add fill
  - encode PxOrPrc

# v0.2.1 (16.08.2018)

- change data type form `array(Js.t({..}))` to `array('dataItem)`, so we can accept `Json.t` too
- add reason-react to devDeps

# v0.2.0 (13.08.2018)

- upgrade Reason React and bs-platform

# v0.1.10 (9.08.2018)

- add bindings to Brush component

# v0.1.9 (9.08.2018)

- move ReasonReact to peer dependencies

# v0.1.8 (2.08.2018)

- use floats for measurement

# v0.1.7 (2.08.2018)

- ReferenceLine bindings

# v0.1.6 (14.07.2018)

- Pie chart bindings

# <= v0.1.5

- the begining of the `CHANGELOG.md`
