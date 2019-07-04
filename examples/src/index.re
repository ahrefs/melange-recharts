open BsRecharts;

let data = [|
  {"name": "Page A", "uv": 4000, "pv": 2400, "amt": 2400},
  {"name": "Page B", "uv": 3000, "pv": 1398, "amt": 2210},
  {"name": "Page C", "uv": 2000, "pv": 9800, "amt": 2290},
  {"name": "Page D", "uv": 2780, "pv": 3908, "amt": 2000},
  {"name": "Page E", "uv": 1890, "pv": 4800, "amt": 2181},
  {"name": "Page F", "uv": 2390, "pv": 3800, "amt": 2500},
  {"name": "Page G", "uv": 3490, "pv": 4300, "amt": 2100},
|];

ReactDOMRe.renderToElementWithId(
  <div>
    <h1> {React.string("Line Chart")} </h1>
    <ResponsiveContainer
      height={Utils.PxOrPrc.Px(200.)} width={Utils.PxOrPrc.Prc(100.)}>
      <LineChart margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
        <Line name="Some bar" dataKey="pv" stroke="#2078b4" />
        <Line name="Other bar" dataKey="uv" stroke="#ff7f02" />
        <Tooltip />
        <Legend align=`left iconType=`circle />
      </LineChart>
    </ResponsiveContainer>
    <h1> {React.string("Bar Chart")} </h1>
    <ResponsiveContainer
      height={Utils.PxOrPrc.Px(200.)} width={Utils.PxOrPrc.Prc(100.)}>
      <BarChart
        barCategoryGap={Utils.PxOrPrc.Px(1.)}
        margin={"top": 0, "right": 0, "bottom": 0, "left": 0}
        data>
        <Bar name="Some bar" dataKey="pv" fill="#2078b4" stackId="a" />
        <Bar name="Other bar" dataKey="uv" fill="#ff7f02" stackId="a" />
        <Tooltip />
        <Legend align=`left iconType=`circle />
      </BarChart>
    </ResponsiveContainer>
    <h1> {React.string("Area Chart")} </h1>
    <AreaChart
      width=500
      height=400
      data
      margin={"top": 10, "right": 30, "left": 0, "bottom": 0}>
      <CartesianGrid strokeDasharray="3 3" />
      <XAxis
        dataKey="name"
        label={Node(<h1> {React.string("MY LABEL")} </h1>)}
      />
      <YAxis />
      <Tooltip />
      <Area _type=`monotone dataKey="uv" stroke="#8884d8" fill="#8884d8" />
    </AreaChart>
    <h1> {React.string("Composed Chart")} </h1>
    <ComposedChart
      width=500
      height=400
      data
      margin={"top": 20, "right": 20, "bottom": 20, "left": 20}>
      <CartesianGrid stroke="#f5f5f5" />
      <XAxis dataKey="name" label={Str("MY LABEL")} />
      <YAxis />
      <Tooltip />
      <Legend />
      <Area _type=`monotone dataKey="amt" fill="#8884d8" stroke="#8884d8" />
      <Bar dataKey="pv" barSize=20 fill="#413ea0" />
      <Line _type=`monotone dataKey="uv" stroke="#ff7300" />
    </ComposedChart>
    <h1> {React.string("Scatter Chart")} </h1>
    <ScatterChart width=400 height=400>
      <CartesianGrid />
      <XAxis _type=`number dataKey="x" name="stature" unit="cm" />
      <YAxis _type=`number dataKey="y" name="weight" unit="kg" />
      <Tooltip />
      <Scatter
        name="A school"
        data=[|
          {"x": 100, "y": 200, "z": 200},
          {"x": 120, "y": 100, "z": 260},
          {"x": 170, "y": 300, "z": 400},
          {"x": 140, "y": 250, "z": 280},
          {"x": 150, "y": 400, "z": 500},
          {"x": 110, "y": 280, "z": 200},
          {"x": 150, "y": 400, "z": 500},
        |]
        fill="#8884d8">
        {React.string("asd")}
      </Scatter>
    </ScatterChart>
    <h1> {React.string("Pie Chart")} </h1>
    <PieChart width=400 height=400>
      <Pie
        data
        dataKey="uv"
        cx={Utils.PxOrPrc.Px(200.)}
        cy={Utils.PxOrPrc.Px(200.)}
        outerRadius={Utils.PxOrPrc.Px(60.)}
        fill="#8884d8"
      />
      <Pie
        data
        dataKey="amt"
        cx={Utils.PxOrPrc.Px(200.)}
        cy={Utils.PxOrPrc.Px(200.)}
        innerRadius={Utils.PxOrPrc.Px(70.)}
        outerRadius={Utils.PxOrPrc.Px(90.)}
        fill="#82ca9d"
      />
    </PieChart>
  </div>,
  "root",
);