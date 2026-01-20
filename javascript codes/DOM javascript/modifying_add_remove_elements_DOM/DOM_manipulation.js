//modifying,add,remove elements


//chamging content
const meassage=document.getElementById("message");
meassage.textContent="new message";
meassage.innerHTML="<b>new message 1</b>";
meassage.innerHTML+="<p>pankaj</p>";// here we add new element 


//updating attribute
const image=document.getElementById("image");
image.setAttribute("alt","old pic");
console.log(image.getAttribute("alt"));//to check alt


//manipulation styles
const styled=document.getElementById("styled");
styled.style.color="blue";
styled.style.fontSize="48px";


//adding/removing classes
const box=document.getElementById("box");
box.classList.add("shadow");//here add shadow with red-box
box.classList.remove("red-box");//here emove red-box and remain only shadow
box.classList.toggle("highlilghts");//add if this class not exist and remove if exists
box.classList.toggle("highlilghts");
console.log(box.getAttribute("class"));


//adding and removing elements
const list=document.getElementById("list");
const newItem=document.createElement("li");
newItem.textContent="item2";
list.appendChild(newItem);//we add here new element 
list.removeChild(list.firstElementChild);//here wwe remove first element form ul list
list.innerHTML+="<li>ITEM3</li>";// it is not best way to add element in html

const newItem3=document.createElement("li");
newItem3.textContent="Item4";
list.insertBefore(newItem3,list.firstElementChild);





