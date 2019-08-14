// http://recharts.org/en-US/api/CartesianGrid

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~height: int=?,
    ~horizontal: bool=?,
    ~horizontalPoints: array('horizontalPoints)=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    ~strokeWidth: int=?,
    ~vertical: bool=?,
    ~verticalPoints: array('verticalPoints)=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?
  ) =>
  React.element =
  "CartesianGrid";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~height=?,
        ~horizontal=?,
        ~horizontalPoints=?,
        ~stroke=?,
        ~strokeDasharray=?,
        ~strokeWidth=?,
        ~vertical=?,
        ~verticalPoints=?,
        ~width=?,
        ~x=?,
        ~y=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~height?,
        ~horizontal?,
        ~horizontalPoints?,
        ~stroke?,
        ~strokeDasharray?,
        ~strokeWidth?,
        ~vertical?,
        ~verticalPoints?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
      children,
    );
};
