function fetchuserdata(userId){
  return new Promise( (resolve,reject)=>{
    setTimeout(
      ()=>{
        if(userId){
          const user={id:userId,
                      name:'ram',
                      email:'lalitsainiak47'
        };
        resolve(user);
        }else{
          reject(new Error('invalid user'));
        }
      },1000);
  });
}


fetchuserdata(123).then((res)=>{console.log(res);}).catch((err)=>{console.log(err);});