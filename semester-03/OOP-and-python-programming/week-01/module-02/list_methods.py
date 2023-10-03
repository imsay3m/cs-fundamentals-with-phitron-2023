numbers = [12, 45, 98, 68]

numbers.append(56)
print(numbers)


numbers.insert(2, 71)
print(numbers)

if 8 in numbers:
    numbers.remove(8)

last = numbers.pop()
print(last, numbers)

if 71 in numbers:
    index = numbers.index(71)
    print(index, numbers)

numbers.sort
print(numbers)
