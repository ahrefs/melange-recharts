// http://recharts.org/en-US/api/LabelList

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~clockwise: string=?,
    ~content: 'content=?,
    ~dataKey: string=?,
    ~fill: string=?,
    ~formatter: 'formatter=?,
    ~id: string=?,
    ~labelFormatter: 'labelFormatter=?,
    ~valueAccessor: 'valueAccessor=?,
    ~offset: int=?,
    ~position: [
                 | `top
                 | `left
                 | `right
                 | `bottom
                 | `inside
                 | `outside
                 | `insideLeft
                 | `insideRight
                 | `insideTop
                 | `insideBottom
                 | `insideTopLeft
                 | `insideBottomLeft
                 | `insideTopRight
                 | `insideBottomRight
                 | `insideStart
                 | `insideEnd
                 | [@bs.as "end"] `end_
                 | `center
               ]
                 =?,
    ~stroke: string=?,
    ~strokeWidth: int=?
  ) =>
  React.element =
  "LabelList";
