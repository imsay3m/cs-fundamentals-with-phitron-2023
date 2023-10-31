def multiple():
    return 3, 4


# print(multiple())
things = ("pen", "tripod", "bottle", "charger", "phone", "camera")
print(things)
print(things[0])
print(things[-2])
print(things[2:])


for i in things:
    print(i)

# tuple is immutable
# things[0] = "pencil"

mega = ([2, 3, 4], [6, 7, 8, 9])
print(type(mega))
# mega[0] = [1, 6]
print(mega[0])
mega[0][0] = 111
print(mega)
