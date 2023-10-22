from math import pi


class Shape:
    def __init__(self, name) -> None:
        self.name = name


class Rectangle(Shape):
    def __init__(self, name, length, width) -> None:
        self.length = length
        self.width = width
        super().__init__(name)

    def area(self):
        return self.length * self.width


class Circle(Shape):
    def __init__(self, name, radius) -> None:
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi * (self.radius**2)


p1 = Rectangle("Problem 1", 5, 6)
print(p1.area())

p2 = Circle("Problem 2", 5)
print(p2.area())
