// http://recharts.org/en-US/api/ZAxis
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
    ~dataKey: 'dataKey=?,
    ~domain: array('domain)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: AxisInterval.t=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: string=?,
    ~range: array(int)=?,
    ~onClick: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown:
      (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseEnter:
      (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (. Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove:
      (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOut:
      (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver:
      (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseUp: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~orientation:
      [
        | `left
        | `right
      ]
        =?,
    ~padding: paddingVertical=?,
    ~reversed: bool=?,
    ~scale: scale=?,
    ~stroke: string=?,
    ~style: ReactDOM.Style.t=?,
    ~tick: 'tick=?,
    ~tickCount: int=?,
    ~tickFormatter: 'tickFormatter=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~ticks: array('ticks)=?,
    ~tickSize: float=?,
    ~transform: string=?,
    ~unit: string=?,
    ~width: int=?,
    ~yAxisId: string=?
  ) =>
  React.element =
  "ZAxis";

let makeProps =
    (
      ~interval=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
    ) =>
  makeProps(
    ~interval=?interval |> AxisInterval.encodeOpt,
    ~onClick=?
      onClick
      |> Option.map(onClick => (. payload, event) => onClick(payload, event)),
    ~onMouseDown=?
      onMouseDown
      |> Option.map(onMouseDown =>
           (. payload, event) => onMouseDown(payload, event)
         ),
    ~onMouseEnter=?
      onMouseEnter
      |> Option.map(onMouseEnter =>
           (. payload, event) => onMouseEnter(payload, event)
         ),
    ~onMouseLeave=?
      onMouseLeave
      |> Option.map(onMouseLeave =>
           (. payload, event) => onMouseLeave(payload, event)
         ),
    ~onMouseMove=?
      onMouseMove
      |> Option.map(onMouseMove =>
           (. payload, event) => onMouseMove(payload, event)
         ),
    ~onMouseOut=?
      onMouseOut
      |> Option.map(onMouseOut =>
           (. payload, event) => onMouseOut(payload, event)
         ),
    ~onMouseOver=?
      onMouseOver
      |> Option.map(onMouseOver =>
           (. payload, event) => onMouseOver(payload, event)
         ),
    ~onMouseUp=?
      onMouseUp
      |> Option.map(onMouseUp =>
           (. payload, event) => onMouseUp(payload, event)
         ),
  );
