class Company:
    def __init__(self, cname, location) -> None:
        self.cname = cname
        self.location = location

    def companyDetails(self):
        print("Company Name:", self.cname, ", Location:", self.location)


class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def personDetails(self):
        print("Name:", self.name, ", Age:", self.age)


class Employee(Company, Person):
    def __init__(self, empName, empAge, cmpName, cmpLocation) -> None:
        Person.__init__(self, empName, empAge)
        # super().__init__(cmpName, cmpLocation)
        Company.__init__(self, cmpName, cmpLocation)


objEmp = Employee("John", 25, "Google", "USA")
objEmp.personDetails()
objEmp.companyDetails()
