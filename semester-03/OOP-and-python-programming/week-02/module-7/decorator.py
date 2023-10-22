import math
import time


def timer(func):
    def inner(*args, **kwargs):
        print("time started", *args)
        start = time.time()
        # print(func)
        func(*args, **kwargs)
        print("time ended", *args)
        end = time.time()
        print(f"total time taken:{end-start}")

    return inner


# timer()()


@timer
def getFactorial(n):
    print("factorial started", n)
    result = math.factorial(n)
    print(f"factorial of {n} is :{result}")


getFactorial(120)
# timer(getFactorial)()


""" def smartDiv(func):
    def inner(a, b):
        if a < b:
            a, b = b, a
        return func(a, b)

    return inner


@smartDiv
def div(a, b):
    print(a / b)


# div = smartDiv(div)
div(2, 4) """
""" 
This code snippet demonstrates the use of a Python decorator, which is a higher-order function that can modify or enhance the behavior of another function. Let's break down the code line by line and explain how it works:

1. `def div(a, b):`
   - This is a function definition for a function named `div`. It takes two arguments, `a` and `b`, and simply prints the result of dividing `a` by `b`.

2. `def smartDiv(func):`
   - This is another function definition for a function named `smartDiv`. It takes one argument, `func`, which is expected to be a function.

3. `def inner(a, b):`
   - This is the definition of a nested function named `inner`. It also takes two arguments, `a` and `b`.

4. `if a < b:`
   - This is a conditional statement that checks if `a` is less than `b`.

5. `a, b = b, a`
   - If the condition in the previous line is true, this line swaps the values of `a` and `b`. This means that after this operation, `a` will always be greater than or equal to `b`.

6. `return func(a, b)`
   - This line calls the original function (`func`) with the swapped or unswapped values of `a` and `b`, and it returns the result.

7. `return inner`
   - This line returns the `inner` function as the result of the `smartDiv` function.

8. `div = smartDiv(div)`
   - Here, the `div` function is reassigned to the result of calling `smartDiv(div)`. In other words, `div` is now a reference to the `inner` function returned by `smartDiv`, which will modify the behavior of the original `div` function.

9. `div(2, 4)`
   - This line calls the modified `div` function. However, because of the decorator, the values of `a` and `b` are swapped if `a` is less than `b` before the original `div` function is executed. In this case, since `2 < 4`, the values will be swapped, and the call to `div` will effectively become `div(4, 2)`. As a result, it will print the result of dividing 4 by 2, which is 2.

In summary, the `smartDiv` decorator is applied to the `div` function. It swaps the values of its arguments if the first argument is less than the second before calling the original `div` function. This demonstrates how decorators can be used to modify the behavior of functions without altering their original code.

"""
