sz = int(input())
list = []
str = input()
flag = True
opCnt = 0
for x in str.split():
    list.append(int(x))

while flag:
    for i, val in enumerate(list):
        if val % 2 == 0:
            list[i] = list[i] / 2
        else:
            flag = False
            break
    opCnt = opCnt + 1

print(opCnt - 1)
