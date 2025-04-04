// http://recharts.org/en-US/api/Cell

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~background: 'background=?,
    ~className: string=?,
    ~fill: string=?,
    ~fillOpacity: float=?,
    ~stroke: string=?,
    ~strokeWidth: int=?
  ) =>
  React.element =
  "Cell";
