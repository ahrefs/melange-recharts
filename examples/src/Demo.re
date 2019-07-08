open BsRecharts;

[@react.component]
let make = (~data) =>
  <div>
    <ChartDemo title="Line Chart">
      <ResponsiveContainer height={Px(200.)} width={Prc(100.)}>
        <LineChart margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
          <Line name="Some bar" dataKey="pv" stroke="#2078b4" />
          <Line name="Other bar" dataKey="uv" stroke="#ff7f02" />
          <Tooltip />
          <Legend align=`left iconType=`circle />
        </LineChart>
      </ResponsiveContainer>
    </ChartDemo>
    <ChartDemo title="Bar Chart">
      <ResponsiveContainer height={Px(200.)} width={Prc(100.)}>
        <BarChart
          barCategoryGap={Px(1.)}
          margin={"top": 0, "right": 0, "bottom": 0, "left": 0}
          data>
          <Bar name="Some bar" dataKey="pv" fill="#2078b4" stackId="a" />
          <Bar name="Other bar" dataKey="uv" fill="#ff7f02" stackId="a" />
          <Tooltip />
          <Legend align=`left iconType=`circle />
        </BarChart>
      </ResponsiveContainer>
    </ChartDemo>
    <ChartDemo title="Area Chart">
      <AreaChart
        width=500
        height=400
        data
        margin={"top": 10, "right": 30, "left": 0, "bottom": 0}>
        <CartesianGrid strokeDasharray="3 3" />
        <XAxis dataKey="name" />
        <YAxis />
        <Tooltip />
        <Area _type=`monotone dataKey="uv" stroke="#8884d8" fill="#8884d8" />
      </AreaChart>
    </ChartDemo>
    <ChartDemo title="Composed Chart">
      <ComposedChart
        width=500
        height=400
        data
        margin={"top": 20, "right": 20, "bottom": 20, "left": 20}>
        <CartesianGrid stroke="#f5f5f5" />
        <XAxis dataKey="name" />
        <YAxis />
        <Tooltip />
        <Legend />
        <Area _type=`monotone dataKey="amt" fill="#8884d8" stroke="#8884d8" />
        <Bar dataKey="pv" barSize=20 fill="#413ea0" />
        <Line _type=`monotone dataKey="uv" stroke="#ff7300" />
      </ComposedChart>
    </ChartDemo>
    <ChartDemo title="Scatter Chart">
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
    </ChartDemo>
    <ChartDemo title="Pie Chart">
      <PieChart width=400 height=400>
        <Pie
          data
          dataKey="uv"
          cx={Px(200.)}
          cy={Px(200.)}
          outerRadius={Px(60.)}
          fill="#8884d8"
        />
        <Pie
          data
          dataKey="amt"
          cx={Px(200.)}
          cy={Px(200.)}
          innerRadius={Px(70.)}
          outerRadius={Px(90.)}
          fill="#82ca9d"
        />
      </PieChart>
    </ChartDemo>
  </div>;
