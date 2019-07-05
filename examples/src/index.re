let data = [|
  {"name": "Page A", "uv": 4000, "pv": 2400},
  {"name": "Page B", "uv": 3000, "pv": 1398},
  {"name": "Page C", "uv": 2000, "pv": 9800},
  {"name": "Page D", "uv": 2780, "pv": 3908},
  {"name": "Page E", "uv": 1890, "pv": 4800},
  {"name": "Page F", "uv": 2390, "pv": 3800},
  {"name": "Page G", "uv": 3490, "pv": 4300},
|];

ReactDOMRe.renderToElementWithId(
  <div>
    <h2> {React.string("Line Chart BINDING")} </h2>
    <BsRecharts__ResponsiveContainer height=200 width=100>
      <BsRecharts__LineChart
        margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
        <BsRecharts__Line.Binding
          name="Some bar"
          dataKey="pv"
          stroke="#2078b4"
        />
      </BsRecharts__LineChart>
    </BsRecharts__ResponsiveContainer>
    <br />
    <br />
    <br />
    <br />
    <h2> {React.string("Line Chart WRAP")} </h2>
    <BsRecharts__ResponsiveContainer height=200 width=100>
      <BsRecharts__LineChart
        margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
        <BsRecharts__Line name="Some bar" dataKey="pv" stroke="#2078b4" />
      </BsRecharts__LineChart>
    </BsRecharts__ResponsiveContainer>
  </div>,
  "root",
);