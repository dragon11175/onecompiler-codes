// DOM selectors to access elements of html webpage


//getElementById():

const greeting=document.getElementById("greeting");
console.log(greeting.textContent);

//getElementsByClassName():

const item=document.getElementsByClassName("item");
console.log("getElementsByClassName returns html collection:");
console.log(item);

console.log("now we access html collection elements by index numbers");
console.log(item[0].textContent);
console.log(item[1].textContent);
console.log(item[2].textContent);

//getElementByTagName()

const paragraphs=document.getElementsByTagName("p");
console.log("getelementsByTagname returns a html collection:");
console.log(paragraphs);

console.log("now we access html collection elements by index numbers");
console.log(paragraphs[0].textContent);
console.log(paragraphs[1].textcontent);
console.log(paragraphs[2].textContent);



