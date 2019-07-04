open BsRecharts;

[@react.component]
let make = (~data) =>
  <ResponsiveContainer
    height={Utils.PxOrPrc.Px(200.)} width={Utils.PxOrPrc.Px(300.)}>
    <LineChart margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
      <Line name="Some bar" dataKey="pv" stroke="#2078b4" />
      <Line name="Other bar" dataKey="uv" stroke="#ff7f02" />
      <Tooltip />
      <Legend align=`left iconType=`circle />
    </LineChart>
  </ResponsiveContainer>;