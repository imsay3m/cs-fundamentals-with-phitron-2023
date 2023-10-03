class Shop:
    cart = []  # class attribute

    def __init__(self, buyer):
        self.buyer = buyer

    def addToCart(self, item):
        self.item = item
        self.cart.append(item)


sayem = Shop("Sayem")

sayem.addToCart("body spray")
sayem.addToCart("blue cut glass")

print(sayem.cart)

she = Shop("She")
she.addToCart("iphone")
she.addToCart("phone cover")
print(she.cart)
