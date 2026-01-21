const form=document.getElementById("loginform");
form.addEventListener("submit",()=>{
  event.preventDefault();
  const username=document.getElementById("username").value;
  const password=document.getElementById("password").value;
  console.log(username,password);
  
  if(!username||!password){
    alert("all field is required");
  }
});