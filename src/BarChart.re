/* http://recharts.org/en-US/api/BarChart */
open Utils;

[@bs.module "recharts"]
external barChart : ReasonReact.reactClass = "BarChart";

[@bs.obj]
external makeProps :
  (
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~syncId: string=?,
    ~width: int=?,
    ~height: int=?,
    ~data: array(Js.t({..})),
    ~margin: Utils.margin=?,
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~maxBarSize: int=?,
    ~stackOffset: [@bs.string] [
                    | `expand
                    | `none
                    | `wiggle
                    | `silhouette
                    | `sign
                  ]
                    =?,
    ~reverseStackOrder: bool=?,
    /* ~onClick:  */
    /* ~onMouseEnter:  */
    /* ~onMouseMove:  */
    /* ~onMouseLeave:  */
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~data,
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
        ~data,
        ~width?,
        ~height?,
        ~barGap?,
        ~barCategoryGap=?barCategoryGap |> PxOrPrc.encodeOpt,
        ~margin?,
        ~maxBarSize?,
        (),
      ),
    children,
  );
