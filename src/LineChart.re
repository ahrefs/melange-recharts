/* http://recharts.org/en-US/api/LineChart */
[@bs.module "recharts"]
external lineChart : ReasonReact.reactClass = "LineChart";

[@bs.obj]
external makeProps :
  (
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~syncId: string=?,
    ~width: int=?,
    ~height: int=?,
    ~data: array(Js.t({..})),
    ~margin: Utils.margin=?,
    /* ~onClick:  */
    /* ~onMouseEnter:  */
    /* ~onMouseMove:  */
    /* ~onMouseLeave:  */
    unit
  ) =>
  _ =
  "";

let make =
    (~layout=?, ~syncId=?, ~width=?, ~height=?, ~data, ~margin=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=lineChart,
    ~props=
      makeProps(~layout?, ~syncId?, ~width?, ~height?, ~data, ~margin?, ()),
    children,
  );
