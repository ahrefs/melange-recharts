/* http://recharts.org/en-US/api/Legend */
open Utils;

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
    ~onClick: 'onClick=?,
    ~onMouseDown: 'onMouseDown=?,
    ~onMouseEnter: 'onMouseEnter=?,
    ~onMouseLeave: 'onMouseLeave=?,
    ~onMouseMove: 'onMouseMove=?,
    ~onMouseOut: 'onMouseOut=?,
    ~onMouseOver: 'onMouseOver=?,
    ~onMouseUp: 'onMouseUp=?,
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
