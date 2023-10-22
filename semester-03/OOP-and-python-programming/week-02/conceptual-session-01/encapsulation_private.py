class Student:
    def __init__(self, name, id) -> None:
        self.name = name
        self.__id = id

    def studentDetails(self):
        print("Name:", self.name, ", ID:", self.__id)


ob = Student("Sayem", 185)

print("Before Changing")
ob.studentDetails()

ob.__id = 155
print("After Changing")
ob.studentDetails()

print(ob.__dict__)
