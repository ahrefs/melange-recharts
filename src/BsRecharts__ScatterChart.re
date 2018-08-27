open BsRecharts__Utils;

/* http://recharts.org/en-US/api/ScatterChart */
[@bs.module "recharts"]
external reactClass : ReasonReact.reactClass = "ScatterChart";

[@bs.obj]
external makeProps :
  (
    ~height: int=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~height=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseOut=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~onMouseMove=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~height?,
        ~margin?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseOut?,
        ~onMouseUp?,
        ~onMouseDown?,
        ~onMouseMove?,
        ~width?,
        (),
      ),
    children,
  );