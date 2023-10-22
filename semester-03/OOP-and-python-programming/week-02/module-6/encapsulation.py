# to make private add __ before identifier
# encapsulation --> hide details


class Bank:
    def __init__(self, holderName, initialDeposit) -> None:
        self.holderName = holderName  # public
        self._branch = "banani 11"  # protected
        self.__balance = initialDeposit  # private

    def deposit(self, amount):
        self.__balance += amount

    def getBalance(self):
        return self.__balance  # public

    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return f"withdrawn:{amount}"
        else:
            return f"Fokira Taka nai"


rafsun = Bank("Chutoo Bro", 10000)
rafsun.holderName = "Big bro"
print(rafsun.holderName)
print(rafsun._branch)
rafsun.deposit(40000)
rafsun.__balance = 0
print(rafsun.withdraw(60000))
print(rafsun.getBalance())

print(dir(rafsun))
print(rafsun._Bank__balance)
