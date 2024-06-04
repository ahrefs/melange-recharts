// http://recharts.org/en-US/api/Legend
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~align: [ | `left | `center | `right]=?,
    ~chartHeight: int=?,
    ~chartWidth: int=?,
    ~content: 'content=?,
    ~className: string=?,
    ~height: int=?,
    ~iconSize: int=?,
    ~iconType: [ | `line | `square | `rect | `circle | `cross | `diamond | `star | `triangle | `wye]=?,
    ~layout: layout=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~payload: array(Js.t({..}))=?,
    ~verticalAlign: [ | `top | `middle | `bottom]=?,
    ~width: int=?,
    ~wrapperStyle: Js.t({..})=?
  ) =>
  React.element =
  "Legend";
