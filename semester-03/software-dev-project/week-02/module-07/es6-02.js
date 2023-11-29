//Template string, _Spread operator, array max, copy arrays

const test = "world"

const name = `hello ${test}
bye world
again hello world`//multi-line string, dynamic string

// console.log(name)

const num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]

console.log(num)
console.log(...num)//spread operator
console.log(Math.max(num))//it wont work you have to spread the array
console.log(Math.max(...num))//array max

const newNum = ["rahim", "karim", ...num]//copying arrays
console.log(...newNum)

