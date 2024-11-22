// http://recharts.org/en-US/api/ScatterChart
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~height: int=?,
    ~margin: margin=?,
    ~style: ReactDOM.Style.t=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "ScatterChart";
