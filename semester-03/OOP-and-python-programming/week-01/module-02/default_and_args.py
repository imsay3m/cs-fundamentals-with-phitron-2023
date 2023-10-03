def sum(a, b, c=0, d=0):
    result = a + b + c + d
    return result


total = sum(99, 11)
print("Total: ", total)


# args
def allSum(a, b, *args):
    print(args)
    sum = 0
    for num in args:
        print(num)
        sum = sum + num
    return sum


total2 = allSum(43, 45, 77, 32, 21)
print("All Sum: ", total2)
