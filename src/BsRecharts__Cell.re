/* http://recharts.org/en-US/api/Cell */
[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "Cell";

[@bs.obj]
external makeProps :
  (
    ~fill: string=?,
    ~stroke: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~fill=?,
      ~stroke=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~fill?,
        ~stroke?,
        (),
      ),
    children,
  );
