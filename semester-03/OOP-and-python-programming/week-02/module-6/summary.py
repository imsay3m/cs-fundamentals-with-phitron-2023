class Book:
    def __init__(self, name) -> None:
        self.name = name

    def read(self):
        # pass
        raise NotImplementedError  # to inforce error in abstract class


class Physics(Book):
    def __init__(self, name, lab) -> None:
        self.lab = lab
        super().__init__(name)

    def read(self):
        print("Raeding Wave")


topon = Physics("Topon", True)

print(issubclass(Physics, Book))
print(isinstance(topon, Physics))
print(isinstance(topon, Book))

topon.read()
