// http://recharts.org/en-US/api/ResponsiveContainer

open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~aspect: float=?,
    ~className: string=?,
    ~debounce: int=?,
    ~height: PxOrPrc.t=?,
    ~minHeight: int=?,
    ~minWidth: int=?,
    ~width: PxOrPrc.t=?,
    ~children: React.element
  ) =>
  React.element =
  "ResponsiveContainer";

let makeProps = (~height=?, ~width=?) =>
  makeProps(
    ~height=?height->PxOrPrc.encodeOpt,
    ~width=?width->PxOrPrc.encodeOpt,
  );

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~debounce=?,
        ~height=?,
        ~minHeight=?,
        ~minWidth=?,
        ~width=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~debounce?,
        ~height?,
        ~minHeight?,
        ~minWidth?,
        ~width?,
        ~children={
          React.array(children);
        },
        (),
      ),
      children,
    );
};
