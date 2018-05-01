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
        ()
      ),
    children
  );
