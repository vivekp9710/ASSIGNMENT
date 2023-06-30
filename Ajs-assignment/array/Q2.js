// print every element of array by map and for loop

let arr = [1, 2, 3, 4, 5];

//use map
arr.map(Element => console.log("map:", Element));

//use reduce
arr.reduce((_, Element) => {
    console.log("reduce:", Element);
}, null);

//use loop
for (let i = 0; i < arr.length; i++) {
    console.log("loop:", arr[i]);
}