# global variable
balance = 3000

# you can access global variable in local scope but you can't modify it without using "global" keyword


def bought(item, price):
    # local

    # balance = 500
    # balance = balance - 1000
    # global changing
    global balance
    balance = balance - price
    print(f"Balance after buying {item}:", balance)


bought("sunglass", 1000)
