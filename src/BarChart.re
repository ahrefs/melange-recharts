/* http://recharts.org/en-US/api/BarChart */
open Utils;

[@bs.module "recharts"]
external barChart : ReasonReact.reactClass = "BarChart";

[@bs.obj]
external makeProps :
  (
    ~data: array(Js.t({..})),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: Utils.margin=?,
    ~maxBarSize: int=?,
    ~onClick: 'onClick=?,
    ~onMouseEnter: 'onMouseEnter=?,
    ~onMouseLeave: 'onMouseLeave=?,
    ~onMouseMove: 'onMouseMove=?,
    ~reverseStackOrder: bool=?,
    ~stackOffset: [@bs.string] [
                    | `expand
                    | `none
                    | `wiggle
                    | `silhouette
                    | `sign
                  ]
                    =?,
    ~syncId: string=?,
    ~width: int=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~data,
      ~barCategoryGap=?,
      ~barGap=?,
      ~barSize=?,
      ~height=?,
      ~layout=?,
      ~margin=?,
      ~maxBarSize=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~reverseStackOrder=?,
      ~stackOffset=?,
      ~syncId=?,
      ~width=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=barChart,
    ~props=
      makeProps(
        ~data,
        ~barCategoryGap=?barCategoryGap |> PxOrPrc.encodeOpt,
        ~barGap=?barGap |> PxOrPrc.encodeOpt,
        ~barSize?,
        ~height?,
        ~layout?,
        ~margin?,
        ~maxBarSize?,
        ~onClick?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~reverseStackOrder?,
        ~stackOffset?,
        ~syncId?,
        ~width?,
        (),
      ),
    children,
  );
