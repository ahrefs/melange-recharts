// http://recharts.org/en-US/api/Label

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~viewBox: string=?,
    ~formatter: 'formatter=?,
    ~value: string=?,
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
    ~id: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Label";
