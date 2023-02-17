// https://recharts.org/en-US/api/Treemap

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~data: array('dataItem),
    ~dataKey: string,
    ~aspectRatio: float=?,
    ~stroke: string,
    ~fill: string,
    ~className: string=?,
    ~height: int=?,
    ~isAnimationActive: bool,
    ~animationDuration: int,
    ~syncId: string=?,
    ~width: int=?,
    ~content: 'contentProps => React.element=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Treemap";
