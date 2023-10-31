class Student:
    def __init__(self, name, cls, id):
        self.name = name
        self.cls = cls
        self.id = id

    def __repr__(self):
        return f"Student with name: {self.name}, class: {self.cls}, id: {self.id}"


class Teacher:
    def __init__(self, name, course, courseCode):
        self.name = name
        self.course = course
        self.courseCode = courseCode

    def __repr__(self):
        return f"Teacher: {self.name}, Course: {self.course}, Course Code: {self.courseCode} "


class School:
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []

    def __repr__(self):
        print("Welcome to", self.name)
        print("_______________OUR TEACHERS_________________")
        for teacher in self.teachers:
            print(teacher)
        print("_______________OUR STUDENTS_________________")
        for student in self.students:
            print(student)
        return "____________________END____________________"

    def addTeacher(self, name, course):
        courseCode = len(self.teachers) + 201
        teacher = Teacher(name, course, courseCode)
        self.teachers.append(teacher)

    def enroll(self, name, cls, fee):
        if fee < 6500:
            return "Not enough fee"
        else:
            id = len(self.students) + 1
            student = Student(name, cls, id)
            self.students.append(student)
            return f"{name} is enrolled with id:{id}, extra money {fee-6500}"


# sayem = Student("sayem", 14, 185)
# print(sayem)

# nasif = Teacher("Nasif", "Data Structure", 121)
# print(nasif)

mu = School("Metropolitan University")
mu.enroll("sayem", 14, 15000)
mu.enroll("kawsar", 14, 70000)
mu.enroll("kaw", 14, 6500)
mu.enroll("vaijan", 14, 100000)

mu.addTeacher("nasif", "data structure")
mu.addTeacher("tajkia", "Algorithm Design")
mu.addTeacher("limon", "Object oriented Programming")

print(mu)
