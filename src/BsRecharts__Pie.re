// http://recharts.org/en-US/api/Pie
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~activeIndex: array(Js.t({..}))=?,
    ~activeShape: 'activeShape=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@bs.string] [
                        | `ease
                        | [@bs.as "ease-in"] `easeIn
                        | [@bs.as "ease-out"] `easeOut
                        | [@bs.as "ease-in-out"] `easeInOut
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
    ~legendType: [@bs.string] [
                   | `line
                   | `square
                   | `rect
                   | `circle
                   | `cross
                   | `diamond
                   | `square
                   | `star
                   | `triangle
                   | `wye
                 ]
                   =?,
    ~minAngle: int=?,
    ~nameKey: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~outerRadius: PxOrPrc.t=?,
    ~paddingAngle: int=?,
    ~startAngle: int=?,
    ~stroke: string=?
  ) =>
  React.element =
  "Pie";

let makeProps =
    (
      ~activeIndex=?,
      ~activeShape=?,
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~className=?,
      ~cx=?,
      ~cy=?,
      ~data,
      ~dataKey,
      ~endAngle=?,
      ~fill=?,
      ~id=?,
      ~innerRadius=?,
      ~isAnimationActive=?,
      ~label=?,
      ~labelLine=?,
      ~legendType=?,
      ~minAngle=?,
      ~nameKey=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~outerRadius=?,
      ~paddingAngle=?,
      ~startAngle=?,
      ~stroke=?,
      (),
    ) =>
  makeProps(
    ~activeIndex?,
    ~activeShape?,
    ~animationBegin?,
    ~animationDuration?,
    ~animationEasing?,
    ~className?,
    ~cx=?{
      cx->PxOrPrc.encodeOpt;
    },
    ~cy=?{
      cy->PxOrPrc.encodeOpt;
    },
    ~data,
    ~dataKey,
    ~endAngle?,
    ~fill?,
    ~id?,
    ~innerRadius=?{
      innerRadius->PxOrPrc.encodeOpt;
    },
    ~isAnimationActive?,
    ~label?,
    ~labelLine?,
    ~legendType?,
    ~minAngle?,
    ~nameKey?,
    ~onClick?,
    ~onMouseDown?,
    ~onMouseEnter?,
    ~onMouseLeave?,
    ~onMouseMove?,
    ~onMouseOut?,
    ~onMouseOver?,
    ~onMouseUp?,
    ~outerRadius=?{
      outerRadius->PxOrPrc.encodeOpt;
    },
    ~paddingAngle?,
    ~startAngle?,
    ~stroke?,
    (),
  );
