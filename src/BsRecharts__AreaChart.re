// http://recharts.org/en-US/api/AreaChart

open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~baseValue: 'baseValue=?,
    ~className: string=?,
    ~data: array('dataItem),
    ~height: int=?,
    ~layout: [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~stackOffset: [ | `expand | `none | `wiggle | `silhouette]=?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "AreaChart";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~baseValue=?,
        ~className=?,
        ~data,
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
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~baseValue?,
        ~className?,
        ~data,
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
        ~children={
          React.array(children);
        },
        (),
      ),
      children,
    );
};
