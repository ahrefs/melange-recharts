// http://recharts.org/en-US/api/Bar

[@bs.module "recharts"] [@react.component]
external make:
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
    ~className: string=?,
    ~data: array('data)=?,
    ~dataKey: 'dataKey,
    ~fill: string=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: [ | `horizontal | `vertical]=?,
    ~legendType: [
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
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~shape: 'shape=?,
    ~stackId: string=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Bar";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~animationBegin=?,
        ~animationDuration=?,
        ~animationEasing=?,
        ~background=?,
        ~barSize=?,
        ~className=?,
        ~data=?,
        ~dataKey,
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
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~background?,
        ~barSize?,
        ~className?,
        ~data?,
        ~dataKey,
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
};
