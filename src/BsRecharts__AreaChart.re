/* http://recharts.org/en-US/api/AreaChart */

open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass : ReasonReact.reactClass = "AreaChart";

[@bs.obj]
external makeProps :
  (
    ~baseValue: 'baseValue=?,
    ~data: array(Js.t({..})),
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~stackOffset: [@bs.string] [ | `expand | `none | `wiggle | `silhouette]=?,
    ~syncId: string=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~data,
      ~baseValue=?,
      ~height=?,
      ~layout=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~stackOffset=?,
      ~syncId=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~data,
        ~baseValue?,
        ~height?,
        ~layout?,
        ~margin?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~stackOffset?,
        ~syncId?,
        ~width?,
        (),
      ),
    children,
  );
