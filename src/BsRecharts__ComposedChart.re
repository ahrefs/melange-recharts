// http://recharts.org/en-US/api/ComposedChart
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~data: array('dataItem),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~reverseStackOrder: bool=?,
    ~stackOffset: [@bs.string] [ | `expand | `none | `wiggle | `silhouette | `sign]=?,
    ~syncId: string=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "ComposedChart";

let makeProps =
    (
      ~className=?,
      ~data,
      ~barCategoryGap=?,
      ~barGap=?,
      ~barSize=?,
      ~height=?,
      ~layout=?,
      ~margin=?,
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
      ~children,
      (),
    ) =>
  makeProps(
    ~className?,
    ~data,
    ~barCategoryGap=?{
      barCategoryGap->PxOrPrc.encodeOpt;
    },
    ~barGap=?{
      barGap->PxOrPrc.encodeOpt;
    },
    ~barSize?,
    ~height?,
    ~layout?,
    ~margin?,
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
    ~children,
    (),
  );

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~data,
        ~barCategoryGap=?,
        ~barGap=?,
        ~barSize=?,
        ~height=?,
        ~layout=?,
        ~margin=?,
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
        ~className?,
        ~data,
        ~barCategoryGap?,
        ~barGap?,
        ~barSize?,
        ~height?,
        ~layout?,
        ~margin?,
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
