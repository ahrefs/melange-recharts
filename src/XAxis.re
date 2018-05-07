[@bs.module "recharts"] external xAxis : ReasonReact.reactClass = "XAxis";

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
      children
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
        ()
      ),
    children
  );
