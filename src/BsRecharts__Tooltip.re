[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "Tooltip";

[@bs.obj]
external makeProps:
  (
    ~active: bool=?,
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
    ~content: 'content=?,
    ~coordinate: Js.t({..})=?,
    ~cursor: 'cursor=?,
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
    ~wrapperStyle: Js.t({..})=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~active=?,
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~content=?,
      ~coordinate=?,
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
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~active?,
        ~animationBegin?,
        ~animationDuration?,
        ~animationEasing?,
        ~content?,
        ~coordinate?,
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
