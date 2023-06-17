// http://recharts.org/en-US/api/Scatter
open Utils;

[@bs.module "recharts"] [@react.component]
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
    ~animationEasing: [@bs.string] [
                        | `ease
                        | [@bs.as "ease-in"] `easeIn
                        | [@bs.as "ease-out"] `easeOut
                        | [@bs.as "ease-in-out"] `easeInOut
                        | `linear
                      ]
                        =?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~id: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Scatter";
