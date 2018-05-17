[@bs.module "recharts"] external xAxis : ReasonReact.reactClass = "XAxis";

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
    ~hide: bool=?,
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
      ~hide=?,
      ~interval=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=xAxis,
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
        ~hide?,
        ~interval?,
        (),
      ),
    children,
  );
