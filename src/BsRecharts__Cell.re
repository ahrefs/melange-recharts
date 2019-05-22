/* http://recharts.org/en-US/api/Cell */
[@bs.module "recharts"] external reactClass: ReasonReact.reactClass = "Cell";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~fill: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    unit
  ) =>
  _ =
  "";

let make = (~className=?, ~fill=?, ~stroke=?, ~strokeWidth=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~className?, ~fill?, ~stroke?, ~strokeWidth?, ()),
    children,
  );
