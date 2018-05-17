# bs-recharts

This is Bucklescript bindings for [Recharts](http://recharts.org/). It is not completed, we are adding bindings as we go.

# Install

```
yarn add bs-recharts
```

# Setup

Add bs-recharts to bs-depenencies in your bs-config. bs!

```js
{
  /* ... */
  "bs-dependencies": [
    "bs-recharts"
  ],
  /* ... */
}
```

# Usage Example

```re
open BsRecharts;

let component = ReasonReact.statelessComponent("SomeComponent");

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <ResponsiveContainer height=(Px(200)) width=(Px(300))>
      <BarChart
        barCategoryGap=(Px(1))
        margin={"top": 0, "right": 0, "bottom": 0, "left": 0}
        data>
        <Bar name="Some bar" dataKey="pv" fill="#2078b4" stackId="a" />
        <Bar name="Other bar" dataKey="uv" fill="#ff7f02" stackId="a" />
        <Tooltip />
        <Legend align=`left iconType=`circle />
      </BarChart>
    </ResponsiveContainer>,
};
```

# Helpers

Some of polymorphic params are represented as a variant, list below:

```
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
    | Px(int)
    | Prc(int);
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

```
<XAxis
  intervel=PreserveStart
  label=Str("text")
/>
<XAxis
  intervel=Num(12)
  label=Node(
    <span>
      (ReasonReact.stringToElement("text"))
    </span>
  )
/>
```

Check [Reacharts documentation](http://recharts.org/en-US/api) for available props.
