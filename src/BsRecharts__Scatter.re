/* http://recharts.org/en-US/api/Pie */
open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass : ReasonReact.reactClass = "Scatter";

[@bs.obj]
external makeProps :
  (
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
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    ~zAxisId: string=?,
    ~line: 'line=?,
    ~shape: 'shape=?,
    ~lineType: 'lineType=?,
    ~points: array('point)=?,
    ~isAnimationActive: bool=?,
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
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEventRe.Mouse.t) => unit=?,
    ~id: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~legendType=?,
      ~xAxisId=?,
      ~yAxisId=?,
      ~zAxisId=?,
      ~line=?,
      ~shape=?,
      ~lineType=?,
      ~points=?,
      ~isAnimationActive=?,
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseOut=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~onMouseMove=?,
      ~id=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~legendType?,
        ~xAxisId?,
        ~yAxisId?,
        ~zAxisId?,
        ~line?,
        ~shape?,
        ~lineType?,
        ~points?,
        ~isAnimationActive?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseOut?,
        ~onMouseUp?,
        ~onMouseDown?,
        ~onMouseMove?,
        ~id?,
        (),
      ),
    children,
  );