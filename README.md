# melange-recharts

These are the [Melange](https://melange.re/) bindings for [Recharts](http://recharts.org/).
🚧 It is not completed, we are adding bindings as we go. Doesn't follow semver at this point. 🚧

## Install

Install [opam](https://opam.ocaml.org/) package manager.

Then:

```sh
opam install melange-recharts
```

The bindings support the version `^2.15.1` of `recharts` npm package, which should be installed separately:

```json
  "dependencies": {
    "recharts": "^2.15.1"
  }
```

## Setup

Add `melange-recharts` to the `libraries` in your `dune` file:

```lisp
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
```

you will use it like this:

```reason
<XAxis
  interval=PreserveStart
/>
<XAxis
  interval=Num(12)
/>
```

Check [Recharts documentation](http://recharts.org/en-US/api) for available props.
