// http://recharts.org/en-US/api/Scatter
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~legendType: legendType=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    ~zAxisId: string=?,
    ~className: string=?,
    ~name: string=?,
    ~data: array('data),
    ~fill: string=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    ~line: 'line=?,
    ~hide: bool=?,
    ~shape: 'shape=?,
    ~lineType: 'lineType=?,
    ~points: array('point)=?,
    ~isAnimationActive: bool=?,
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
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~id: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Scatter";
