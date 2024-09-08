import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { Change, Hide, Minus, Plus, Show, Toggle } from '../DataSlice';
import Image from './Image';

function Redux_task() {
    const {username,age,number,isImage}=useSelector((state)=>(state.data));
    const dispatch=useDispatch();
  return (
    <>
        <div>Redux_task</div>
        <div>
            <p>Hi my name is :{username}</p>
            <button type='button' onClick={()=>dispatch(Change())}>Change</button>
        </div>
        <div>
            <button type='button' onClick={()=>dispatch(Minus())}>-</button>
            <p>{number}</p>
            <button type='button' onClick={()=>dispatch(Plus())}>+</button>
        </div>
        <div>
            <button type='button' onClick={()=>dispatch(Hide())}>Hide</button>
            <button type='button' onClick={()=>dispatch(Show())}>Show</button>
            <button type='button' onClick={()=>dispatch(Toggle())}>Toggle</button>
            {isImage?<Image></Image>:null}
        </div>
    </>
    
  )
}

export default Redux_task