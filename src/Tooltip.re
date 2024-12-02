// http://recharts.org/en-US/api/Tooltip
[@mel.module "recharts"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~allowEscapeViewBox: Js.t({..})=?,
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing:
      [@mel.string] [
        | `ease
        | [@mel.as "ease-in"] `easeIn
        | [@mel.as "ease-out"] `easeOut
        | [@mel.as "ease-in-out"] `easeInOut
        | `linear
      ]
        =?,
    ~className: string=?,
    ~content: 'content=?,
    ~position: Js.t({..})=?,
    ~cursor:
      [@mel.unwrap] [
        | `Bool(bool)
        | `Obj(
            Js.t({
              .
              "fill": option(string),
              "stroke": option(string),
              "strokeWidth": option(int),
            }),
          )
        | `Element(React.element)
      ]
        =?,
    ~filterNull: bool=?,
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
