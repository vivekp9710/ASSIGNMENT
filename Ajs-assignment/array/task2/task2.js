// task-2
// [1,2,3,6,7,9,3,56,8]

// 1. give all value which can devided by 2 - not use filter
// 2. give all value above 3 by use of filter
// 3. give index of 56
// 4. give true/false result when check given value is exists in array or not



//Q1 1. give all value which can devided by 2 - not use filter
const arr = [1, 2, 3, 6, 7, 9, 3, 56, 8];
const divideby2 = [];
for (let i = 0; i < arr.length; i++) {
    if (arr[i] % 2 === 0) {
        divideby2.push(arr[i]);
    }
}
console.log("divideby2:", divideby2);


//Q2 give all value above 3 by use of filter
const above3 = arr.filter((value) => value > 3);
console.log("above3:", above3);

//Q3  give index of 56
const index = arr.indexOf(56);
console.log("indexof:", index);

//Q4give true/false result when check given value is exists in array or not

const isexists = arr.includes(56);
console.log("exists:", isexists);