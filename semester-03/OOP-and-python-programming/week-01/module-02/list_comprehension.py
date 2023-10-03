numbers=[45,88,65,42,85,14,25,61]

odds=[]

for num in numbers:
    if num%2==1 and num%5==0:
        odds.append(num)

print(odds)

oddNums=[num for num in numbers if num%2==1]
print(oddNums)

players=['sakib','mushfik','sabbir']
ages=[38,37,32]
ageComb=[]

for player in players:
    print('player ->')
    for age in ages:
        print(player,age)
        ageComb.append([player,age])

print(ageComb)

ageComb2=[[player,age] for player in players for age in ages]
print(ageComb2)
