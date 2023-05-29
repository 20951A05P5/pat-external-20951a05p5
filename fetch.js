function getUserData(){
    const data=fetch("https://randomuser.me/api/");
    console.log(data);
    data.then(function(res){
        const result=res.json()
        result.then(function(userData){
            console.log(userData);
        })
    })
    data.catch(function(err){
        console.log(err);
    })
}