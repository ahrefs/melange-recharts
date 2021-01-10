// http://recharts.org/en-US/api/Tooltip
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~allowEscapeViewBox: Js.t({..})=?,
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
    ~content: 'content=?,
    ~position: Js.t({..})=?,
    ~cursor: TooltipCursor.t=?,
    ~formatter: 'formatter=?,
    ~isAnimationActive: bool=?,
    ~itemSorter: 'itemSorter=?,
    ~itemStyle: Js.t({..})=?,
    ~label: string=?,
    ~labelFormatter: 'labelFormatter=?,
    ~labelStyle: Js.t({..})=?,
    ~offset: int=?,
    ~payload: array(Js.t({..}))=?,
    ~separator: string=?,
    ~viewBox: Js.t({..})=?,
    ~wrapperStyle: Js.t({..})=?
  ) =>
  React.element =
  "Tooltip";

let makeProps = (~cursor=?) =>
  makeProps(~cursor=?cursor->TooltipCursor.encodeOpt);

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~active=?,
        ~allowEscapeViewBox=?,
        ~animationBegin=?,
        ~animationDuration=?,
        ~animationEasing=?,
        ~className=?,
        ~content=?,
        ~position=?,
        ~cursor=?,
        ~formatter=?,
        ~isAnimationActive=?,
        ~itemSorter=?,
        ~itemStyle=?,
        ~label=?,
        ~labelFormatter=?,
        ~labelStyle=?,
        ~offset=?,
        ~payload=?,
        ~separator=?,
        ~viewBox=?,
        ~wrapperStyle=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~active?,
        ~allowEscapeViewBox?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~className?,
        ~content?,
        ~position?,
        ~cursor?,
        ~formatter?,
        ~isAnimationActive?,
        ~itemSorter?,
        ~itemStyle?,
        ~label?,
        ~labelFormatter?,
        ~labelStyle?,
        ~offset?,
        ~payload?,
        ~separator?,
        ~viewBox?,
        ~wrapperStyle?,
        (),
      ),
      children,
    );
};
