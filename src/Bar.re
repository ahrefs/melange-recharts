[@bs.module "recharts"] external bar : ReasonReact.reactClass = "Bar";

[@bs.obj]
external makeProps :
  (
    ~fill: string=?,
    ~dataKey: string=?,
    ~stackId: string=?,
    ~name: string=?,
    ~maxBarSize: int=?,
    unit
  ) =>
  _ =
  "";

let make = (~fill=?, ~dataKey=?, ~stackId=?, ~name=?, ~maxBarSize=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=bar,
    ~props=makeProps(~fill?, ~dataKey?, ~stackId?, ~name?, ~maxBarSize?, ()),
    children,
  );
