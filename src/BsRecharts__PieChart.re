open BsRecharts__Utils;

/* http://recharts.org/en-US/api/PieChart */
[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "PieChart";

[@bs.obj]
external makeProps :
  (
    ~height: int=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make = (~height=?, ~margin=?, ~onClick=?, ~onMouseEnter=?, ~onMouseLeave=?, ~width=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~height?, ~margin?, ~onClick?, ~onMouseEnter?, ~onMouseLeave?, ~width?, ()),
    children,
  );
