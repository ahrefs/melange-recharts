[@bs.config {jsx: 2}];

open BsRecharts;

let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~data, _children) => {
  ...component,
  render: _self =>
    <div>
      <ChartDemoJsx2 title="Line Chart">
        <ResponsiveContainer.Jsx2 height={Px(200.)} width={Prc(100.)}>
          <LineChart.Jsx2
            margin={"top": 0, "right": 0, "bottom": 0, "left": 0} data>
            <Line.Jsx2 name="Some bar" dataKey="pv" stroke="#2078b4" />
            <Line.Jsx2 name="Other bar" dataKey="uv" stroke="#ff7f02" />
            <Tooltip.Jsx2 />
            <Legend.Jsx2 align=`left iconType=`circle />
          </LineChart.Jsx2>
        </ResponsiveContainer.Jsx2>
      </ChartDemoJsx2>
      <ChartDemoJsx2 title="Bar Chart">
        <ResponsiveContainer.Jsx2 height={Px(200.)} width={Prc(100.)}>
          <BarChart.Jsx2
            barCategoryGap={Px(1.)}
            margin={"top": 0, "right": 0, "bottom": 0, "left": 0}
            data>
            <Bar.Jsx2
              name="Some bar"
              dataKey="pv"
              fill="#2078b4"
              stackId="a"
            />
            <Bar.Jsx2
              name="Other bar"
              dataKey="uv"
              fill="#ff7f02"
              stackId="a"
            />
            <Tooltip.Jsx2 />
            <Legend.Jsx2 align=`left iconType=`circle />
          </BarChart.Jsx2>
        </ResponsiveContainer.Jsx2>
      </ChartDemoJsx2>
      <ChartDemoJsx2 title="Area Chart">
        <AreaChart.Jsx2
          width=500
          height=400
          data
          margin={"top": 10, "right": 30, "left": 0, "bottom": 0}>
          <CartesianGrid.Jsx2 strokeDasharray="3 3" />
          <XAxis.Jsx2 dataKey="name" />
          <YAxis.Jsx2 />
          <Tooltip.Jsx2 />
          <Area.Jsx2
            _type=`monotone
            dataKey="uv"
            stroke="#8884d8"
            fill="#8884d8"
          />
        </AreaChart.Jsx2>
      </ChartDemoJsx2>
      <ChartDemoJsx2 title="Composed Chart">
        <ComposedChart.Jsx2
          width=500
          height=400
          data
          margin={"top": 20, "right": 20, "bottom": 20, "left": 20}>
          <CartesianGrid.Jsx2 stroke="#f5f5f5" />
          <XAxis.Jsx2 dataKey="name" />
          <YAxis.Jsx2 />
          <Tooltip.Jsx2 />
          <Legend.Jsx2 />
          <Area.Jsx2
            _type=`monotone
            dataKey="amt"
            fill="#8884d8"
            stroke="#8884d8"
          />
          <Bar.Jsx2 dataKey="pv" barSize=20 fill="#413ea0" />
          <Line.Jsx2 _type=`monotone dataKey="uv" stroke="#ff7300" />
        </ComposedChart.Jsx2>
      </ChartDemoJsx2>
      <ChartDemoJsx2 title="Scatter Chart">
        <ScatterChart.Jsx2 width=400 height=400>
          <CartesianGrid.Jsx2 />
          <XAxis.Jsx2 _type=`number dataKey="x" name="stature" unit="cm" />
          <YAxis.Jsx2 _type=`number dataKey="y" name="weight" unit="kg" />
          <Tooltip.Jsx2 />
          <Scatter.Jsx2
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
          </Scatter.Jsx2>
        </ScatterChart.Jsx2>
      </ChartDemoJsx2>
      <ChartDemoJsx2 title="Pie Chart">
        <PieChart.Jsx2 width=400 height=400>
          <Pie.Jsx2
            data
            dataKey="uv"
            cx={Px(200.)}
            cy={Px(200.)}
            outerRadius={Px(60.)}
            fill="#8884d8"
          />
          <Pie.Jsx2
            data
            dataKey="amt"
            cx={Px(200.)}
            cy={Px(200.)}
            innerRadius={Px(70.)}
            outerRadius={Px(90.)}
            fill="#82ca9d"
          />
        </PieChart.Jsx2>
      </ChartDemoJsx2>
    </div>,
};
