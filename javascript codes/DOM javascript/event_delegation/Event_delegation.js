const list=document.getElementById("menu-list");
list.addEventListener("click",(event)=>{
  
  console.log(event.target);
  if(event.target.tagName==="LI"){
    console.log(event.target.textContent,"clicked!");  
  }
})