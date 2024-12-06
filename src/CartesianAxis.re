// http://recharts.org/en-US/api/CartesianAxis
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~axisLine: 'axisLine=?,
    ~className: string=?,
    ~height: int=?,
    ~interval: AxisInterval.t=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~orientation: [ | `top | `bottom | `left | `right]=?,
    ~tick: 'tick=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int,
    ~tickSize: int=?,
    ~viewBox: viewBox=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?
  ) =>
  React.element =
  "CartesianAxis";

let makeProps = (~interval=?) =>
  makeProps(~interval=?interval->AxisInterval.encodeOpt);
