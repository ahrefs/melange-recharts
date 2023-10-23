// http://recharts.org/en-US/api/BarChart
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~data: array('dataItem),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~className: string=?,
    ~height: int=?,
    ~layout: layout=?,
    ~margin: margin=?,
    ~maxBarSize: int=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~reverseStackOrder: bool=?,
    ~stackOffset: stackOffset=?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "BarChart";

let makeProps = (~barCategoryGap=?, ~barGap=?) =>
  makeProps(~barCategoryGap=?barCategoryGap->PxOrPrc.encodeOpt, ~barGap=?barGap->PxOrPrc.encodeOpt);
