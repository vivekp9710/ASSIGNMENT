// / 10. do sum of all value of an array with use of map, reduce and for-loop

let arr = [1, 2, 3, 4, 5];
//using map

let sum = arr.map(Element => Element).reduce((acc, value) => acc + value, 0);
console.log(sum);

//using loop

let sum1 = 0;
for (let i = 0; i < arr.length; i++) {
    sum1 += arr[i];
}
console.log(sum1);