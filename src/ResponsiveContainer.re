[@bs.module "recharts"]
external responsiveContainer : ReasonReact.reactClass = "ResponsiveContainer";

[@bs.obj]
external makeProps :
  (
    ~width: int=?,
    ~height: int=?,
    ~aspect: float=?,
    ~minWidth: int=?,
    ~minHeight: int=?,
    ~debounce: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~width=?,
      ~height=?,
      ~aspect=?,
      ~minWidth=?,
      ~minHeight=?,
      ~debounce=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=responsiveContainer,
    ~props=
      makeProps(
        ~width?,
        ~height?,
        ~aspect?,
        ~minWidth?,
        ~minHeight?,
        ~debounce?,
        (),
      ),
    children,
  );