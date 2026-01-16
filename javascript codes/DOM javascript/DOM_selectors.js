// DOM selectors to access elements of html webpage


//getElementById():

const greeting=document.getElementById("greeting");
console.log(greeting.textContent);

//getElementsByClassName():

const item=document.getElementsByClassName("item");
console.log("getElementsByClassName returns html collection:");
console.log(item);

console.log("now we access html collection elements by index numbers");
console.log(item[0]);
console.log(item[1]);
console.log(item[2]);

