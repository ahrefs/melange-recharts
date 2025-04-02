// https://recharts.org/en-US/api/SankeyChart
open Utils;

type linkDataItem = {
  source: int,
  target: int,
  value: float,
};

type sankeyData('nodeData) = {
  nodes: array('nodeData),
  links: array(linkDataItem),
};

type sankeyNode = {
  x: int,
  y: int,
  dx: int,
  dy: int,
  depth: int,
  value: float,
  name: string,
  sourceLinks: array(int),
  sourceNodes: array(int),
  targetLinks: array(int),
  targetNodes: array(int),
};

type sankeyLink = {
  target: sankeyNode,
  source: sankeyNode,
  value: float,
  sy: int,
  dy: int,
  ty: int,
};

type linkProps = {
  sourceX: int,
  targetX: int,
  sourceY: int,
  targetY: int,
  sourceControlX: int,
  targetControlX: int,
  sourceRelativeY: int,
  targetRelativeY: int,
  linkWidth: float,
  index: int,
  payload: sankeyLink,
};

type nodeProps = {
  index: int,
  x: int,
  y: int,
  width: int,
  height: int,
  payload: sankeyNode,
};

type event('unknownProps) =
  | Node(nodeProps)
  | Link(linkProps)
  | Unknown(Js.t('unknownProps));

external makeNodeProps: Js.t({..}) => nodeProps = "%identity";
external makeLinkProps: Js.t({..}) => linkProps = "%identity";

let encodeEvent =
    (fn: option((event('unknownProps), React.Event.Mouse.t) => unit)) =>
  switch (fn) {
  | None => None
  | Some(fn) =>
    Some(
      (props, eventType, mouseEvent) =>
        fn(
          switch (eventType) {
          | "node" => Node(makeNodeProps(props))
          | "link" => Link(makeLinkProps(props))
          | _ => Unknown(props)
          },
          mouseEvent,
        ),
    )
  };

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~data: sankeyData('nodeData),
    ~dataKey: string=?,
    ~nameKey: string=?,
    ~width: PxOrPrc.t=?,
    ~height: PxOrPrc.t=?,
    ~sort: bool=?,
    ~nodePadding: float=?,
    ~nodeWidth: float=?,
    ~linkWidth: float=?,
    ~linkCurvature: float=?,
    ~iterations: int=?,
    ~node: [@mel.unwrap] [
             | `Obj(Js.t({..}))
             | `Element(React.element)
             | `Fn(nodeProps => React.element)
           ]
             =?,
    ~link: [@mel.unwrap] [
             | `Obj(Js.t({..}))
             | `Element(React.element)
             | `Fn(linkProps => React.element)
           ]
             =?,
    ~margin: margin=?,
    ~onClick: (Js.t({..}), string, React.Event.Mouse.t) => unit=?,
    ~onMouseEnter: (Js.t({..}), string, React.Event.Mouse.t) => unit=?,
    ~onMouseLeave: (Js.t({..}), string, React.Event.Mouse.t) => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Sankey";

let makeProps =
    (
      ~width=?,
      ~height=?,
      ~onClick: option((event('unknownProps), React.Event.Mouse.t) => unit)=?,
      ~onMouseEnter:
         option((event('unknownProps), React.Event.Mouse.t) => unit)=?,
      ~onMouseLeave:
         option((event('unknownProps), React.Event.Mouse.t) => unit)=?,
    ) =>
  makeProps(
    ~width=?width->PxOrPrc.encodeOpt,
    ~height=?height->PxOrPrc.encodeOpt,
    ~onClick=?encodeEvent(onClick),
    ~onMouseEnter=?encodeEvent(onMouseEnter),
    ~onMouseLeave=?encodeEvent(onMouseLeave),
  );
