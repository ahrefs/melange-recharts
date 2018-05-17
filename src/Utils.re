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

module AxisInterval = {
  type t(_) =
    | PreserveStart: t(string)
    | PreserveEnd: t(string)
    | PreserveStartEnd: t(string)
    | Number(int): t(int);
  let decode = (type a, interval: t(a)) : a =>
    switch (interval) {
    | PreserveStart => "preserveStart"
    | PreserveEnd => "preserveEnd"
    | PreserveStartEnd => "preserveStartEnd"
    | Number(int) => int
    };
};

module PxOrPrc = {
  type t;
  type arg =
    | Px(int)
    | Prc(int);
  external fromPx : int => t = "%identity";
  external fromPrc : string => t = "%identity";
  let encode = v =>
    switch (v) {
    | Px(v) => fromPx(v)
    | Prc(v) => fromPrc(string_of_int(v) ++ "%")
    };
  let encodeOpt = Js.Option.map((. a) => encode(a));
};

module StrOrInt = {
  type t;
  type arg =
    | Str(string)
    | Int(int);
  external fromStr : string => t = "%identity";
  external fromInt : int => t = "%identity";
  let encode = v =>
    switch (v) {
    | Str(v) => fromStr(v)
    | Int(v) => fromInt(v)
    };
  let encodeOpt = Js.Option.map((. a) => encode(a));
};

module StrOrNode = {
  type t;
  type arg =
    | Str(string)
    | Node(ReasonReact.reactElement);
  external fromStr : string => t = "%identity";
  external fromNode : ReasonReact.reactElement => t = "%identity";
  let encode = v =>
    switch (v) {
    | Str(v) => fromStr(v)
    | Node(v) => fromNode(v)
    };
  let encodeOpt = Js.Option.map((. b) => encode(b));
};
