var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10]

function cmp(a,b){
    return a-b
}
numbers.sort(cmp)
console.log(numbers[numbers.length-1])