/* http://recharts.org/en-US/api/CartesianAxis */
open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass : ReasonReact.reactClass = "CartesianAxis";

[@bs.obj]
external makeProps :
  (
    ~axisLine: 'axisLine=?,
    ~height: int=?,
    ~interval: AxisInterval.t=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~orientation: [@bs.string] [ | `top | `bottom | `left | `right]=?,
    ~tick: 'tick=?,
    ~tickLine: 'tickLine=?,
    ~tickMargin: int=?,
    ~tickSize: int=?,
    ~viewBox: viewBox=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~axisLine=?,
      ~height=?,
      ~interval=?,
      ~label=?,
      ~minTickGap=?,
      ~mirror=?,
      ~orientation=?,
      ~tick=?,
      ~tickLine=?,
      ~tickMargin=?,
      ~tickSize=?,
      ~viewBox=?,
      ~width=?,
      ~x=?,
      ~y=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~axisLine?,
        ~height?,
        ~interval=?interval |> AxisInterval.encodeOpt,
        ~label?,
        ~minTickGap?,
        ~mirror?,
        ~orientation?,
        ~tick?,
        ~tickLine?,
        ~tickMargin?,
        ~tickSize?,
        ~viewBox?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
    children,
  );
