// http://recharts.org/en-US/api/PieChart

open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~height: int=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "PieChart";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

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
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~height?,
        ~margin?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~width?,
        ~children={
          React.array(children);
        },
        (),
      ),
      children,
    );
};
