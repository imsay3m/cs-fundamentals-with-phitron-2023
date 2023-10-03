class Calculator:
    brand = "Casio MS81"

    def add(self, a, b):
        return a + b

    def sub(self, a, b):
        return abs(a - b)

    def mul(self, a, b):
        return a * b

    def div(self, a, b):
        return a / b


# creating object
calculate = Calculator()

print(calculate.add(10, 12))
print(calculate.sub(10, 12))
