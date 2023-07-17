// task-3
// 1. ['i','am', 'vivek'] ==> want ['vivek','am','i']
// by use of map and loop
// 2. want "i am vivek" without use join method

//Q1
let arr = ['i', 'am', 'vivek'];
let revArr = arr.map((_, index) => arr[arr.length - 1 - index]).reduce((acc, value) => [...acc, value], []);
console.log("reversearr:", revArr);

let result = '';
for (let i = 0; i < arr.length; i++) {
    result += arr[i];
    if (i !== arr.length - 1) {
        result += '';
    }
}
console.log("loop:", result);