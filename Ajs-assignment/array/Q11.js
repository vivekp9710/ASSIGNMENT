// 11. sort a array in acending decending

let arr = [5, 6, 7, 8, 9, 4];
let ascarr = arr.sort((a, b) => a - b);
console.log("ascending:", ascarr);

let decarr = arr.sort((a, b) => b - a);
console.log("descending:", decarr);