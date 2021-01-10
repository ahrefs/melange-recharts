// http://recharts.org/en-US/api/BarChart
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~data: array('dataItem),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~className: string=?,
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~maxBarSize: int=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~reverseStackOrder: bool=?,
    ~stackOffset: [@bs.string] [
                    | `expand
                    | `none
                    | `wiggle
                    | `silhouette
                    | `sign
                  ]
                    =?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "BarChart";

let makeProps = (~barCategoryGap=?, ~barGap=?) =>
  makeProps(
    ~barCategoryGap=?barCategoryGap->PxOrPrc.encodeOpt,
    ~barGap=?barGap->PxOrPrc.encodeOpt,
  );

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~data,
        ~barCategoryGap=?,
        ~barGap=?,
        ~barSize=?,
        ~className=?,
        ~height=?,
        ~layout=?,
        ~margin=?,
        ~maxBarSize=?,
        ~onClick=?,
        ~onMouseUp=?,
        ~onMouseDown=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onMouseMove=?,
        ~reverseStackOrder=?,
        ~stackOffset=?,
        ~syncId=?,
        ~width=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~data,
        ~barCategoryGap?,
        ~barGap?,
        ~barSize?,
        ~className?,
        ~height?,
        ~layout?,
        ~margin?,
        ~maxBarSize?,
        ~onClick?,
        ~onMouseUp?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~reverseStackOrder?,
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
