# singleton --> one single instance
# if you want a new instance, you will get the old one (already created) instance


class Singleton:
    __instance = None

    def __init__(self) -> None:
        if Singleton.__instance is None:
            Singleton.__instance = self
        else:
            raise Exception(
                "This is a singleton. already have an instance, use that one by calling getInstance method"
            )

    @staticmethod
    def getInstance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance


first = Singleton.getInstance()
second = Singleton.getInstance()
third = Singleton.getInstance()
print(first)
print(second)
print(third)
last = Singleton()


""" 
The code you provided is implementing a Singleton design pattern in Python. The Singleton pattern is a creational design pattern that ensures a class has only one instance and provides a global point of access to that instance. This pattern is often used when you want to restrict the instantiation of a class to a single instance.

Here's an explanation of the code:

1. `class Singleton`: This is the definition of the Singleton class. The class has a private class variable called `__instance`, which is initially set to `None`. This variable will store the single instance of the class.

2. `__init__(self)`: The constructor of the Singleton class. It checks if the `__instance` variable is `None`. If it is, it assigns the current instance (`self`) to the `__instance` variable, effectively creating the single instance. If the `__instance` is not `None`, it raises an exception to prevent creating more than one instance.

3. `@staticmethod getInstance()`: This is a static method that provides a way to access the single instance of the Singleton class. It checks if the `__instance` is `None`. If it is, it creates a new instance by calling `Singleton()`. If an instance already exists, it returns the existing instance.

4. `first`, `second`, `third`: These three variables are assigned the result of calling `Singleton.getInstance()`, effectively obtaining the single instance of the Singleton class.

5. `print(first)`, `print(second)`, `print(third)`: This code prints the memory address of the `first`, `second`, and `third` instances, which should all be the same, indicating that they refer to the same object in memory.

6. `last = Singleton()`: This line attempts to create a new instance of the Singleton class using the constructor, which will raise an exception since the Singleton pattern restricts the creation of multiple instances.

In summary, the Singleton pattern ensures that a class has only one instance, and it provides a way to access that instance. The code you provided demonstrates this pattern in action, allowing you to create and access a single instance of the `Singleton` class while preventing the creation of additional instances.
"""
