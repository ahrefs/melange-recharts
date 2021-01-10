/*
 [@bs.config {jsx: 2}];

 let component = ReasonReact.statelessComponent(__MODULE__);

 let make = (~title, children) => {
   ...component,
   render: _self =>
     <div style={ReactDOMRe.Style.make(~marginBottom="32px", ())}>
       <b> {ReasonReact.string(title)} </b>
       <div> ...children </div>
     </div>,
 };
 */
