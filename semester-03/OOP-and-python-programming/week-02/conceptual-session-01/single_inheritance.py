class Animal:
    def __init__(self, name) -> None:
        print("My name is", name)

    def eat(self):
        print("I can eat")


class Cat(Animal):
    def __init__(self, name) -> None:
        # super().__init__(name)
        Animal.__init__(self, name)

    def speak(self):
        print("I speak meow meow")


class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
        # Animal.__init__(self, name)

    def speak(self):
        print("I speak gheu gheu")


c = Cat("Max")
c.eat()
c.speak()

d = Dog("Tommy")
d.eat()
d.speak()
