[@bs.module "recharts"]
external cartesianGrid : ReasonReact.reactClass = "CartesianGrid";

[@bs.obj]
external makeProps :
  (
    ~x: int=?,
    ~y: int=?,
    ~width: int=?,
    ~height: int=?,
    ~horizontal: bool=?,
    ~vertical: bool=?,
    ~horizontalPoints: array('a)=?,
    ~verticalPoints: array('b)=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~x=?,
      ~y=?,
      ~width=?,
      ~height=?,
      ~horizontal=?,
      ~vertical=?,
      ~horizontalPoints=?,
      ~verticalPoints=?,
      ~stroke=?,
      ~strokeDasharray=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cartesianGrid,
    ~props=
      makeProps(
        ~x?,
        ~y?,
        ~width?,
        ~height?,
        ~horizontal?,
        ~vertical?,
        ~horizontalPoints?,
        ~verticalPoints?,
        ~stroke?,
        ~strokeDasharray?,
        (),
      ),
    children,
  );