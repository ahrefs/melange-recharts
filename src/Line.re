[@bs.module "recharts"] external line : ReasonReact.reactClass = "Line";

[@bs.obj]
external makeProps :
  (
    ~type_: string=?, /* this doesn't work :( */
    ~dataKey: 'a=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    ~name: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?,
    ~dot: bool=?,
    ~label: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~type_=?,
      ~dataKey=?,
      ~xAxisId=?,
      ~yAxisId=?,
      ~name=?,
      ~stroke=?,
      ~strokeWidth=?,
      ~dot=?,
      ~label=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=line,
    ~props=
      makeProps(
        ~type_?,
        ~dataKey?,
        ~xAxisId?,
        ~yAxisId?,
        ~name?,
        ~stroke?,
        ~strokeWidth?,
        ~dot?,
        ~label?,
        (),
      ),
    children,
  );