class Shop:
    shoppingMall = "blue water"  # class attribute

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []  # instance attribute

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
