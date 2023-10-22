class GrandFather:
    def __init__(self) -> None:
        pass

    def property(self):
        print("I have 5 corer taka")


class Father(GrandFather):
    def __init__(self) -> None:
        super().__init__()

    def property(self):
        print("I have 3 corer taka")

    def fatherProperty(self):
        return super().property()


class Child(Father):
    def __init__(self) -> None:
        super().__init__()

    def property(self):
        print("I have 1 corer taka")

    def fatherProperty(self):
        return super().property()

    def grandFatherProperty(self):
        return super().fatherProperty()


ami = Child()
ami.property()
ami.fatherProperty()
ami.grandFatherProperty()
