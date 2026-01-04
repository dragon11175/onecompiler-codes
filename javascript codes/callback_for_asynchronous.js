function getuserdata(userId,getnextdata){
  setTimeout(()=>{
    console.log('Id:',userId);
    if(getnextdata){
      getnextdata();
    }
  },1000)
};

getuserdata(12,()=>{
  getuserdata(45,()=>{
    getuserdata(234,()=>{
      getuserdata(345)
    })
  })});
  
  
  //here we make asynchronous programming using callbacks.it is od method to handaling asynchronous programming in js