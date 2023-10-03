class Shop:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def addToCart(self, item, price, quantity):
        self.item = item
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            total = total + item["price"] * item["quantity"]
        print("Total price to pay:", total)
        if amount < total:
            print(f"plese provide {total-amount} more")
        else:
            extra = amount - total
            print(f"here is your items and extra money {extra}")

    def removeFromCart(self, item):
        for product in self.cart:
            if product["item"] == item:
                self.cart.remove(product)
                print(f"{item} has been removed from the cart.")
                return
        print(f"{item} is not found in the cart.")


shopon = Shop("Alan Shopon")
shopon.addToCart("alu", 40, 5)
shopon.addToCart("dim", 12, 24)
shopon.addToCart("rice", 50, 5)
shopon.checkout(600)
shopon.removeFromCart("rice")
shopon.checkout(600)
