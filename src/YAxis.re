[@bs.module "recharts"] external yAxis : ReasonReact.reactClass = "YAxis";

[@bs.obj]
external makeProps :
  (
    ~type_: string=?,
    ~xAxisId: string=?,
    ~dataKey: string=?,
    ~orientation: string=?,
    ~height: int=?,
    ~domain: 'a=?,
    ~reversed: bool=?,
    ~label: 'b=?,
    ~tick: 'c=?,
    ~ticks: 'd=?,
    ~tickFormatter: 'e=?,
    ~tickLine: 'f=?,
    ~hide: bool=?,
    ~width: int=?,
    ~minTickGap: int=?,
    ~interval: 'interval=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~type_=?,
      ~xAxisId=?,
      ~dataKey=?,
      ~orientation=?,
      ~height=?,
      ~domain=?,
      ~reversed=?,
      ~label=?,
      ~tick=?,
      ~ticks=?,
      ~tickFormatter=?,
      ~tickLine=?,
      ~hide=?,
      ~width=?,
      ~minTickGap=?,
      ~interval=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=yAxis,
    ~props=
      makeProps(
        ~type_?,
        ~xAxisId?,
        ~dataKey?,
        ~orientation?,
        ~height?,
        ~domain?,
        ~reversed?,
        ~label?,
        ~tick?,
        ~ticks?,
        ~tickFormatter?,
        ~tickLine?,
        ~hide?,
        ~width?,
        ~minTickGap?,
        ~interval?,
        ()
      ),
    children
  );
