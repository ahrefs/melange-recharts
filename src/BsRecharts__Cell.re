// http://recharts.org/en-US/api/Cell

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

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~className=?, ~fill=?, ~stroke=?, ~strokeWidth=?, children) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~className?, ~fill?, ~stroke?, ~strokeWidth?, ()),
      children,
    );
};
