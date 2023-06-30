// ---> make one object who contain your detail like - name,age,multiple vehicles
// -name,and one function print your name and then do below given task

// 1. print all value of your details object
// 2. add a function name printAge inside object who print age (from outside)
// 3. get all key
// 4. get all value
// 5. add one key for city name and store your city name on it  (from outside)
// 6. delete age key from object
// 7. make one function name addAge who print age with add some year which one pass by user
let name = "vivek";
let surname = "patel";


let Pdetails = {
    name: "vivek",
    surname: "patel",
    age: 25,
    vehicle: ["Glamour", "Splendorplus"],
    printName: function () {
        console.log("name:", this.name);

    },

};

//print all value of your details object
console.log("Pdetails:", Pdetails);

//add a function name printage inside object who print age (from outside)
Pdetails.printName = function () {
    console.log("age:", this.age);
};

//get all key
let keys = Object.keys(Pdetails);
console.log("keys:", keys);

//get all values
let values = Object.values(Pdetails);
console.log("values:", values);

//add one key for city name and store your city name on it  (from outside)

let cityName = "surat"
Pdetails.city = cityName;
console.log("city:", Pdetails.city);

//delete age key from object
delete Pdetails.age;
console.log("age:", Pdetails);


//make one function name addAge who print age with add some year which one pass by user
Pdetails.addAge = function (addyears) {
    console.log("age:", this.age + addyears);

}
Pdetails.addAge(15);

console.log(Pdetails);
