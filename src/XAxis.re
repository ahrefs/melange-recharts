/* http://recharts.org/en-US/api/XAxis */
open Utils;

[@bs.module "recharts"] external xAxis : ReasonReact.reactClass = "XAxis";

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
    ~orientation: [@bs.string] [ | `bottom | `top]=?,
    ~padding: paddingHorizontal=?,
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
    ~tickCount: int=?,
    ~tickFormatter: 'e=?,
    ~tickLine: 'f=?,
    ~tickMargin: int=?,
    ~ticks: array('g)=?,
    ~tickSize: int=?,
    ~unit: string=?,
    ~width: int=?,
    ~xAxisId: string=?,
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
      ~tickCount=?,
      ~tickFormatter=?,
      ~tickLine=?,
      ~tickMargin=?,
      ~ticks=?,
      ~tickSize=?,
      ~unit=?,
      ~width=?,
      ~xAxisId=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=xAxis,
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
        ~tickCount?,
        ~tickFormatter?,
        ~tickLine?,
        ~tickMargin?,
        ~ticks?,
        ~tickSize?,
        ~unit?,
        ~width?,
        ~xAxisId?,
        (),
      ),
    children,
  );
