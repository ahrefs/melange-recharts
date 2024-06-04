// http://recharts.org/en-US/api/ComposedChart
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~data: array('dataItem),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~height: int=?,
    ~layout: layout=?,
    ~margin: margin=?,
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
  "ComposedChart";

let makeProps = (~barCategoryGap=?, ~barGap=?) =>
  makeProps(~barCategoryGap=?barCategoryGap->PxOrPrc.encodeOpt, ~barGap=?barGap->PxOrPrc.encodeOpt);
