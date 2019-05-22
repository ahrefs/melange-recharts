/* http://recharts.org/en-US/api/AreaChart */
open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "AreaChart";

[@bs.obj]
external makeProps:
  (
    ~baseValue: 'baseValue=?,
    ~className: string=?,
    ~data: array('dataItem),
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
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
      ~className=?,
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
        ~className?,
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
