// http://recharts.org/en-US/api/XAxis
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~_type: axisType=?,
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
    ~onClick: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~orientation: [ | `bottom | `top]=?,
    ~padding: paddingHorizontal=?,
    ~reversed: bool=?,
    ~scale: scale=?,
    ~tick: 'tick=?,
    ~tickCount: int=?,
    ~tickFormatter: 'tickFormatter=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~ticks: array('ticks)=?,
    ~tickSize: int=?,
    ~unit: string=?,
    ~width: int=?,
    ~xAxisId: string=?
  ) =>
  React.element =
  "XAxis";

let makeProps = (~interval=?) => makeProps(~interval=?interval->AxisInterval.encodeOpt);
