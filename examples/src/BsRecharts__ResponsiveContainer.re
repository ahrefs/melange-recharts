[@bs.module "recharts"] [@react.component]
external make:
  (
    ~aspect: float=?,
    ~className: string=?,
    ~debounce: int=?,
    ~height: int=?,
    ~minHeight: int=?,
    ~minWidth: int=?,
    ~width: int=?,
    ~children: React.element
  ) =>
  React.element =
  "ResponsiveContainer";