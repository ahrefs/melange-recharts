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
        ()
      ),
    children
  );
