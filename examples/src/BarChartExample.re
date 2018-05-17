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
        <Legend align="left" iconType="circle" />
      </BarChart>
    </ResponsiveContainer>,
};
