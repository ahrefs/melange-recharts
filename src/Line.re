[@bs.module "recharts"] external line : ReasonReact.reactClass = "Line";

[@bs.obj]
external makeProps :
  (
    ~_type: string=?,
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
      ~_type=?,
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
        ~_type?,
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
