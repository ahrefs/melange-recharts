[@bs.module "recharts"] external legend : ReasonReact.reactClass = "Legend";

[@bs.obj]
external makeProps :
  (
    ~layout: string=?,
    ~width: int=?,
    ~height: int=?,
    ~align: string=?,
    ~verticalAlign: string=?,
    ~iconType: string=?,
    ~wrapperStyle: 'a=?,
    ~margin: 'b=?,
    ~content: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~layout=?,
      ~width=?,
      ~height=?,
      ~align=?,
      ~verticalAlign=?,
      ~iconType=?,
      ~wrapperStyle=?,
      ~margin=?,
      ~content=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=legend,
    ~props=
      makeProps(
        ~layout?,
        ~width?,
        ~height?,
        ~align?,
        ~verticalAlign?,
        ~iconType?,
        ~wrapperStyle?,
        ~margin?,
        ~content?,
        ()
      ),
    children
  );
