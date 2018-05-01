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

let make = (_children) => {
  ...component,

  render: (data, _self) => {
    <ResponsiveContainer height=200>
      <BarChart
        barCategoryGap=0.5
        margin={"top": 0, "right": 0, "bottom": 0, "left": 0}
        data=data>
        <Bar
          name="Some bar"
          dataKey="key1"
          fill="#2078b4"
          stackId="a"
        />
        <Bar
          name="Other bar"
          dataKey="key2"
          fill="#ff7f02"
          stackId="a"
        />
        <Tooltip />
        <Legend align="left" iconType="circle" />
      </BarChart>
    </ResponsiveContainer>
  }
};
```

Check [Reacharts documentation](http://recharts.org/en-US/api) for available props.
