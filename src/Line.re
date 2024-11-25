// http://recharts.org/en-US/api/Line
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~_type: lineType=?,
    ~activeDot: 'activeDot=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing:
      [@mel.string] [
        | `ease
        | [@mel.as "ease-in"] `easeIn
        | [@mel.as "ease-out"] `easeOut
        | [@mel.as "ease-in-out"] `easeInOut
        | `linear
      ]
        =?,
    ~className: string=?,
    ~connectNulls: bool=?,
    ~hide: bool=?,
    ~data: array('data)=?,
    ~dataKey: 'dataKey,
    ~dot: 'dot=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: layout=?,
    ~legendType: legendType=?,
    ~name: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter:
      (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~points: array(Js.t({..}))=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~strokeOpacity: option(float)=?,
    ~strokeDasharray: string=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "Line";
