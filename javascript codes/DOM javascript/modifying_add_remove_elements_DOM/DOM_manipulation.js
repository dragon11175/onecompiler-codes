//modifying,add,remove elements


//chamging content
const meassage=document.getElementById("message");
meassage.textContent="new message";
meassage.innerHTML="<b>new message 1</b>";
meassage.innerHTML+="<p>pankaj</p>";// here we add new element 


//updating attribute
const image=document.getElementById("image");
image.setAttribute("alt","old photo");//here we change image alt
