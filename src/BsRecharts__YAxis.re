// http://recharts.org/en-US/api/YAxis
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~_type: [@bs.string] [ | `number | `category]=?,
    ~allowDataOverflow: bool=?,
    ~allowDecimals: bool=?,
    ~allowDuplicatedCategory: bool=?,
    ~axisLine: 'axisLine=?,
    ~className: string=?,
    ~dataKey: string=?,
    ~domain: array('domain)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: AxisInterval.t=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: string=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~orientation: [@bs.string] [ | `left | `right]=?,
    ~padding: paddingVertical=?,
    ~reversed: bool=?,
    ~scale: [@bs.string] [
              | `auto
              | `linear
              | `pow
              | `sqrt
              | `log
              | `identity
              | `time
              | `band
              | `point
              | `ordinal
              | `quantile
              | `quantize
              | `utcTime
              | `sequential
              | `threshold
            ]
              =?,
    ~tick: 'tick=?,
    ~tickFormatter: 'tickFormatter=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~ticks: array('ticks)=?,
    ~tickSize: int=?,
    ~unit: string=?,
    ~width: int=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "YAxis";

let makeProps = (~interval=?) =>
  makeProps(~interval=?interval->AxisInterval.encodeOpt);

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~_type=?,
        ~allowDataOverflow=?,
        ~allowDecimals=?,
        ~allowDuplicatedCategory=?,
        ~axisLine=?,
        ~className=?,
        ~dataKey=?,
        ~domain=?,
        ~height=?,
        ~hide=?,
        ~interval=?,
        ~label=?,
        ~minTickGap=?,
        ~mirror=?,
        ~name=?,
        ~onClick=?,
        ~onMouseDown=?,
        ~onMouseEnter=?,
        ~onMouseLeave=?,
        ~onMouseMove=?,
        ~onMouseOut=?,
        ~onMouseOver=?,
        ~onMouseUp=?,
        ~orientation=?,
        ~padding=?,
        ~reversed=?,
        ~scale=?,
        ~tick=?,
        ~tickFormatter=?,
        ~tickLine=?,
        ~tickMargin=?,
        ~ticks=?,
        ~tickSize=?,
        ~unit=?,
        ~width=?,
        ~yAxisId=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~_type?,
        ~allowDataOverflow?,
        ~allowDecimals?,
        ~allowDuplicatedCategory?,
        ~axisLine?,
        ~className?,
        ~dataKey?,
        ~domain?,
        ~height?,
        ~hide?,
        ~interval?,
        ~label?,
        ~minTickGap?,
        ~mirror?,
        ~name?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~orientation?,
        ~padding?,
        ~reversed?,
        ~scale?,
        ~tick?,
        ~tickFormatter?,
        ~tickLine?,
        ~tickMargin?,
        ~ticks?,
        ~tickSize?,
        ~unit?,
        ~width?,
        ~yAxisId?,
        (),
      ),
      children,
    );
};
