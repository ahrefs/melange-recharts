// http://recharts.org/en-US/api/Label

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~data: array('dataItem)=?,
    ~dataKey: string=?,
    ~clockWise: bool=?,
    ~valueAccessor: 'valueAccessor=?,
    ~position: [@bs.string] [
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
    ~offset: int=?,
    ~content: React.element=?,
    ~formatter: 'formatter=?,
    ~id: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "LabelList";
