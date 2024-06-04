// http://recharts.org/en-US/api/Area
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~_type: lineType=?,
    ~activeDot: 'activeDot=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@mel.string] [
                        | `ease
                        | [@mel.as "ease-in"] `easeIn
                        | [@mel.as "ease-out"] `easeOut
                        | [@mel.as "ease-in-out"] `easeInOut
                        | `linear
                      ]
                        =?,
    ~baseLine: 'baseLine=?,
    ~connectNulls: bool=?,
    ~hide: bool=?,
    ~className: string=?,
    ~dataKey: 'dataKey,
    ~dot: 'dot=?,
    ~fill: string=?,
    ~fillOpacity: float=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: layout=?,
    ~legendType: legendType=?,
    ~name: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~points: array(Js.t({..}))=?,
    ~stackId: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "Area";
