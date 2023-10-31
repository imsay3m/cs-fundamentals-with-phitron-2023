str = input()

cntL = 0
start = 0
cntR = 0
end = 0
cnt = 0
strlen = 0
list = []

for char in str:
    if char == "L":
        cntL = cntL + 1
        strlen = strlen + 1
    else:
        cntR = cntR + 1
        strlen = strlen + 1
    if cntL == cntR:
        cnt = cnt + 1
        end = strlen
        list.append(str[start:end])
        start = end
        start = end
        cntL = 0
        cntR = 0

print(cnt)
for s in list:
    print(s)
