// http://recharts.org/en-US/api/ScatterChart

open BsRecharts__Utils;

module Binding = {
  [@bs.module "recharts"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~height: int=?,
      ~margin: margin=?,
      ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit
                       =?,
      ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
      ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~width: int=?,
      ~children: React.element=?
    ) =>
    React.element =
    "ScatterChart";
};

[@react.component]
let make =
    (
      ~className=?,
      ~height=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseOut=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~onMouseMove=?,
      ~width=?,
      ~children=?,
    ) =>
  Binding.make(
    Binding.makeProps(
      ~className?,
      ~height?,
      ~margin?,
      ~onClick?,
      ~onMouseEnter?,
      ~onMouseLeave?,
      ~onMouseOut?,
      ~onMouseUp?,
      ~onMouseDown?,
      ~onMouseMove?,
      ~width?,
      ~children?,
      (),
    ),
  );