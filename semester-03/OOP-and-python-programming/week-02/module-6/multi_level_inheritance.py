class Vehicle:
    def __init__(self, name, color, price) -> None:
        self.name = name
        self.color = color
        self.price = price

    def move(self):
        pass

    def __repr__(self) -> str:
        return f"Name: '{self.name}', Color: '{self.color}', Price: {self.price}"


class Bus(Vehicle):
    def __init__(self, name, color, price, seat) -> None:
        self.seat = seat
        super().__init__(name, color, price)

    def __repr__(self) -> str:
        print(f"Seat: {self.seat}")
        return super().__repr__()


class Truck(Vehicle):
    def __init__(self, name, color, price, weight) -> None:
        self.weight = weight
        super().__init__(name, color, price)


class PickUpTruck(Truck):
    def __init__(self, name, color, price, weight) -> None:
        super().__init__(name, color, price, weight)


class ACBus(Bus):
    def __init__(self, name, color, price, seat, temparature) -> None:
        self.temparature = temparature
        super().__init__(name, color, price, seat)

    def __repr__(self) -> str:
        print(f"Temparature: {self.temparature}")
        return super().__repr__()


greenLine = ACBus("Green Line", "Green", 6000000, 22, 18)
print(greenLine)
