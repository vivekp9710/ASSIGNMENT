// / 13. reverce an array with use of for-loop

let arr = [10, 20, 30, 40, 50];
let length = arr.length;

//using for loop

for (let i = 0; i < Math.floor(length / 2); i++) {
    let temp = arr[i];
    arr[i] = arr[length - 1 - i];
    arr[length - 1 - i] + temp;
}

