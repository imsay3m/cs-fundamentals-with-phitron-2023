from abc import ABC, abstractmethod


class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name = company_name
        self.drivers = []
        self.riders = []

    def add_driver(self, driver):
        self.drivers.append(driver)

    def add_rider(self, rider):
        self.riders.append(rider)

    def __repr__(self) -> str:
        return f"{self.company_name} with {len(self.drivers)} drivers and {len(self.riders)} riders."


class User(ABC):
    def __init__(self, name, email, nid) -> None:
        self.name = name
        self.email = email
        self.nid = nid

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError


class Driver(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        # self.wallet = wallet
        self.current_location = current_location

    def display_profile(self):
        print(f"Driver name is {self.name} and email is {self.email}")


class Rider(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.current_ride = None

    def display_profile(self):
        print(f"Rider name is {self.name} and email is {self.email}")

    def ride_request(self, company, destination):
        if self.current_ride is None:
            request = Ride_Matching(company.drivers)
            res = request.has_driver(self, destination)
            print(f"Ride Request: {res}")
            self.current_ride = res
            # self.current_location = destination
        else:
            print("Already in a ride")


class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None

    def start_ride(self):
        pass

    def end_ride(self):
        pass

    def __repr__(self) -> str:
        return f"Start From {self.start_location} to {self.end_location}"


class Ride_Matching:
    def __init__(self, drivers) -> None:
        self.drivers = drivers

    def has_driver(self, rider, destination):
        if len(self.drivers) > 0:
            ride = Ride(rider.current_location, destination)
            return ride
        else:
            print("No available drivers")


uber = Ride_Sharing("UBER")

john = Driver("John", "john@gmail.com", 1234567890, "Chittagong A Block")

sakib = Rider("Sakib", "sakib@gmail.com", 9876543210, "Chittagong B Block")

uber.add_driver(john)
uber.add_rider(sakib)
sakib.ride_request(uber, "Chittagong C Block")
