class Food:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
        self.cooking_time = 15


class Burger(Food):
    def __init__(self, name, price, meat, ingrediants) -> None:
        super().__init__(name, price)
        self.meat = meat
        self.ingrediants = ingrediants


class Pizza(Food):
    def __init__(self, name, price, size, toppings) -> None:
        super().__init__(name, price)
        self.size = size
        self.topping = toppings


class Drinks(Food):
    def __init__(self, name, price, is_cold=True) -> None:
        super().__init__(name, price)
        self.is_cold = is_cold


# composition
class Menu:
    def __init__(self):
        self.burger = []
        self.pizzas = []
        self.drinks = []

    def add_menu_item(self, item_type, item):
        if item_type == "pizza":
            self.pizzas.append(item)
        elif item_type == "burger":
            self.burger.append(item)
        elif item_type == "drinks":
            self.drinks.append(item)

    def remove_menu_item(self, item_type, item):
        if item_type == "pizza":
            self.pizzas.remove(item)
        elif item_type == "burger":
            self.burger.remove(item)
        elif item_type == "drinks":
            self.drinks.remove(item)

    def show_menu(self):
        print("\n\nSHOWING MENU")
        print("------------------------")
        for pizza in self.pizzas:
            print(f"Pizza Name: {pizza.name}, Price: ${pizza.price}")
        print("------------------------")
        for burger in self.burger:
            print(f"Burger Name: {burger.name},  Price: ${burger.price}")
        print("------------------------")
        for drink in self.drinks:
            print(f"Drinks Name: {drink.name},  Price: ${drink.price}")
        print("------------------------")
