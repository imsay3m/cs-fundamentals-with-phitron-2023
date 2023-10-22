class Student:
    def __init__(self, name, id) -> None:
        self.name = name
        self.id = id

    def studentDetails(self):
        print("Name:", self.name, ", ID:", self.id)


ob = Student("Sayem", 185)

print("Before Changing")
ob.studentDetails()

ob.id = 155
print("After Changing")
ob.studentDetails()
