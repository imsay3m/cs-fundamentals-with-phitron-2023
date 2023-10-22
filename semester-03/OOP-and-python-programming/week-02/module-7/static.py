class Shoping:
    cart = []  # class/static attribute
    origin = "china"

    def __init__(self, name, location) -> None:
        self.name = name  # instance/object attribute
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f"buying: {item}  for price: {price}  and remaining amount: {remaining}")

    @classmethod
    def hudaiDekhi(cls, item):
        print("AC er batash khaite aisi ", item)

    @staticmethod
    def multiply(a, b):
        # print(self.name, a * b)
        print(a * b)


bashundara = Shoping("Bashundhara", "Dhaka Bashundhara")
# bashundara.purchase("Lungi", 500, 1000)
# bashundara.hudaiDekhi("lungi")

# class method calling
Shoping.hudaiDekhi("lungi")
# static method calling
Shoping.multiply(2, 3)
bashundara.multiply(2, 3)
