// http://recharts.org/en-US/api/Cell

[@bs.module "recharts"] [@react.component]
external make:
  (
    ~background: 'background=?,
    ~className: string=?,
    ~fill: string=?,
    ~stroke: string=?,
    ~strokeWidth: int=?
  ) =>
  React.element =
  "Cell";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~background=?,
        ~className=?,
        ~fill=?,
        ~stroke=?,
        ~strokeWidth=?,
        children,
      ) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~background?,
        ~className?,
        ~fill?,
        ~stroke?,
        ~strokeWidth?,
        (),
      ),
      children,
    );
};
