a = list(map(int, input().split())) 
coins = []
for i in range(a[0]):
    coins.append(int(input()))

rest = a[1]
result = 0
coins.sort(reverse=True)
for coin in coins:
    result += rest // coin
    rest = rest % coin

print(result)