// http://recharts.org/en-US/api/LineChart
open BsRecharts__Utils;

module Binding = {
  [@bs.module "recharts"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~data: array('dataItem),
      ~height: int=?,
      ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
      ~margin: margin=?,
      ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit
                       =?,
      ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
      ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~syncId: string=?,
      ~width: int=?,
      ~children: React.element
    ) =>
    React.element =
    "LineChart";
};

[@react.component]
let make =
    (
      ~className=?,
      ~data,
      ~height=?,
      ~layout=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~syncId=?,
      ~width=?,
      ~children,
    ) => {
  Js.log2("data", data);
  Js.log2("children", children);
  <Binding
    ?className
    data
    ?height
    ?layout
    ?margin
    ?onClick
    ?onMouseEnter
    ?onMouseLeave
    ?onMouseMove
    ?syncId
    ?width>
    children
  </Binding>;
};