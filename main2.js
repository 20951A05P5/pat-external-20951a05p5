const textbox=document.getElementById("output")
function gainAccess(event){
    const curElement=event.target
    var value=curElement.innerText;
    var prevValue=textbox.value;
    if(value=="="){
        const result=eval(prevValue)
    }
    else{
        console.log(prevValue);
        textbox.value=prevValue+""+value
    }
    var prevValue=textbox.innerText
}
const boxes=document.querySelectorAll(".calc-box");
//console.log(boxes);
for(const element of boxes){
    element.addEventListener("click",gainAccess)
}