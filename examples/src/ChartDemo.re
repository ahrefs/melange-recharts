[@react.component]
let make = (~title, ~children) =>
  <div style={ReactDOMRe.Style.make(~marginBottom="32px", ())}>
    <b> {React.string(title)} </b>
    children
  </div>;
