/* http://recharts.org/en-US/api/CartesianGrid */
[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "CartesianGrid";

[@bs.obj]
external makeProps:
  (
    ~height: int=?,
    ~horizontal: bool=?,
    ~horizontalPoints: array('horizontalPoints)=?,
    ~stroke: string=?,
    ~strokeDasharray: string=?,
    ~strokeWidth: int=?,
    ~vertical: bool=?,
    ~verticalPoints: array('verticalPoints)=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~height=?,
      ~horizontal=?,
      ~horizontalPoints=?,
      ~stroke=?,
      ~strokeDasharray=?,
      ~strokeWidth=?,
      ~vertical=?,
      ~verticalPoints=?,
      ~width=?,
      ~x=?,
      ~y=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~height?,
        ~horizontal?,
        ~horizontalPoints?,
        ~stroke?,
        ~strokeDasharray?,
        ~strokeWidth?,
        ~vertical?,
        ~verticalPoints?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
    children,
  );
