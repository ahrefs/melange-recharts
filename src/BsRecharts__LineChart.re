open BsRecharts__Utils;

/* http://recharts.org/en-US/api/LineChart */
[@bs.module "recharts"]
external reactClass : ReasonReact.reactClass = "LineChart";

[@bs.obj]
external makeProps :
  (
    ~data: array(Js.t({..})),
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~syncId: string=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~data,
      ~height=?,
      ~layout=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~syncId=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~data,
        ~height?,
        ~layout?,
        ~margin?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~syncId?,
        ~width?,
        (),
      ),
    children,
  );
