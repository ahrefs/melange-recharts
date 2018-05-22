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
  let encodeOpt = v => Belt.Option.map(v, encode);
};

module PxOrPrc = {
  type t;
  type arg =
    | Px(int)
    | Prc(int);
  let encode: arg => t =
    fun
    | Px(v) => Obj.magic(v)
    | Prc(v) => Obj.magic(string_of_int(v) ++ "%");
  let encodeOpt = v => Belt.Option.map(v, encode);
};

module StrOrNode = {
  type t;
  type arg =
    | Str(string)
    | Node(ReasonReact.reactElement);
  let encode: arg => t =
    fun
    | Str(v) => Obj.magic(v)
    | Node(v) => Obj.magic(v);
  let encodeOpt = v => Belt.Option.map(v, encode);
};
