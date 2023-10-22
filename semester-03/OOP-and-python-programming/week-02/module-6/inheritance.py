# base class, common attribute+functionality class
# derived class, child class, uncommon attribute+functionality class


class Gadget:
    def __init__(self, brand, price, color, origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f"Running Gadget: {self.brand}"


class Laptop:
    def __init__(self, memory, ssd) -> None:
        self.memory = memory
        self.ssd = ssd

    def coding(self):
        return f"learning python and practicing"


class Phone(Gadget):
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)

    def __repr__(self):
        return f"Phone: {self.brand} {self.price} {self.color} {self.dual_sim}"

    def phone_call(self, number, text):
        return f"Sending SMS to: {number} with: {text}"


class Camera:
    def __init__(self, pixel) -> None:
        self.pixel = pixel

    def change_lens(self):
        pass


# inheritance
myPhone = Phone("Iphone", 120000, "black", "china", True)
print(myPhone)
