name1 = "sakib khan\n"

name2 = "sakib' khan"  # escape sequence

name3 = """
        sakib 
        khan
"""  # multi line string

print(name1, name2, name3)

# string is a sequence of characters
for char in name1:
    print(char)

print(name2[2])
print(name2[2:6])
print(name2[::-1])
# mutable means changable


# immutable means you cannot change it
# name2[0] = "R"

if "khan" in name2:
    print("exists")
else:
    print("doesn't exists")
