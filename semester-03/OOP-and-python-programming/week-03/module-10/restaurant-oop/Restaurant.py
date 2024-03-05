class Restaurant:
    def __init__(self, name, rent, menu=[]) -> None:
        self.name = name
        self.chef = []
        self.server = []
        self.manager = []
        self.orders = []
        self.rent = rent
        self.menu = menu
        self.revenue = 0
        self.expense = 0
        self.balance = 0
        self.profit = 0

    def add_employee(self, employee_type, employee):
        if employee_type == "chef":
            self.chef.append(employee)
        elif employee_type == "manager":
            self.manager.append(employee)
        elif employee_type == "server":
            self.server.append(employee)

    def add_order(self, order):
        self.orders.append(order)

    def recieve_payment(self, order, amount, customer):
        if order.bill <= amount:
            self.revenue += order.bill
            self.balance += order.bill
            customer.due_amount = 0
            return amount - order.bill
        else:
            print("###Not enough money pay more###")

    def pay_expense(self, amount, description):
        if amount < self.balance:
            self.expense += amount
            self.balance -= amount
            print(f"Expense {amount} for {description}.")
        else:
            print(f"Not enough money to pay {amount}")

    def pay_salary(self, employee):
        print(f"Paying for {employee.name} salary: {employee.salary}")
        if employee.salary < self.balance:
            self.balance -= employee.salary
            self.expense += employee.salary
            employee.recieve_salary()
        else:
            print(f"###Not enough money in the cash register.###")

    def show_employees(self):
        print("\n\nSHOWING EMPLOYEES")
        print("------------------------")
        for manager in self.manager:
            print(f"Manager Name: {manager.name}, Salary: ${manager.salary}")
        print("------------------------")
        for chef in self.chef:
            print(f"Chef Name: {chef.name},  Salary: ${chef.salary}")
        print("------------------------")
        for server in self.server:
            print(f"Server Name: {server.name},  Salary: ${server.salary}")
        print("------------------------")
