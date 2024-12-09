// http://recharts.org/en-US/api/ZAxis
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~_type: axisType=?,
    ~allowDataOverflow: bool=?,
    ~allowDecimals: bool=?,
    ~allowDuplicatedCategory: bool=?,
    ~axisLine: [@mel.unwrap] [ | `Bool(bool) | `Obj(Js.t({..}))]=?,
    ~className: string=?,
    ~dataKey: [@mel.unwrap] [
                | `Str(string)
                | `Int(int)
                | `Fn('dataObj => 'tick)
              ]
                =?,
    ~domain: array('domain)=?,
    ~height: int=?,
    ~hide: bool=?,
    ~interval: AxisInterval.t=?,
    ~label: [@mel.unwrap] [
              | `Str(string)
              | `Int(int)
              | `Float(float)
              | `Element(React.element)
              | `Obj(Js.t({..}))
            ]
              =?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~name: [@mel.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]=?,
    ~onClick: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseDown: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit
                    =?,
    ~onMouseEnter: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit
                     =?,
    ~onMouseLeave: (. Js.t({..}), React.Event.Mouse.t) => unit=?,
    ~onMouseMove: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit
                    =?,
    ~onMouseOut: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~onMouseOver: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit
                    =?,
    ~onMouseUp: (. Js.Nullable.t(Js.t({..})), React.Event.Mouse.t) => unit=?,
    ~orientation: [ | `left | `right]=?,
    ~padding: paddingVertical=?,
    ~range: array(int)=?,
    ~reversed: bool=?,
    ~scale: scale=?,
    ~stroke: string=?,
    ~style: ReactDOM.Style.t=?,
    ~tick: [@mel.unwrap] [
             | `Obj(Js.t({..}))
             | `Element(React.element)
             | `Bool(bool)
             | `Fn('tickProps => React.element)
           ]
             =?,
    ~tickCount: int=?,
    ~tickFormatter: (. 'tick, int) => string=?,
    ~tickLine: [@mel.unwrap] [ | `Bool(bool) | `Obj(Js.t({..}))]=?,
    ~tickMargin: int=?,
    ~ticks: array('ticks)=?,
    ~tickSize: [@mel.unwrap] [ | `Float(float) | `Int(int)]=?,
    ~transform: string=?,
    ~unit: string=?,
    ~width: int=?,
    ~zAxisId: string=?
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
      ~tickFormatter=?,
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
    ~tickFormatter=?
      tickFormatter
      |> Option.map(tickFormatter =>
           (. tick, index) => tickFormatter(tick, index)
         ),
  );
