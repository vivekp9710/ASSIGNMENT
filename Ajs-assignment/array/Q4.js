// print a array till element value not grater then 100

let arr = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120];
for (let i = 0; i < arr.length; i++) {
    if (arr[i] > 100) {
        break;
    }
    console.log("element:", arr[i]);
}