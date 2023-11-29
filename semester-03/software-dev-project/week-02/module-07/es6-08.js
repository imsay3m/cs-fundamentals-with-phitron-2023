//Sycronus-Asyncronus

console.log(1)
console.log(2)
console.log(3)
console.log(4)
// console.log(5)
api()
name(6)
console.log(7)
console.log(8)
console.log(9)
console.log(10)


function api() {
    fetch("https://dummyjson.com/products/1")
        .then(res => res.json())
        .then(data => console.log(data))
}

function name(x) {
    setTimeout(() => {
        console.log(x)
        console.log("delayed for 1 sec")
    }, 1000);
}