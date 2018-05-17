[@bs.module "recharts"] external line : ReasonReact.reactClass = "Line";

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
    ~connectNulls: bool=?,
    ~dataKey: string=?,
    ~dot: 'dot=?,
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
    ~stroke: string=?,
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
      ~connectNulls=?,
      ~dataKey=?,
      ~dot=?,
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
      ~stroke=?,
      ~unit=?,
      ~xAxisId=?,
      ~yAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=line,
    ~props=
      makeProps(
        ~_type?,
        ~activeDot?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~connectNulls?,
        ~dataKey?,
        ~dot?,
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
        ~stroke?,
        ~unit?,
        ~xAxisId?,
        ~yAxisId?,
        (),
      ),
    children,
  );
