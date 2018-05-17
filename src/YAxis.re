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
    ~axisLine: 'c=?,
    ~dataKey: string=?,
    ~domain: array('a)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: 'b=?,
    ~label: StrOrNode.t=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: string=?,
    ~onClick: 'h=?,
    ~onMouseDown: 'j=?,
    ~onMouseEnter: 'o=?,
    ~onMouseLeave: 'p=?,
    ~onMouseMove: 'l=?,
    ~onMouseOut: 'n=?,
    ~onMouseOver: 'm=?,
    ~onMouseUp: 'k=?,
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
    ~tick: 'd=?,
    ~tickFormatter: 'e=?,
    ~tickLine: 'f=?,
    ~tickMargin: int=?,
    ~ticks: array('g)=?,
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
