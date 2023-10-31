class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.minWithdraw = 500
        self.maxWithdraw = 20000

    def getBalance(self):
        print(f"your remaining balance is: {self.balance}")

    def deposit(self, amount):
        if amount > 0:
            self.balance = self.balance + amount
            print(f"deposited in your account {amount}")
            self.getBalance()

    def withdraw(self, amount):
        if amount < self.minWithdraw:
            print(f"fokira you cannot withdraw below {self.minWithdraw}")
        elif amount > self.maxWithdraw:
            print(
                f"bank will go bankrupt, you cannot withdraw more than {self.maxWithdraw}"
            )
        else:
            self.balance = self.balance - amount
            print(f"here is your money {amount}")
            self.getBalance()


brac = Bank(15000)
brac.withdraw(25)
brac.withdraw(50000)
brac.withdraw(2000)


dbbl = Bank(5000)
dbbl.deposit(2000)
dbbl.withdraw(25)
dbbl.deposit(5000)
dbbl.withdraw(50000)
dbbl.withdraw(2000)
