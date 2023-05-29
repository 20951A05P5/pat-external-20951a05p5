let num=[1,22,34,5,56,74,45]
for(let i=0;i<Array.length;i++){
    if(num[i]%2==0){
        console.log(arr[i]);
    }
}
//or else
var arr=[]
var ans=[]
for(const value of arr){
    if(value%2==0)
    {
        ans.push(value)

    }
}
console.log(ans)

//or else
//arr methods-map,filter,reduce
//arr.map()=it takes entire ele frm an Array,it will take entire obj tgthr and provide variable,it will take one argmnt i.e; function argmnt,map=takes call back function
arr.map(function(element){
    console.log("printing the ele",element)
})
//arr.filter()=return a new arr by filtering the elements
//arr.reduce()=it is used to iterate the arry but reduce the entire array into one single element
var sum=arr.reduce(function(acc,ele){
    return acc+ele
})
console.log(sum);
reduce takes two arguments:acc=storing the ele
ele=returning element
var ans=arr.filter(function(value){
    return(value%2==0)
})
console.log(ans);