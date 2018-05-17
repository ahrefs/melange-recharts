[@bs.module "recharts"] external bar : ReasonReact.reactClass = "Bar";

[@bs.obj]
external makeProps :
  (
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
    ~background: 'background=?,
    ~barSize: int=?,
    ~data: array('data)=?,
    ~dataKey: string=?,
    ~fill: string=?,
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
    ~maxBarSize: int=?,
    ~minPointSize: int=?,
    ~name: string=?,
    ~onClick: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOver: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~shape: 'shape=?,
    ~stackId: string=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~background=?,
      ~barSize=?,
      ~data=?,
      ~dataKey=?,
      ~fill=?,
      ~id=?,
      ~isAnimationActive=?,
      ~label=?,
      ~layout=?,
      ~legendType=?,
      ~maxBarSize=?,
      ~minPointSize=?,
      ~name=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~shape=?,
      ~stackId=?,
      ~unit=?,
      ~xAxisId=?,
      ~yAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=bar,
    ~props=
      makeProps(
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~background?,
        ~barSize?,
        ~data?,
        ~dataKey?,
        ~fill?,
        ~id?,
        ~isAnimationActive?,
        ~label?,
        ~layout?,
        ~legendType?,
        ~maxBarSize?,
        ~minPointSize?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~shape?,
        ~stackId?,
        ~unit?,
        ~xAxisId?,
        ~yAxisId?,
        (),
      ),
    children,
  );
