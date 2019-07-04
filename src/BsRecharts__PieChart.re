open BsRecharts__Utils;

// http://recharts.org/en-US/api/PieChart
[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "PieChart";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~height: int=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~height=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~className?,
        ~height?,
        ~margin?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~width?,
        (),
      ),
    children,
  );