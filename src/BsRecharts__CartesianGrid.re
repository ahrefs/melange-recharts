// http://recharts.org/en-US/api/CartesianGrid
module Binding = {
  [@bs.module "recharts"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~height: int=?,
      ~horizontal: bool=?,
      ~horizontalPoints: array('horizontalPoints)=?,
      ~stroke: string=?,
      ~strokeDasharray: string=?,
      ~strokeWidth: int=?,
      ~vertical: bool=?,
      ~verticalPoints: array('verticalPoints)=?,
      ~width: int=?,
      ~x: int=?,
      ~y: int=?
    ) =>
    React.element =
    "CartesianGrid";
};

[@react.component]
let make =
    (
      ~className=?,
      ~height=?,
      ~horizontal=?,
      ~horizontalPoints=?,
      ~stroke=?,
      ~strokeDasharray=?,
      ~strokeWidth=?,
      ~vertical=?,
      ~verticalPoints=?,
      ~width=?,
      ~x=?,
      ~y=?,
    ) =>
  Binding.make(
    Binding.makeProps(
      ~className?,
      ~height?,
      ~horizontal?,
      ~horizontalPoints?,
      ~stroke?,
      ~strokeDasharray?,
      ~strokeWidth?,
      ~vertical?,
      ~verticalPoints?,
      ~width?,
      ~x?,
      ~y?,
      (),
    ),
  );