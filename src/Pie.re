// http://recharts.org/en-US/api/Pie
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~activeIndex: array(Js.t({..}))=?,
    ~activeShape: 'activeShape=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing:
      [@mel.string] [
        | `ease
        | [@mel.as "ease-in"] `easeIn
        | [@mel.as "ease-out"] `easeOut
        | [@mel.as "ease-in-out"] `easeInOut
        | `linear
      ]
        =?,
    ~className: string=?,
    ~cx: PxOrPrc.t=?,
    ~cy: PxOrPrc.t=?,
    ~data: array('dataItem),
    ~dataKey:
      [@mel.unwrap] [
        | `Str(string)
        | `Int(int)
        | `Fn('dataObj => 'data)
      ]
        =?,
    ~endAngle: int=?,
    ~fill: string=?,
    ~id: string=?,
    ~innerRadius: PxOrPrc.t=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~labelLine: 'labelLine=?,
    ~legendType: legendType=?,
    ~minAngle: int=?,
    ~nameKey: string=?,
    // Pulled from:
    // https://github.com/recharts/recharts/blob/7fb227dae542c3d3093506e6d80a2c2c366f9a26/src/polar/Pie.tsx#L107-L109
    ~onClick:
      (Js.Nullable.t({.. "payload": 'dataItem}), int, React.Event.Mouse.t) =>
      unit
        =?,
    ~onMouseEnter:
      (Js.Nullable.t({.. "payload": 'dataItem}), int, React.Event.Mouse.t) =>
      unit
        =?,
    ~onMouseLeave:
      (Js.Nullable.t({.. "payload": 'dataItem}), int, React.Event.Mouse.t) =>
      unit
        =?,
    ~onMouseDown:
      (
        Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
        React.Event.Mouse.t
      ) =>
      unit
        =?,
    ~onMouseMove:
      (
        Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
        React.Event.Mouse.t
      ) =>
      unit
        =?,
    ~onMouseOut:
      (
        Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
        React.Event.Mouse.t
      ) =>
      unit
        =?,
    ~onMouseOver:
      (
        Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
        React.Event.Mouse.t
      ) =>
      unit
        =?,
    ~onMouseUp:
      (
        Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
        React.Event.Mouse.t
      ) =>
      unit
        =?,
    ~outerRadius: PxOrPrc.t=?,
    ~paddingAngle: int=?,
    ~startAngle: int=?,
    ~stroke: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Pie";

let makeProps = (~cx=?, ~cy=?, ~innerRadius=?, ~outerRadius=?) =>
  makeProps(
    ~cx=?cx->PxOrPrc.encodeOpt,
    ~cy=?cy->PxOrPrc.encodeOpt,
    ~innerRadius=?innerRadius->PxOrPrc.encodeOpt,
    ~outerRadius=?outerRadius->PxOrPrc.encodeOpt,
  );
