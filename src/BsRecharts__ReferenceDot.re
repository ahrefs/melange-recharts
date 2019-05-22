[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "ReferenceDot";

[@bs.obj]
external makeProps:
  (
    ~alwaysShow: bool=?,
    ~className: string=?,
    ~fill: string=?,
    ~isFront: bool=?,
    ~label: 'label=?,
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
      ~className=?,
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
        ~className?,
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
