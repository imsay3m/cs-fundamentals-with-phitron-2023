# in Python, method overloading is not directly supported
class Calculator:
    def add(self, a, b):
        print(a + b)

    def add(self, a, b, c=0):
        print(a + b + c)


calc = Calculator()
calc.add(1, 2, 3)
calc.add(1, 2)

""" 
In Python, the last defined method with the same name in a class will override any previous methods with the same name. So, in your code, only the second `add` method with three parameters will be available, and the first one with two parameters will be overridden.
"""
