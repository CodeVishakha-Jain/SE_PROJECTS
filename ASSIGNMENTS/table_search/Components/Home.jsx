import React, { useState } from "react";
import Searchbar from "./Searchbar";
import Table from "./Table";
const deafultTableData = [
  {
    Name: "Product 1",
    Price: "$10.00",
    Category: "Electronics",
    Action: "Edit",
  },
  {
    Name: "Product 2",
    Price: "$20.00",
    Category: "Clothing",
    Action: "Delete",
  },
  {
    Name: "Product 3",
    Price: "$15.00",
    Category: "Books",
    Action: "View",
  },
];
function Home() {
  const [txt, setTxt] = useState();
  const [tableData, setTableData] = useState(deafultTableData);
  return (
    <div>
      <Searchbar
        txt={txt}
        setTxt={setTxt}
        tableData={deafultTableData}
        setTableData={setTableData}
      />
      <Table tableData={tableData} />
    </div>
  );
}

export default Home;
