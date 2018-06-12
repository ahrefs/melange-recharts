/* http://recharts.org/en-US/api/Area */

[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "Area";

[@bs.obj]
external makeProps :
  (
    ~_type: [@bs.string] [
              | `basis
              | `basisClosed
              | `basisOpen
              | `linear
              | `linearClosed
              | `natural
              | `monotoneX
              | `monotoneY
              | `monotone
              | `step
              | `stepBefore
              | `stepAfter
            ]
              =?,
    ~activeDot: 'activeDot=?,
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
    ~baseLine: 'baseLine=?,
    ~connectNulls: bool=?,
    ~dataKey: string=?,
    ~dot: 'dot=?,
    ~fill: string=?,
    ~fillOpacity: float=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
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
    ~name: string=?,
    ~onClick: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOver: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~points: array(Js.t({..}))=?,
    ~stackId: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~_type=?,
      ~_type=?,
      ~activeDot=?,
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~baseLine=?,
      ~connectNulls=?,
      ~dataKey=?,
      ~dot=?,
      ~fill=?,
      ~fillOpacity=?,
      ~id=?,
      ~isAnimationActive=?,
      ~label=?,
      ~layout=?,
      ~legendType=?,
      ~name=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~points=?,
      ~stackId=?,
      ~stroke=?,
      ~strokeWidth=?,
      ~unit=?,
      ~xAxisId=?,
      ~yAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~_type?,
        ~activeDot?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~baseLine?,
        ~connectNulls?,
        ~dataKey?,
        ~dot?,
        ~fill?,
        ~fillOpacity?,
        ~id?,
        ~isAnimationActive?,
        ~label?,
        ~layout?,
        ~legendType?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~points?,
        ~stackId?,
        ~stroke?,
        ~strokeWidth?,
        ~unit?,
        ~xAxisId?,
        ~yAxisId?,
        (),
      ),
    children,
  );
