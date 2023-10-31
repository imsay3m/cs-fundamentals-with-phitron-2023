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

    # override
    def eat(self):
        print("vegetables")

    # enforcing override
    def exercise(self):
        print("Gym a poisha diya hudai gham jorai")


sakib = Cricketer("Sakib", 38, 64, 91, "BD")
sakib.eat()
sakib.exercise()
