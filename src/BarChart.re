[@bs.module "recharts"]
external barChart : ReasonReact.reactClass = "BarChart";

[@bs.obj]
external makeProps :
  (
    ~data: array('a)=?,
    ~width: int=?,
    ~height: int=?,
    ~barGap: int=?,
    ~barCategoryGap: float=?,
    ~margin: 'b=?,
    ~maxBarSize: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~data=?,
      ~width=?,
      ~height=?,
      ~barGap=?,
      ~barCategoryGap=?,
      ~margin=?,
      ~maxBarSize=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=barChart,
    ~props=
      makeProps(
        ~data?,
        ~width?,
        ~height?,
        ~barGap?,
        ~barCategoryGap?,
        ~margin?,
        ~maxBarSize?,
        (),
      ),
    children,
  );