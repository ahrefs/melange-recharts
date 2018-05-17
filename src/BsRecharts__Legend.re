/* http://recharts.org/en-US/api/Legend */
open BsRecharts__Utils;

[@bs.module "recharts"] external legend : ReasonReact.reactClass = "Legend";

[@bs.obj]
external makeProps :
  (
    ~align: [@bs.string] [ | `left | `center | `right]=?,
    ~chartHeight: int=?,
    ~chartWidth: int=?,
    ~content: 'content=?,
    ~height: int=?,
    ~iconSize: int=?,
    ~iconType: [@bs.string] [
                 | `line
                 | `square
                 | `rect
                 | `circle
                 | `cross
                 | `diamond
                 | `star
                 | `triangle
                 | `wye
               ]
                 =?,
    ~layout: [@bs.string] [ | `horizontal | `vertical]=?,
    ~margin: margin=?,
    ~onClick: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseDown: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseMove: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOut: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseOver: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~onMouseUp: (Js.t({..}), ReactEventRe.Mouse.t) => unit=?,
    ~payload: array(Js.t({..}))=?,
    ~verticalAlign: [@bs.string] [ | `top | `middle | `bottom]=?,
    ~width: int=?,
    ~wrapperStyle: Js.t({..})=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~align=?,
      ~chartHeight=?,
      ~chartWidth=?,
      ~content=?,
      ~height=?,
      ~iconSize=?,
      ~iconType=?,
      ~layout=?,
      ~margin=?,
      ~onClick=?,
      ~onMouseDown=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseMove=?,
      ~onMouseOut=?,
      ~onMouseOver=?,
      ~onMouseUp=?,
      ~payload=?,
      ~verticalAlign=?,
      ~width=?,
      ~wrapperStyle=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=legend,
    ~props=
      makeProps(
        ~align?,
        ~chartHeight?,
        ~chartWidth?,
        ~content?,
        ~height?,
        ~iconSize?,
        ~iconType?,
        ~layout?,
        ~margin?,
        ~onClick?,
        ~onMouseDown?,
        ~onMouseEnter?,
        ~onMouseLeave?,
        ~onMouseMove?,
        ~onMouseOut?,
        ~onMouseOver?,
        ~onMouseUp?,
        ~payload?,
        ~verticalAlign?,
        ~width?,
        ~wrapperStyle?,
        (),
      ),
    children,
  );
