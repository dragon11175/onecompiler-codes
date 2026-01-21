const form = document.getElementById("myform");
form.addEventListener("submit",(event)=>{
  event.preventDefault();
   console.log("form submited",event);
   //create a data object from the form
   const formdata=new FormData(form);
   console.log("username",formdata.get("username"));
   // iterate through the form data
   for(const[key,value] of formdata.entries()){
     console.log(key , value);
   }
});