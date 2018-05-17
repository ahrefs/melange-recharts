[@bs.module "recharts"] external xAxis : ReasonReact.reactClass = "XAxis";

[@bs.obj]
external makeProps :
  (
    ~type_: string=?, /* this doesn't work :( */
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
      ~hide=?,
      ~interval=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=xAxis,
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
        ~hide?,
        ~interval?,
        (),
      ),
    children,
  );
