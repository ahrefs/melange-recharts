// http://recharts.org/en-US/api/LineChart
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~data: array('dataItem),
    ~height: int=?,
    ~layout: layout=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "LineChart";
