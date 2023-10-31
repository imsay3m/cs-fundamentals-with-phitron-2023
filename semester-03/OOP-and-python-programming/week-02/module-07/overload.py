class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("Vat mangso pulao kurma")

    def exercise(self):
        raise NotImplementedError


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)

    def eat(self):
        print("vegetables")

    def exercise(self):
        print("Gym a poisha diya hudai gham jorai")

    def __add__(self, other):  # dunder method/magic method
        return self.age + other.age

    def __mul__(self, other):
        return self.height * other.height

    def __len__(self):
        return self.height

    def __gt__(self, other):
        return self.weight < other.weight


sakib = Cricketer("Sakib", 38, 64, 91, "BD")
mushi = Cricketer("mushi", 39, 61, 78, "bd")


# operator overload
print(45 + 63)
print("sakib" + "rakib")
print([12, 98] + [5, 6, 7, 9])
print(sakib + mushi)
print(sakib * mushi)
print(sakib < mushi)
print(len(mushi))
