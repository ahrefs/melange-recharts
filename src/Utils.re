type lineType = [
  | `basis
  | `basisClosed
  | `basisOpen
  | `linear
  | `linearClosed
  | `natural
  | `monotoneX
  | `monotoneY
  | `monotone
  | `step
  | `stepBefore
  | `stepAfter
];

type legendType = [ | `line | `square | `rect | `circle | `cross | `diamond | `square | `star | `triangle | `wye];

type scale = [
  | `auto
  | `linear
  | `pow
  | `sqrt
  | `log
  | `identity
  | `time
  | `band
  | `point
  | `ordinal
  | `quantile
  | `quantize
  | `utcTime
  | `sequential
  | `threshold
];

type axisType = [ | `number | `category];

type layout = [ | `horizontal | `vertical];

type stackOffset = [ | `expand | `none | `wiggle | `silhouette | `sign];

type margin = {
  .
  "top": int,
  "right": int,
  "bottom": int,
  "left": int,
};

type viewBox = {
  .
  "x": int,
  "y": int,
  "width": int,
  "height": int,
};

type padding = {
  .
  "top": int,
  "right": int,
  "bottom": int,
  "left": int,
};

type paddingHorizontal = {
  .
  "right": int,
  "left": int,
};

type paddingVertical = {
  .
  "top": int,
  "bottom": int,
};

type activeCoordinate = {
  .
  "x": int,
  "y": int,
};

module AxisInterval = {
  type t;
  type arg =
    | PreserveStart
    | PreserveEnd
    | PreserveStartEnd
    | Num(int);
  let encode: arg => t =
    fun
    | PreserveStart => Obj.magic("preserveStart")
    | PreserveEnd => Obj.magic("preserveEnd")
    | PreserveStartEnd => Obj.magic("preserveStartEnd")
    | Num(num) => Obj.magic(num);
  let encodeOpt = Option.map(encode);
};

module PxOrPrc = {
  type t;
  type arg =
    | Px(float)
    | Prc(float);
  let encode: arg => t =
    fun
    | Px(v) => Obj.magic(v)
    | Prc(v) => Obj.magic(Js.Float.toString(v) ++ "%");
  let encodeOpt = Option.map(encode);
};

module StrOrNode = {
  type t;
  type arg =
    | Str(string)
    | Node(React.element);
  let encode: arg => t =
    fun
    | Str(v) => Obj.magic(v)
    | Node(v) => Obj.magic(v);
  let encodeOpt = Option.map(encode);
};

module TooltipCursor = {
  [@deriving abstract]
  type config = {
    [@mel.optional]
    fill: option(string),
    [@mel.optional]
    stroke: option(string),
    [@mel.optional]
    strokeWidth: option(int),
  };

  type t;
  type arg =
    | Bool(bool)
    | Config(config)
    | Component(React.element);
  let encode: arg => t =
    fun
    | Bool(v) => Obj.magic(v)
    | Config(v) => Obj.magic(v)
    | Component(v) => Obj.magic(v);
  let encodeOpt = Option.map(encode);
};
