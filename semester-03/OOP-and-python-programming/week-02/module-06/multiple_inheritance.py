class Family:
    def __init__(self, address) -> None:
        self.address = address


class School:
    def __init__(self, id, level) -> None:
        self.id = id
        self.level = level


class Sports:
    def __init__(self, game) -> None:
        self.game = game


class Student(Family, School, Sports):
    def __init__(self, address, id, level, game) -> None:
        Family.__init__(self, address)
        School.__init__(self, id, level)
        Sports.__init__(self, game)
        super().__init__(address)
