/* http://recharts.org/en-US/api/Scatter */

[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "Scatter";

[@bs.obj]
external makeProps:
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
    ~data: array(Js.t({..})),
    ~dataKey: _ => string,
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
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
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
      ~data,
      ~dataKey,
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
        ~data,
        ~dataKey,
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
