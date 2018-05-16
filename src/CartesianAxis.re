[@bs.module "recharts"]
external cartesianAxis : ReasonReact.reactClass = "CartesianAxis";

[@bs.obj]
external makeProps :
  (
    ~x: int=?,
    ~y: int=?,
    ~width: int=?,
    ~height: int=?,
    ~orientation: string=?,
    ~viewBox: 'a=?,
    ~label: string=?,
    ~tick: 'b=?,
    ~stroke: string=?,
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
      ~orientation=?,
      ~viewBox=?,
      ~label=?,
      ~tick=?,
      ~stroke=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cartesianAxis,
    ~props=
      makeProps(
        ~x?,
        ~y?,
        ~width?,
        ~height?,
        ~orientation?,
        ~viewBox?,
        ~label?,
        ~tick?,
        ~stroke?,
        (),
      ),
    children,
  );