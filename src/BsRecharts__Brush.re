/* http://recharts.org/en-US/api/Brush */
open BsRecharts__Utils

[@bs.module "recharts"] external reactClass : ReasonReact.reactClass = "Brush";

[@bs.obj]
external makeProps :
  (
    ~className: string=?,
    ~data: array('data)=?,
    ~dataKey: string=?,
    ~endIndex: int=?,
    ~fill: string=?,
    ~gap: int=?,
    ~height: int=?,
    ~onChange: ({..
      "startIndex": int,
      "endIndex": int
    } => unit)=?,
    ~padding: padding=?,
    ~startIndex: int=?,
    ~stroke: string=?,
    ~tickFormatter: 'tickFormatter=?,
    ~travellerWidth: int=?,
    ~width: int=?,
    ~x: int=?,
    ~y: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~data=?,
      ~dataKey=?,
      ~endIndex=?,
      ~fill=?,
      ~gap=?,
      ~height=?,
      ~onChange=?,
      ~padding=?,
      ~startIndex=?,
      ~stroke=?,
      ~tickFormatter=?,
      ~travellerWidth=?,
      ~width=?,
      ~x=?,
      ~y=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~className?,
        ~data?,
        ~dataKey?,
        ~endIndex?,
        ~fill?,
        ~gap?,
        ~height?,
        ~onChange?,
        ~padding?,
        ~startIndex?,
        ~stroke?,
        ~tickFormatter?,
        ~travellerWidth?,
        ~width?,
        ~x?,
        ~y?,
        (),
      ),
    children,
  );