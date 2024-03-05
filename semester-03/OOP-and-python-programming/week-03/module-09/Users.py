from abc import ABC, abstractmethod
from datetime import datetime


class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name = company_name
        self.drivers = []
        self.riders = []
        self.rides = []

    def add_rider(self, rider):
        self.riders.append(rider)

    def add_driver(self, driver):
        self.drivers.append(driver)

    def __repr__(self) -> str:
        return f"{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}"


class User(ABC):
    def __init__(self, name, email, nid) -> None:
        self.name = name
        self.email = email
        self.nid = nid
        self.wallet = 0
        self.__id = 0
        # TODO: set user id dynamically

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Rider(User):

    def __init__(self, name, email, nid, current_location, initial_amount) -> None:
        self.current_ride = None
        self.wallet = initial_amount
        self.current_location = current_location
        super().__init__(name, email, nid)

    def display_profile(self):
        print("Rider Profile")
        print(f"Name: {self.name} and Email: {self.email}")

    def load_cash(self, amount):
        if amount > 0:
            self.wallet = +amount

    def update_location(self, current_location):
        self.current_location = current_location

    def request_ride(self, destination):
        if not self.current_ride:
            # DONE: Set ride properly
            ride_request = Ride_Request(self, destination)
            ride_matcher = Ride_Matching()
            self.current_ride = ride_matcher.find_driver(ride_request)
            # SOLVED: Set current ride via ride match

    def show_current_ride(self):
        if self.current_ride is None:
            return "No active ride."
        else:
            return f"Active Ride to {self.current_ride}"


class Driver(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location

    def display_profile(self):
        print("Driver Profile")
        print(f"Name: {self.name} and Email: {self.email}")

    def accept_ride(self, ride):
        ride.set_driver(self)


class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None
        self.estimated_fare = None

    def set_driver(self, driver):
        self.driver = driver

    def start_ride(self):
        self.start_time = datetime.now()

    def end_ride(self, rider, amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare

    def __repr__(self) -> str:
        return f"Ride Details, Started:{self.start_location} To:{self.end_location}, "


class Ride_Request:
    def __init__(self, rider, end_location) -> None:
        self.rider = rider
        self.end_location = end_location


class Ride_Matching:
    def __init__(self) -> None:
        self.available_drivers = []

    def find_driver(self, ride_request):
        if len(self.available_drivers) > 0:
            # TODO: find the closest driver of the rider
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_request, ride_request.end_location)
            driver.accept_ride(ride)
            return ride


class Vehicle(ABC):

    speed = {"car": 50, "bike": 60, "cng": 20}

    def __init__(self, vehicle_type, license_plate, rate) -> None:
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.rate = rate
        self.status = "available"
        super().__init__()

    def start_drive(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)

    def start_drive(self):
        self.status = "unavailable"


class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)

    def start_drive(self):
        self.status = "unavailable"


niye_jao = Ride_Sharing("Niye Jao")
sakib = Rider("Sakib Khan", "sakib@gmail.com", 12345, "Kazir Bazar", 1200)
niye_jao.add_rider(sakib)
kala_pakhi = Driver("Kala Pakhi", "kala@pakhi.com", 5678, "Rikabi Bazar")
niye_jao.add_driver(kala_pakhi)
print(niye_jao)
sakib.request_ride("lamabazar")
sakib.show_current_ride()
