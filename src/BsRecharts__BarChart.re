/* http://recharts.org/en-US/api/BarChart */
open BsRecharts__Utils;

[@bs.module "recharts"]
external reactClass: ReasonReact.reactClass = "BarChart";

[@bs.obj]
external makeProps:
  (
    ~data: array('dataItem),
    ~barCategoryGap: PxOrPrc.t=?,
    ~barGap: PxOrPrc.t=?,
    ~barSize: int=?,
    ~className: string=?,
    ~height: int=?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~maxBarSize: int=?,
    ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
    ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
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
      ~className=?,
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
    ~reactClass,
    ~props=
      makeProps(
        ~data,
        ~barCategoryGap=?barCategoryGap |> PxOrPrc.encodeOpt,
        ~barGap=?barGap |> PxOrPrc.encodeOpt,
        ~barSize?,
        ~className?,
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
