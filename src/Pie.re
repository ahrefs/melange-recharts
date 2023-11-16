// http://recharts.org/en-US/api/Pie
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~activeIndex: array(Js.t({..}))=?,
    ~activeShape: 'activeShape=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@mel.string] [
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
    ~dataKey: 'dataKey,
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
    ~onClick: (
                Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
                int,
                ReactEvent.Mouse.t
              ) =>
              unit
                =?,
    ~onMouseDown: (Js.t({.. "payload": 'dataItem}), ReactEvent.Mouse.t) =>
                  unit
                    =?,
    ~onMouseEnter: (
                     Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
                     int,
                     ReactEvent.Mouse.t
                   ) =>
                   unit
                     =?,
    ~onMouseLeave: (
                     Js.Nullable.t(Js.t({.. "payload": 'dataItem})),
                     int,
                     ReactEvent.Mouse.t
                   ) =>
                   unit
                     =?,
    ~onMouseMove: (Js.t({.. "payload": 'dataItem}), ReactEvent.Mouse.t) =>
                  unit
                    =?,
    ~onMouseOut: (Js.t({.. "payload": 'dataItem}), ReactEvent.Mouse.t) => unit
                   =?,
    ~onMouseOver: (Js.t({.. "payload": 'dataItem}), ReactEvent.Mouse.t) =>
                  unit
                    =?,
    ~onMouseUp: (Js.t({.. "payload": 'dataItem}), ReactEvent.Mouse.t) => unit
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
