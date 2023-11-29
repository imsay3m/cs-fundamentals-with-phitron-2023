var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10]

for (let i = 1; i <= numbers.length; i++) {
    if (numbers[i - 1] == numbers[i]) {
        continue
    }
    console.log(numbers[i - 1])
}