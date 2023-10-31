# list --> []
# tuple --> ()
# set --> {}

# set: unique items collection (no duplicate)
numbers = [12, 56, 98, 78, 12, 6, 98]
print(numbers)

numbersSet = set(numbers)
print(numbersSet)

numbersSet.add(55)
numbersSet.add(12)
print(numbersSet)

numbersSet.remove(12)
print(numbersSet)

if 98 in numbersSet:
    print("exists")
else:
    print("doesnt exists")

# numbersSet[3] = 57
# print(numbersSet[2])

A = {1, 3, 5, 7}
B = {1, 2, 3, 4, 5, 6, 7}
print(A & B)
print(A | B)  # AUB
