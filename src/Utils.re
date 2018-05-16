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
  let encodeOpt = v => Js.Option.map((. b) => encode(b), v);
};

type margin = {
  .
  "top": int,
  "right": int,
  "bottom": int,
  "left": int,
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