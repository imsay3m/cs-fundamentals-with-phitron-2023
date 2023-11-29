//map, filter, find
const num = [2, 2]
const temp = []
for (let i = 0; i < num.length; i++) {
    const element = num[i]
    const square = element * element
    temp.push(square)
}
// console.log(temp)


//map will return a new array with modification or not
const square = num.map(x => x * x)
// console.log(square)



//filter return a new array(filtered by condition)
const products = [
    { id: 1, name: "apple", price: 500, color: "black" },
    { id: 2, name: "samsung", price: 450, color: "navy blue" },
    { id: 3, name: "oppo", price: 400, color: "blue" },
    { id: 4, name: "oneplus", price: 380, color: "red" },
    { id: 4, name: "pixel", price: 390, color: "black" },
]

const result = products.filter(pd => pd.color != "black")
// console.log(result)


//find only return single element of array(first one) if not found then it will return undefined
const result2 = products.find(pd => pd.color == 'black')
// console.log(result2)
// console.log(result2.name)