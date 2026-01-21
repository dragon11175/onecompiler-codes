const email=document.getElementById("email");
const message=document.getElementById("validationmessage");

email.addEventListener("input",()=>{
  const email1=email.value;
  
  if(email1.includes("@")&&email1.includes(".")){
    message.textContent="valid email";
    message.style.color="green";
  }else{
    message.textContent="invalid email";
    message.style.color="red";
  }
});