import React from "react";
import Navbar from "./components/Navbar";
import News from "./components/News";
import {
  BrowserRouter as Router, Switch, Route
} from 'react-router-dom';

const App = () => {
  const pagesize = 7;

  return (
    <div>
      <Router>
        <Navbar />
        <Switch>

          <Route exact path="/"> <News key="general" pagesize={pagesize} country="in" category="general" /></Route>
          <Route exact path="/business"> <News key="business" pagesize={pagesize} country="in" category="business" /></Route>
          <Route exact path="/entertainment"> <News key="entertainment" pagesize={pagesize} country="in" category="entertainment" /></Route>
          <Route exact path="/general"> <News key="general" pagesize={pagesize} country="in" category="general" /></Route>
          <Route exact path="/health"> <News key="health" pagesize={pagesize} country="in" category="health" /></Route>
          <Route exact path="/science"> <News key="science" pagesize={pagesize} country="in" category="science" /></Route>
          <Route exact path="/sports"> <News key="sports" pagesize={pagesize} country="in" category="sports" /></Route>
          <Route exact path="/technology"> <News key="technology" pagesize={pagesize} country="in" category="technology" /></Route>

        </Switch>
      </Router>
    </div>
  );


}
export default App;
