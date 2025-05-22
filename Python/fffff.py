n = int(input())
cartas = [int(x) for x in input().split()]

y = 0

for i in range(n):
    j = cartas[i]
    if j != 1:
        y += 1
    else:
        y += 1
        break

print(y)