/* http://recharts.org/en-US/api/ResponsiveContainer */
open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "ResponsiveContainer";

[@bs.obj]
external makeProps:
  (
    ~aspect: float=?,
    ~debounce: int=?,
    ~height: PxOrPrc.t=?,
    ~minHeight: int=?,
    ~minWidth: int=?,
    ~width: PxOrPrc.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~aspect=?,
      ~debounce=?,
      ~height=?,
      ~minHeight=?,
      ~minWidth=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~aspect?,
        ~debounce?,
        ~height=?height |> PxOrPrc.encodeOpt,
        ~minHeight?,
        ~minWidth?,
        ~width=?width |> PxOrPrc.encodeOpt,
        (),
      ),
    children,
  );
