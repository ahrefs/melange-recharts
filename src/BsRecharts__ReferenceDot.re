[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "ReferenceDot";

[@bs.obj]
external makeProps :
  (
    ~alwaysShow: bool=?,
    ~fill: string=?,
    ~isFront: bool=?,
    ~label: 'label=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~r: int=?,
    ~stroke: string=?,
    ~x: string=?,
    ~xAxis: Js.t({..})=?,
    ~xAxisId: string=?,
    ~y: string=?,
    ~yAxis: Js.t({..})=?,
    ~yAxisId: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~alwaysShow=?,
      ~fill=?,
      ~isFront=?,
      ~label=?,
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
      ~x=?,
      ~xAxis=?,
      ~xAxisId=?,
      ~y=?,
      ~yAxis=?,
      ~yAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~alwaysShow?,
        ~fill?,
        ~isFront?,
        ~label?,
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
        ~x?,
        ~xAxis?,
        ~xAxisId?,
        ~y?,
        ~yAxis?,
        ~yAxisId?,
        (),
      ),
    children,
  );
