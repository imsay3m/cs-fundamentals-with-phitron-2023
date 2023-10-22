# function is a first class object
def doubleDecker():
    print("Strating the double decker")

    def innerFun():
        print("inside the inner")
        return "hello"

    return innerFun


# print(doubleDecker())
# print(doubleDecker()())


def doSomething(work):
    print("work started")
    # print(work)
    work()
    print("work ended")


def coding():
    print("coding in python")


doSomething(coding)


def sleeping():
    print("sleeping and dreaming in python")


doSomething(sleeping)
