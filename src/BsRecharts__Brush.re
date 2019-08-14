// http://recharts.org/en-US/api/Brush
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~data: array('data)=?,
    ~dataKey: 'dataKey,
    ~endIndex: int=?,
    ~fill: string=?,
    ~gap: int=?,
    ~height: int=?,
    ~onChange: {
                 ..
                 "startIndex": int,
                 "endIndex": int,
               } =>
               unit
                 =?,
    ~padding: padding=?,
    ~startIndex: int=?,
    ~stroke: string=?,
    ~tickFormatter: 'tickFormatter=?,
    ~travellerWidth: int=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?
  ) =>
  React.element =
  "Brush";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~data=?,
        ~dataKey,
        ~endIndex=?,
        ~fill=?,
        ~gap=?,
        ~height=?,
        ~onChange=?,
        ~padding=?,
        ~startIndex=?,
        ~stroke=?,
        ~tickFormatter=?,
        ~travellerWidth=?,
        ~width=?,
        ~x=?,
        ~y=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~data?,
        ~dataKey,
        ~endIndex?,
        ~fill?,
        ~gap?,
        ~height?,
        ~onChange?,
        ~padding?,
        ~startIndex?,
        ~stroke?,
        ~tickFormatter?,
        ~travellerWidth?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
      children,
    );
};
