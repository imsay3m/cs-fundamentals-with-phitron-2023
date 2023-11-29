//Object and Array Destructuring

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

const [i, j, k] = numbers;
// console.log(i, j, k)


const obj = {
    name: "sayem",
    age: 21,
    school: "almsc",
    github: true,
    status: "single"
}

const name = obj.name
const age = obj.age

const { github, status, school } = obj

// console.log(name, age, github, status, school)

const test = [{
    name: "sayem",
    age: 22,
    friends: ["rahim", "karim",{name:'hey'}],
    github: false
}, {}, {}]
console.log(test.length)
console.log(test[0].friends[1])