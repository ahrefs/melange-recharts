// http://recharts.org/en-US/api/CartesianAxis
open BsRecharts__Utils;

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~axisLine: 'axisLine=?,
    ~className: string=?,
    ~height: int=?,
    ~interval: AxisInterval.t=?,
    ~label: 'label=?,
    ~minTickGap: int=?,
    ~mirror: bool=?,
    ~orientation: [@bs.string] [ | `top | `bottom | `left | `right]=?,
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

let makeProps =
    (
      ~axisLine=?,
      ~className=?,
      ~height=?,
      ~interval=?,
      ~label=?,
      ~minTickGap=?,
      ~mirror=?,
      ~orientation=?,
      ~tick=?,
      ~tickLine=?,
      ~tickMargin,
      ~tickSize=?,
      ~viewBox=?,
      ~width=?,
      ~x=?,
      ~y=?,
      (),
    ) =>
  makeProps(
    ~axisLine?,
    ~className?,
    ~height?,
    ~interval=?{
      interval->AxisInterval.encodeOpt;
    },
    ~label?,
    ~minTickGap?,
    ~mirror?,
    ~orientation?,
    ~tick?,
    ~tickLine?,
    ~tickMargin,
    ~tickSize?,
    ~viewBox?,
    ~width?,
    ~x?,
    ~y?,
    (),
  );

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~axisLine=?,
        ~className=?,
        ~height=?,
        ~interval=?,
        ~label=?,
        ~minTickGap=?,
        ~mirror=?,
        ~orientation=?,
        ~tick=?,
        ~tickLine=?,
        ~tickMargin,
        ~tickSize=?,
        ~viewBox=?,
        ~width=?,
        ~x=?,
        ~y=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~axisLine?,
        ~className?,
        ~height?,
        ~interval?,
        ~label?,
        ~minTickGap?,
        ~mirror?,
        ~orientation?,
        ~tick?,
        ~tickLine?,
        ~tickMargin,
        ~tickSize?,
        ~viewBox?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
      children,
    );
};
