from abc import ABC, abstractmethod

# abstract base class


class Animal(ABC):
    @abstractmethod  # enforce all derived class to have a eat method
    def eat(self):
        print(f"I need Food")

    @abstractmethod
    def move(self):
        pass


class Monkey(Animal):
    def __init__(self, name) -> None:
        self.name = name
        self.catagory = "Monkey"
        super().__init__()

    def eat(self):
        print("I am eating banana")

    def move(self):
        print("Hanging on the branch")


layca = Monkey("Lucky")
layca.eat()
layca.move()
