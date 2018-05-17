/* http://recharts.org/en-US/api/ResponsiveContainer */
open Utils;

[@bs.module "recharts"]
external responsiveContainer : ReasonReact.reactClass = "ResponsiveContainer";

[@bs.obj]
external makeProps :
  (
    ~aspect: float=?,
    ~width: PxOrPrc.t=?,
    ~height: PxOrPrc.t=?,
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
        ~width=?width |> PxOrPrc.encodeOpt,
        ~height=?height |> PxOrPrc.encodeOpt,
        ~aspect?,
        ~minWidth?,
        ~minHeight?,
        ~debounce?,
        (),
      ),
    children,
  );
