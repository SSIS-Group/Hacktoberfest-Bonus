import React from "react";
import logo from "./logo.svg";
import "./App.css";

function Hello(props) {
  return <h1>Hello {props.name}, Welcome do Hello World React Hooks</h1>;
}

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <Hello name={Diego} />
      </header>
    </div>
  );
}

export default App;
