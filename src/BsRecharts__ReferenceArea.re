// http://recharts.org/en-US/api/ReferenceArea

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~alwaysShow: bool=?,
    ~className: string=?,
    ~fill: string=?,
    ~isFront: bool=?,
    ~label: 'label=?,
    ~fillOpacity: float=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~r: int=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    ~x1: string=?,
    ~x2: string=?,
    ~xAxis: Js.t({..})=?,
    ~xAxisId: string=?,
    ~y1: string=?,
    ~y2: string=?,
    ~yAxis: Js.t({..})=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "ReferenceArea";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~alwaysShow=?,
        ~className=?,
        ~fill=?,
        ~isFront=?,
        ~label=?,
        ~fillOpacity=?,
        ~onClick=?,
        ~onMouseDown=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onMouseMove=?,
        ~onMouseOut=?,
        ~onMouseOver=?,
        ~onMouseUp=?,
        ~r=?,
        ~stroke=?,
        ~strokeDasharray=?,
        ~x1=?,
        ~x2=?,
        ~xAxis=?,
        ~xAxisId=?,
        ~y1=?,
        ~y2=?,
        ~yAxis=?,
        ~yAxisId=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~alwaysShow?,
        ~className?,
        ~fill?,
        ~isFront?,
        ~label?,
        ~fillOpacity?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~r?,
        ~stroke?,
        ~strokeDasharray?,
        ~x1?,
        ~x2?,
        ~xAxis?,
        ~xAxisId?,
        ~y1?,
        ~y2?,
        ~yAxis?,
        ~yAxisId?,
        (),
      ),
      children,
    );
};
