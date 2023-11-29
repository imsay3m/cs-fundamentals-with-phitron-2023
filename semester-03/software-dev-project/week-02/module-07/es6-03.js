//arrow function

function nFunc() {
    console.log("Normal Function")
    return ""
}

console.log(nFunc())


const aFunc = () => {
    console.log("Arrow Function")
    return ""
}

console.log(aFunc())



function test1(value) {
    return value * value * value
}

const test2 = (value) => value * value * value

console.log(test1(1), test2(2))