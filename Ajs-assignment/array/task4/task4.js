// ['i','am', 'vivek'] ==> want ['keviv','ma','i']
// by use of map, loop

// - [vivek , am ,i]
// - vivek -> [v,i,v,e,k] -> [k,e,v,i,v] -> keviv

// let arr = ['i', 'am', 'vivek'];
// let revArr = arr.map((_, index) => arr[arr.length - 1 - index]).map((word) => word.split('').reverse().join('')).reduce
//     ((acc, value) => [...acc, value], []);

// console.log("revarr:", revArr);
let arr = ['i', 'am', 'vivek']//=>want ['vivek','am','i']
let revArr = [];
arr.reduce((last, e) => {
    console.log("e:", e);
    console.log("last:", last);
    last ? revArr.unshift(e, last) : revArr.unshift(e);
    last ? revArr.unshift(e, last) : revArr.unshift(e);
});

arr.reduce((last, e) => {
    revArr.unshift(e);
}, 0);

console.log("revarr:", revArr);

// revStr = [];
// // for (i = 0; i < arr.length; i++) {
// //   arr[i] = arr[i].split("").reverse().join("");
// // }

// ['i','am', 'vivek'] ==> want ['keviv','ma','i']

let reversArr = ["keviv", "am", "i"];
let ansArr = [];
for (let i = 0; i < reversArr.length; i++) {
    let p1 = reversArr[i].split(""); // => ['a','m']
    console.log("p1 :", p1);
    let p2 = p1.reverse(); // =>['m','a']
    console.log("p2 :", p2);
    let p3 = p2.join(""); // => "ma"
    console.log("p3 :", p3);
    ansArr.push(p3); // push in new array ["am"]
}
console.log("ansArr :", ansArr);


