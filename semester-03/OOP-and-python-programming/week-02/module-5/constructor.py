class Phone:
    manufatured = "China"

    # constructor
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    # method
    def senSMS(self, phone, sms):
        text = f"sending sms to: {phone} {sms}"
        print(text)


myPhone = Phone("sayem", "Oppo", 39000)
print(myPhone.owner, myPhone.brand, myPhone.price)


herPhone = Phone("She", "Iphone", 120000)
print(herPhone.owner, herPhone.brand, herPhone.price)


dadPhone = Phone("abbu", "Nokia", 3000)
print(dadPhone.owner, dadPhone.brand, dadPhone.price)
