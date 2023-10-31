class CPU:
    def __init__(self, cores) -> None:
        self.cores = cores


class RAM:
    def __init__(self, size) -> None:
        self.size = size


class ssd:
    def __init__(self, capacity) -> None:
        self.capacity = capacity


# computer has a cpu
# computer has a ram
# computer has a ssd


class Computer:
    def __init__(self, coreCount, ramSize, ssdCapacity) -> None:
        self.cpu = CPU(coreCount)
        self.ram = RAM(ramSize)
        self.ssd = ssd(ssdCapacity)


asus = Computer(4, 16, 512)
