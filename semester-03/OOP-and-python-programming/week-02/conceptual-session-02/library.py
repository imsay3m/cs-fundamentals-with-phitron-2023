class Book:
    def __init__(self, id, name, quantity) -> None:
        self.id = id
        self.name = name
        self.quantity = quantity


class User:
    def __init__(self, username, name, password) -> None:
        self.username = username
        self.name = name
        self.password = password
        self.borrowedBooks = []
        self.returnedBooks = []


class Library:
    def __init__(self, name) -> None:
        self.name = name
        self.users = []
        self.books = []

    def addUser(self, username, name, password):
        user = User(username, name, password)
        self.users.append(user)
        return user

    def addBook(self, id, name, quantity):
        book = Book(id, name, quantity)
        self.books.append(book)
        print(f"{book.name} added successfully!\n")

    def borrowBook(self, user, token):
        for book in self.books:
            # if book.id==token:
            if book.name == token:
                if book in user.borrowedBooks:
                    print("Already Borrowed!\n")
                    return
                elif book.quantity == 0:
                    print("No Copy Available!\n")
                    return
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print(f"Borrowed Book: {book.name} successfully!\n")
                    return
        print(f"Not found any book with {token}!\n")

    def returnBook(self, user, token):
        for book in self.books:
            # if book.id==token:
            if book.name == token:
                if book in user.borrowedBooks:
                    user.returnedBooks.append(book)
                    user.borrowedBooks.remove(book)
                    book.quantity += 1
                    print(f"Returned Book: {book.name} successfully!\n")
                    return
        print(f"Not found any book with {token}!\n")


bsk = Library("Bishwa Shahitya Kendro")
admin = bsk.addUser("admin", "administrator", "admin")
imsay3m = bsk.addUser("imsay3m", "sayem", "123465")
cpbook = bsk.addBook(121, "CP Book", 5)


currentUser = None

while True:
    if currentUser == None:
        print("No Logged in User\n")
        op = input("Login or Register (L/R) :")
        if op == "L":
            username = input("Enter Username:")
            password = input("Enter Password:")
            match = False
            for user in bsk.users:
                if user.username == username and user.password == password:
                    currentUser = user
                    match = True
                    break
            if match == False:
                print("No user Found!\n")
        elif op == "R":
            username = input("Enter Username:")
            name = input("Enter Your Name:")
            password = input("Enter Password:")
            for user in bsk.users:
                if user.username == username:
                    print("Username already exists!\n")
            user = bsk.addUser(username, name, password)
            currentUser = user
    else:
        print(f"\nWelcome Back {currentUser.name} !\n")
        if currentUser.username == "admin":
            print("\nOptions:\n")
            print("1: Add Book")
            print("2: Add User")
            print("3: Show All Books")
            print("4: Logout")

            ch = int(input("Enter Option:"))
            if ch == 1:
                id = int(input("Enter Book ID:"))
                name = input("Enter Book Name:")
                quantity = int(input("Enter No. of Books:"))
                bsk.addBook(id, name, quantity)

            if ch == 2:
                username = input("Enter Username:")
                name = input("Enter Full Name:")
                password = input("Enter Password:")
                for user in bsk.users:
                    if user.username == username:
                        print("Username already exists!\n")
                user = bsk.addUser(username, name, password)

            if ch == 3:
                print("\nBook Lists:\n")
                for book in bsk.books:
                    print(f"{book.id}\t{book.name}\t{book.quantity}")
                print("\n")

            elif ch == 4:
                currentUser = None

        else:
            print("\nOptions:\n")
            print("1: Borrow Book")
            print("2: Return Book")
            print("3: Show Borrowed Books")
            print("4: Show History")
            print("5: Logout")

            ch = int(input("\nEnter Option:"))

            if ch == 1:
                # id = int(input("Enter Book ID:"))
                name = input("Enter Book Name:")
                bsk.borrowBook(currentUser, name)
            elif ch == 2:
                # id = int(input("Enter Book ID:"))
                name = input("Enter Book Name:")
                bsk.returnBook(currentUser, name)
            elif ch == 3:
                print("\nBorrowed Books:")
                for book in currentUser.borrowedBooks:
                    print(f"{book.id}\t{book.name}\t{book.quantity-book.quantity+1}")
                print("\n")
            elif ch == 4:
                print("\nHistory:")
                for book in currentUser.returnedBooks:
                    print(f"{book.id}\t{book.name}\t{book.quantity}")
                print("\n")

            elif ch == 5:
                currentUser = None
