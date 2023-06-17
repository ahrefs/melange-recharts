# melange-recharts

These are the [Melange](https://melange.re/) bindings for [Recharts](http://recharts.org/).
🚧 It is not completed, we are adding bindings as we go. Doesn't follow semver at this point. 🚧

## Install

Install [opam](https://opam.ocaml.org/) package manager.

Then:

```
opam pin add melange-recharts.dev git+https://github.com/ahrefs/melange-recharts.git#master
```

The bindings support the version `^2.1.12` of `recharts` npm package, which should be installed separately:

```json
  "dependencies": {
    "recharts": "^2.1.12"
  }
```

## Setup

Add `melange-recharts` to the `libraries` in your `dune` file:

```dune
; ...
  (libraries melange-recharts)
; ...
```

## Usage Example

See [Example.re](./example/Example.re);

## Helpers

Some of polymorphic params are represented as a variant, list below:

```reason
module AxisInterval = {
  ...
  type arg =
    | PreserveStart
    | PreserveEnd
    | PreserveStartEnd
    | Num(int);
  ...
};

module PxOrPrc = {
  ...
  type arg =
    | Px(float)
    | Prc(float);
  ...
};

module StrOrNode = {
  ...
  type arg =
    | Str(string)
    | Node(ReasonReact.reactElement);
  ...
};
```

you will use it like this:

```reason
<XAxis
  interval=PreserveStart
  label=Str("text")
/>
<XAxis
  interval=Num(12)
  label=Node(
    <span>
      (ReasonReact.stringToElement("text"))
    </span>
  )
/>
```

Check [Recharts documentation](http://recharts.org/en-US/api) for available props.
