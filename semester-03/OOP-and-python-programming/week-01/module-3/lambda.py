# normal function
# def double(n):
#     return n * 2

# lambda function
double = lambda n: n * 2
# result = double(int(input()))
result = double(5)

square = lambda n: n**2
# output = square(int(input()))
output = square(5)


add = lambda a, b: a + b
sum = add(result, output)

print(f"{result} + {output} = {sum}")


numbers = [12, 56, 98, 78, 56, 12, 6, 98]
doubleNum = map(lambda x: x * 2, numbers)
squareNum = map(lambda x: x**2, numbers)
print(list(doubleNum))
print(list(squareNum))


actors = [
    {"name": "sabana", "age": 65},
    {"name": "sabnoor", "age": 45},
    {"name": "sabila", "age": 30},
    {"name": "srabonti", "age": 38},
    {"name": "shaon", "age": 47},
]

juniors = filter(lambda x: x["age"] < 40, actors)
fivers = filter(lambda x: x["age"] % 5 == 0, actors)
print(list(juniors))
print(list(fivers))
