var arr = [2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11, 19, 13, 17, 15, 12, 20, 14, 18, 16]

/* function cmp(a, b) {
    return a - b;
}
arr.sort(cmp)
console.log(arr) */

for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[i] < arr[j]) {
            var temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
        }
    }
}
console.log(arr)