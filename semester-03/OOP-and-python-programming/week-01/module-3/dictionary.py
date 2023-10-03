numbers = [12, 56, 98, 78, 12, 6, 98]
person1 = ["kala chan", "kalipur", 23, "student"]

# key value pair
# dictionary
# object
# hash table
# map
# overlap with set

person = {"name": "sayem", "address": "sylhet", "age": 23, "job": "bekar"}
print(person)
print(person["job"])
print(person.keys())
print(person.values())
person["language"] = "python"
person["age"] = "21"
print(person)
del person["job"]
print(person)
print(list(person))
print(set(person))

for key, value in person.items():
    print(key, value)
