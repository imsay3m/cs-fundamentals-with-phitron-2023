# raedonly --> you can set the value. value cannot be changed
# getter --> get value of a property through a method. Most of the time, you will get the value of a private attribute
# setter --> set a value of a property through a method. Most of the time you will set the value of a private property


class User:
    def __init__(self, name, age, money) -> None:
        self._name = name
        self._age = age
        self.__money = money

    # getter without any setter is readonly attribute
    @property
    def age(self):
        return self._age

    # getter
    @property
    def salary(self):
        return self.__money

    @salary.setter
    def salary(self, value):
        if value < 0:
            return "salary cannot be nagative"
        self.__money += value


samsu = User("Kopa", 21, 12000)
# print(samsu.__money)
# print(samsu._age)
# print(samsu.age())
print(samsu.age)  # age is attribute property

# print(samsu.salary())
print(samsu.salary)  # salary is attribute property
samsu.salary = 4500  # readonly value cannot be changed
print(samsu.salary)
