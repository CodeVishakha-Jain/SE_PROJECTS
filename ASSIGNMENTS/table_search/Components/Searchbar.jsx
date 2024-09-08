import React from "react";

function Searchbar({ txt, setTxt, tableData, setTableData }) {
  const handleSearchChange = (event) => {
    const value = event.target.value; 
    setTxt(value); 
    const filteredData = tableData.filter((item) =>
      item.Name.toLowerCase().includes(value.toLowerCase())
    );
    setTableData(filteredData);
  };
  return (
    <div>
      <input
        type="search"
        placeholder="Search..."
        onChange={handleSearchChange} 
      />
    </div>
  );
}

export default Searchbar;
