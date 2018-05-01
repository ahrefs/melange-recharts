[@bs.module "recharts"] external tooltip : ReasonReact.reactClass = "Tooltip";

[@bs.obj]
external makeProps :
  (
    ~separator: string=?,
    ~offset: int=?,
    ~itemStyle: 'a=?,
    ~wrapperStyle: 'b=?,
    ~labelStyle: 'c=?,
    ~cursor: 'd=?,
    ~viewBox: 'e=?,
    ~active: bool=?,
    ~coordinate: 'f=?,
    ~payload: 'g=?,
    ~label: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~separator=?,
      ~offset=?,
      ~itemStyle=?,
      ~wrapperStyle=?,
      ~labelStyle=?,
      ~cursor=?,
      ~viewBox=?,
      ~active=?,
      ~coordinate=?,
      ~payload=?,
      ~label=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tooltip,
    ~props=
      makeProps(
        ~separator?,
        ~offset?,
        ~itemStyle?,
        ~wrapperStyle?,
        ~labelStyle?,
        ~cursor?,
        ~viewBox?,
        ~active?,
        ~coordinate?,
        ~payload?,
        ~label?,
        ()
      ),
    children
  );
