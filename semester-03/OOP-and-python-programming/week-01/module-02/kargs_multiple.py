def fullName(fname, lname):
    name = f"Full Name: {fname} {lname}"
    return name


# name = fullName("sayem", "ahmed")
name = fullName(lname="ahmed", fname="sayem")
print(name)


# "SyntaxError: positional argument follows keyword argument" occurs when we pass keyword arguments before positional ones in a call to a function. To solve the error, pass positional arguments in the right order and pass any keyword arguments after the positional ones.
def famousName(*args, first, last):
    name = f"{first} {last} {args}"
    return name


name = famousName("Eng.", first="Sayem", last="Ahmed")
print(name)


def aLot(a, b):
    sum = a + b
    mul = a * b
    sub = a - b
    div = a / b
    return sum, mul, sub, div
    # return [sum, mul, sub, div]


print(aLot(6, 3))
