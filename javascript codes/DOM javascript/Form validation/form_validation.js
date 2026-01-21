const form=document.getElementById("loginform");
form.addEventListener("click",()=>{
  event.preventDefault();
  const username=document.getElementById("username").value;
  const password=document.getElementById("password").value;
  const content=document.getElementById("paragraph");
  const content1=document.getElementById("paragraph1");
  content.textContent=username;
  content1.textContent=password;
  
 
});