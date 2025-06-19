module BarChart = {
  [@react.component]
  let make = () =>
    <Recharts.ResponsiveContainer height={Px(200.)} width={Px(300.)}>
      <Recharts.BarChart
        barCategoryGap={Px(1.)}
        margin={
          "top": 0,
          "right": 0,
          "bottom": 0,
          "left": 0,
        }
        data=[|
          {
            "name": "Page A",
            "uv": 4000,
            "pv": 2400,
          },
          {
            "name": "Page B",
            "uv": 3000,
            "pv": 1398,
          },
          {
            "name": "Page C",
            "uv": 2000,
            "pv": 9800,
          },
          {
            "name": "Page D",
            "uv": 2780,
            "pv": 3908,
          },
          {
            "name": "Page E",
            "uv": 1890,
            "pv": 4800,
          },
        |]>
        <Recharts.Bar
          name="Some bar"
          dataKey="pv"
          fill="#2078b4"
          stackId="a"
        />
        <Recharts.Bar
          name="Other bar"
          dataKey="uv"
          fill="#ff7f02"
          stackId="a"
        />
        <Recharts.Tooltip />
        <Recharts.Legend wrapperStyle={"marginTop": "8px"} align=`left />
      </Recharts.BarChart>
    </Recharts.ResponsiveContainer>;
};

module PieChart = {
  type dataCategory = (string, int, string);

  type dataItem = {
    name: string,
    value: int,
    fill: string,
    percent: float,
    category: dataCategory,
  };

  /* A custom Legend component, not Recharts.Legend */
  module Legend = {
    [@react.component]
    let make = (~data: array(dataItem), ~onItemClick) => {
      <div className="flex flex-col gap-2 mt-5">
        {data
         |> Array.mapi((index, item) =>
              <div
                key={Int.to_string(index)}
                onClick={_ => onItemClick(item)}
                className="flex items-center gap-2 cursor-pointer p-1 rounded transition-colors duration-200 hover:bg-gray-100">
                <div
                  className="w-4 h-4 rounded-sm"
                  style={ReactDOM.Style.make(~backgroundColor=item.fill, ())}
                />
                <span> {React.string(item.name)} </span>
                <span className="text-gray-600">
                  {React.string(Printf.sprintf("%.1f%%", item.percent))}
                </span>
              </div>
            )
         |> React.array}
      </div>;
    };
  };

  [@react.component]
  let make = () => {
    let animationDuration = 800;
    let (selectedItem, setSelectedItem) = React.useState(() => None);

    let rawData = [
      ("Desktop", 450, "#0088FE"),
      ("Mobile", 380, "#00C49F"),
      ("Tablet", 200, "#FFBB28"),
      ("Smart TV", 120, "#FF8042"),
    ];

    let total =
      rawData |> List.fold_left((acc, (_, value, _)) => acc + value, 0);

    let data =
      rawData
      |> List.map(item => {
           let (name, value, fill) = item;
           {
             name,
             value,
             fill,
             percent: Int.to_float(value) /. Int.to_float(total) *. 100.0,
             category: item,
           };
         })
      |> Array.of_list;

    let (innerRadius, outerRadius) = (40., 80.);
    let containerSize = Int.of_float(outerRadius) * 2 + 40;

    let onClick = (data, _index, _event) => {
      switch (Js.Nullable.toOption(data)) {
      | Some(d) =>
        setSelectedItem(_ => Some(d##payload));
        Js.log2("Selected:", d##payload.name);
      | None => ()
      };
    };

    let handleLegendClick = item => {
      setSelectedItem(_ => Some(item));
      Js.log2("Legend clicked:", item.name);
    };

    <div>
      <Recharts.ResponsiveContainer
        height={Px(Int.to_float(containerSize))}
        width={Px(Int.to_float(containerSize))}>
        <Recharts.PieChart
          margin={
            "top": 20,
            "right": 20,
            "bottom": 20,
            "left": 20,
          }>
          <Recharts.Pie
            data
            dataKey="value"
            nameKey="name"
            cx={Prc(50.)}
            cy={Prc(50.)}
            innerRadius={Px(innerRadius)}
            outerRadius={Px(outerRadius)}
            paddingAngle=2
            startAngle=90
            endAngle=(-270)
            animationBegin=0
            animationDuration
            onClick>
            {data
             |> Array.mapi((index, item) => {
                  <Recharts.Cell
                    key={Int.to_string(index)}
                    fill={item.fill}
                  />
                })
             |> React.array}
          </Recharts.Pie>
          <Recharts.Tooltip
            formatter={(value: int, name: string, _props) =>
              [|React.int(value), React.string(name)|]
            }
          />
        </Recharts.PieChart>
      </Recharts.ResponsiveContainer>
      <Legend data onItemClick=handleLegendClick />
      {switch (selectedItem) {
       | Some(item) =>
         <div className="mt-5 p-2.5 bg-gray-100 rounded">
           <strong> {React.string("Selected: ")} </strong>
           {React.string(
              item.name
              ++ " - "
              ++ Int.to_string(item.value)
              ++ " ("
              ++ Printf.sprintf("%.1f%%", item.percent)
              ++ ")",
            )}
         </div>
       | None => React.null
       }}
    </div>;
  };
};

module App = {
  [@react.component]
  let make = () => {
    <main className="flex flex-col items-center h-screen gap-8 p-4">
      <BarChart />
      <PieChart />
    </main>;
  };
};

switch (ReactDOM.querySelector("#root")) {
| Some(el) =>
  let root = ReactDOM.Client.createRoot(el);
  ReactDOM.Client.render(root, <App />);
| None => Js.log("No root element found")
};
