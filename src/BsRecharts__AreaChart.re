// http://recharts.org/en-US/api/AreaChart

open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~baseValue: 'baseValue=?,
    ~className: string=?,
    ~data: array('dataItem),
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~stackOffset: [@bs.string] [ | `expand | `none | `wiggle | `silhouette]=?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "AreaChart";
