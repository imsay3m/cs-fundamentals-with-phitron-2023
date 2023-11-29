var numbers = ['rahim', "karim", 'abdul', 'heroalom', 'jobbar']
var max = 0, flag
for (let i = 0; i < numbers.length; i++) {
    if (numbers[i].length >= max) {
        max = numbers[i].length
        flag = i
    }
}
console.log(numbers[flag])