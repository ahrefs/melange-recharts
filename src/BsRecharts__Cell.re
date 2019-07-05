// http://recharts.org/en-US/api/Cell

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~className: string=?,
    ~fill: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?
  ) =>
  React.element =
  "Cell";
