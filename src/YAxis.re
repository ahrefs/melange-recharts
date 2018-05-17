[@bs.module "recharts"] external yAxis : ReasonReact.reactClass = "YAxis";

[@bs.obj]
external makeProps :
  (
    ~_type: string=?,
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
      ~_type=?,
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
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=yAxis,
    ~props=
      makeProps(
        ~_type?,
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
        (),
      ),
    children,
  );
