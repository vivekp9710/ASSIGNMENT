// -> give the list which variable name not works in js
// 1. let a=0
// 2. let "a"=0
// 3. let 'a'=0
// 4. let `10`=0
// 5. let 1=0

// let a = 0; //valid 

// let "a" = 0; //variable name cannot be closed in double qoutes//

// let 'a' = 0; //variable cannot closed in single qoute//

// let`10` = 0; //variable cannot  start with the number//

// let 1 = 0;// variable cannot consist number 

//task 1

// let x = 100
// var y = 100
// const z = 100
// const m
// {
//       x= 90
//       y= 90
//       z= 90
//       console.log(x) ___________________ point-x1
//       console.log(y) ___________________ point-y1
//       console.log(z) ___________________ point-z1
//       console.log(m) ___________________ 
// } 

// console.log(x) ___________________ point-x2
// console.log(y) ___________________ point-y2
// console.log(z) ___________________ point-z2

// what will print at x1-____90___
// what will print at y1-____90_
// what will print at z1-____100___
// what will print at x2-____90___
// what will print at y2-____90___
// what will print at z2-____100___

let x = 100;
var y = 100;
const z = 100;
//const m ;

{
    x = 90;
    y = 90;
    // z = 90;
    console.log(x) // point-x1:90
    console.log(y)//point -y1:90
    console.log(z)//point-z1:100
    //console.log(m) undefined
}
console.log(x)//point-x2:90
console.log(y)//point-y2:90
console.log(z)//point-z2:100


//task 2

// console.log(x) ___________________ point-x2
// console.log(y) ___________________ point-y2
// console.log(z) ___________________ point-z2

// {
//       let x = 100
//       var y = 100
//       const z = 100
// }

// console.log(x) ___________________ point-x1
// console.log(y) ___________________ point-y1
// console.log(z) ___________________ point-z1


// what will print at x1-_______
// what will print at y1-_______
// what will print at z1-_______
// what will print at x2-_______
// what will print at y2-_______
// what will print at z2-_______

console.log(x)// point-x2
console.log(y) // point-y2
console.log(z)// point-z2
{
    let x = 100;
    var y = 100;
    const z = 100;
}
console.log(x)//point-x1:100
console.log(y)//point-y1:100
console.log(z)//point-z1:100