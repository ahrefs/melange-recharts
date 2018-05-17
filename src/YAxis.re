/* http://recharts.org/en-US/api/YAxis */
open Utils;

[@bs.module "recharts"] external yAxis : ReasonReact.reactClass = "YAxis";

[@bs.obj]
external makeProps :
  (
    ~_type: [@bs.string] [ | `number | `category]=?,
    ~allowDataOverflow: bool=?,
    ~allowDecimals: bool=?,
    ~allowDuplicatedCategory: bool=?,
    ~axisLine: 'axisLine=?,
    ~dataKey: string=?,
    ~domain: array('domain)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: 'interval=?,
    ~label: StrOrNode.t=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: string=?,
    ~onClick: 'onClick=?,
    ~onMouseDown: 'onMouseDown=?,
    ~onMouseEnter: 'onMouseEnter=?,
    ~onMouseLeave: 'onMouseLeave=?,
    ~onMouseMove: 'onMouseMove=?,
    ~onMouseOut: 'onMouseOut=?,
    ~onMouseOver: 'onMouseOver=?,
    ~onMouseUp: 'onMouseUp=?,
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
    ~yAxisId: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~_type=?,
      ~allowDataOverflow=?,
      ~allowDecimals=?,
      ~allowDuplicatedCategory=?,
      ~axisLine=?,
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
  ReasonReact.wrapJsForReason(
    ~reactClass=yAxis,
    ~props=
      makeProps(
        ~_type?,
        ~allowDataOverflow?,
        ~allowDecimals?,
        ~allowDuplicatedCategory?,
        ~axisLine?,
        ~dataKey?,
        ~domain?,
        ~height?,
        ~hide?,
        ~interval?,
        ~label=?label |> StrOrNode.encodeOpt,
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
