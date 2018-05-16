[@bs.module "recharts"]
external lineChart : ReasonReact.reactClass = "LineChart";

[@bs.obj]
external makeProps :
  (~data: array('a)=?, ~width: int=?, ~height: int=?, ~margin: 'b=?, unit) =>
  _ =
  "";

let make = (~data=?, ~width=?, ~height=?, ~margin=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=lineChart,
    ~props=makeProps(~data?, ~width?, ~height?, ~margin?, ()),
    children,
  );