// http://recharts.org/en-US/api/ReferenceArea

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~alwaysShow: bool=?,
    ~className: string=?,
    ~fill: string=?,
    ~isFront: bool=?,
    ~label: 'label=?,
    ~fillOpacity: float=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~r: int=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    ~x1: string=?,
    ~x2: string=?,
    ~xAxis: Js.t({..})=?,
    ~xAxisId: string=?,
    ~y1: string=?,
    ~y2: string=?,
    ~yAxis: Js.t({..})=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "ReferenceArea";
