// http://recharts.org/en-US/api/Cell

module Binding = {
  [@bs.module "recharts"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~fill: string=?,
      ~stroke: string=?,
      ~strokeWidth: int=?
    ) =>
    React.element =
    "Cell";
};

[@react.component]
let make = (~className=?, ~fill=?, ~stroke=?, ~strokeWidth=?) =>
  Binding.make(
    Binding.makeProps(~className?, ~fill?, ~stroke?, ~strokeWidth?, ()),
  );