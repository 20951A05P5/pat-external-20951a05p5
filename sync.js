/*setTimeout(function() {
    console.log("after 5 secs)
    }
    ,1000)
 */ 
const prm=new Promise(function(resolve,reject){
    console.log("fetching data frm db");
    setTimeout(()=>{
        //resolve("got the data")
        //reject("failed")
    },3000);
})

//prm.then()=to handle success
//prm.catch()=to handle failure

prm.then(function(result){
    console.log("in the method")
    console.log(result)
})

prm.catch(function(err){
    console.log("in catch method")
    console.log(err);
})
