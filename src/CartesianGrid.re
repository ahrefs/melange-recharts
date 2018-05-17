/* http://recharts.org/en-US/api/CartesianGrid */
[@bs.module "recharts"]
external cartesianGrid : ReasonReact.reactClass = "CartesianGrid";

[@bs.obj]
external makeProps :
  (
    ~height: int=?,
    ~horizontal: bool=?,
    ~horizontalPoints: array('horizontalPoints)=?,
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
      ~vertical=?,
      ~verticalPoints=?,
      ~width=?,
      ~x=?,
      ~y=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cartesianGrid,
    ~props=
      makeProps(
        ~height?,
        ~horizontal?,
        ~horizontalPoints?,
        ~vertical?,
        ~verticalPoints?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
    children,
  );
