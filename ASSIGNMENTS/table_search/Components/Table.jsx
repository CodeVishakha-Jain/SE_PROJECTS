import React from "react";

function Table({tableData}) {
  return (
    <div>
      <table className="">
        <thead>
          <tr>
            <th>Name</th>
            <th>Price</th>
            <th>Category</th>
            <th>Action</th>
          </tr>
        </thead>
        <tbody>
          {tableData.map((item, index) => 
            <tr key={index}>
              <td>{item.Name}</td>
              <td>{item.Price}</td>
              <td>{item.Category}</td>
              <td>{item.Action}</td>
            </tr>
          )}
        </tbody>
      </table>
    </div>
  );
}

export default Table;
