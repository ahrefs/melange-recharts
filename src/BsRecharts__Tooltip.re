[@bs.module "recharts"] [@react.component]
external make:
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
    ~className: string=?,
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
    ~wrapperStyle: Js.t({..})=?
  ) =>
  React.element =
  "Tooltip";