from Menu import Burger, Drinks, Menu, Pizza
from Order import Order
from Restaurant import Restaurant
from Users import Chef, Customer, Employee, Manager, Server


def main():
    # print("main as cpp")
    menu = Menu()

    # add pizza to the menu
    pizza_1 = Pizza("Shutki Pizza", 700, "Large", ["shutki", "mushrooms"])
    menu.add_menu_item("pizza", pizza_1)
    pizza_2 = Pizza("Alur Vorta Pizza", 600, "Large", ["potato", "onion"])
    menu.add_menu_item("pizza", pizza_2)
    pizza_3 = Pizza("Dal Pizza", 800, "Large", ["dal", "oil"])
    menu.add_menu_item("pizza", pizza_3)

    # add burger to the menu
    burger_1 = Burger("Naga Burger", 400, "Chicken", ["bread", "chili"])
    menu.add_menu_item("burger", burger_1)
    burger_2 = Burger("Beef Burger", 450, "Beef", ["bread", "crispy"])
    menu.add_menu_item("burger", burger_2)
    burger_3 = Burger("Cheese Burger", 300, "Chiken", ["bread", "extra cheese"])
    menu.add_menu_item("burger", burger_3)

    # add drinks to the menu
    coke = Drinks("Coke", 25, True)
    menu.add_menu_item("drinks", coke)
    coffe_1 = Drinks("Mocha", 320, False)
    menu.add_menu_item("drinks", coffe_1)
    fanta = Drinks("Fanta", 20, True)
    menu.add_menu_item("drinks", fanta)
    # show menu
    # menu.show_menu()

    restaurant_1 = Restaurant("Doyal Khana Restaurant", 2000, menu)
    # add manager to the restaurent
    manager_1 = Manager(
        "Kala Chan Manager",
        +88012421,
        "kala@chan.com",
        "Kaliapur",
        1500,
        "Jan 01 2024",
        "core",
    )
    restaurant_1.add_employee("manager", manager_1)

    # add chef to the restaurent
    chef_1 = Chef(
        "Rustom Baburchi",
        5398,
        "rustom@baburchi.com",
        "Rustam Nagar",
        3200,
        "Nov 11 2023",
        "Chef",
        "everything",
    )
    restaurant_1.add_employee("chef", chef_1)

    # add server to the restaurent
    server_1 = Server(
        "Chotu Server",
        9743,
        "chotu@server.com",
        "restaurant",
        200,
        "March 01 2022",
        "Server",
    )
    restaurant_1.add_employee("server", server_1)
    server_2 = Server(
        "Chotu Ka Bhai Server",
        3438,
        "chotukabhai@server.com",
        "restaurant",
        150,
        "June 01 2022",
        "Server",
    )
    restaurant_1.add_employee("server", server_2)

    # show employees
    # restaurant_1.show_employees()

    # customer_1 placing a order
    customer_1 = Customer("Sakib Khan", 100000, 7643296, "king@khan.com", "banani")

    # order
    order_1 = Order(customer_1, [pizza_1, burger_1, coffe_1])
    customer_1.pay_for_order(order_1.bill)
    restaurant_1.add_order(order_1)

    # customer_1 paying for order_1
    restaurant_1.recieve_payment(order_1, 2000, customer_1)
    print("\n\nAfter First Customer Payment: ")
    print(f"Revenue: {restaurant_1.revenue}  Balance:{restaurant_1.balance}\n\n")

    # customer_2 placing a order
    customer_2 = Customer("Sakib Khan", 100000, 7643296, "king@khan.com", "banani")

    # order
    order_2 = Order(customer_2, [pizza_2, pizza_3, burger_2, coffe_1, fanta])
    customer_2.pay_for_order(order_2.bill)
    restaurant_1.add_order(order_2)

    # customer_2 paying for order_2
    restaurant_1.recieve_payment(order_2, 4000, customer_2)
    print("\n\nAfter Second Customer Payment: ")
    print(f"Revenue: {restaurant_1.revenue}  Balance:{restaurant_1.balance}\n\n")

    # pay expenses
    restaurant_1.pay_expense(restaurant_1.rent, "Rent")
    print("\n\nAfter Rent Paying: ")
    print(f"Revenue: {restaurant_1.revenue}  Balance:{restaurant_1.balance}\n\n")

    # pay employee salary
    restaurant_1.pay_salary(server_1)
    print("\n\nAfter Salary Paying: ")
    print(f"Revenue: {restaurant_1.revenue}  Balance:{restaurant_1.balance}\n\n")


# call the main method
if __name__ == "__main__":
    main()
