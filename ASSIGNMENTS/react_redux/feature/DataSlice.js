import { createSlice } from "@reduxjs/toolkit";

const initialState = {
  username: "Nirav Nagar",
  age: "33",
  isImage: true,
  number: 1,
};

export const DataSlice = createSlice({
  name: "DataSlice",
  initialState,
  reducers: {
    Change: (state) => {
      state.username = "Akash Nagar";
    },
    Plus: (state) => {
      state.number += 1;
    },
    Minus: (state) => {
      state.number -= 1;
    },
    Hide: (state) => {
      state.isImage = false;
    },
    Show: (state) => {
      state.isImage = true;
    },
    Toggle: (state) => {
      state.isImage = !state.isImage;
    },
  },
});

// Action creators are generated for each case reducer function
export const { Change,Plus,Minus,Hide,Show,Toggle } = DataSlice.actions;

export default DataSlice.reducer;
