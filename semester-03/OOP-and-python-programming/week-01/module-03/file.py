# .csv comma separated value
# .txt text file

# write
with open("message.txt", "w") as file:
    file.write("I am sayem\n")

# append
with open("message.txt", "a") as file:
    file.write("I am sayem\n")

# read
with open("message.txt", "r") as file:
    text = file.read()
    print(text)

# read line by line
with open("message.txt") as file:
    text = file.readlines()
    print(text)
