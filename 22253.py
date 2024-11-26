# PARTICIPANTE 	1929 	2227 	2298 	- 	-


# a,b,c,d = map(int, [2,5,9,3])
#
# if (a + b < c or a + b < d
#         or c + b < d or c + b < a
#         or d + b < c or d + b < a):
#     print("S")
# else:
#     print("N")


d = 0
a,v = map(int, [12, 3])

while True:
    x, y = map(int, [2, 5])

    if a == v == 0:
        break

    d = d+1







def test(list):
    p = []
    r = []
    print(list)
    for i in list:
        if i not in list:
            p.append(i)
            r.append(1)
        else:
            r[p.index(i)] = r[p.index(i)]+1

    print(p)
    return p


test([2,2,5,4,8,6,55,5,5])

cartas = ["Ás", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"]

n = 1 # int(input())
p = 0
for i in range(n):
    c1,c2,c3,c4,c5 = map(int, [12, 3, 10, 3, 12])

    if c2 == c1 + 1 and c3 == c1 + 2 and c4 == c1 + 3 and c5 == c1 + 4:
        p = c1 + 200
    if c1 == c2 == c3 == c4 != c5:
        p = c1 + 180
    if c1 == c2 == c3 == c4 != c5:
        p = c1 + 160
    if c1 == c2 == c3 == c4 != c5:
        p = c1 + 140
    if c1 == c2 == c3 == c4 != c5:
        p = 3 * x + 2 * y + 20
    if c1 == c2 != c3 != c4 != c5:
        p = c1
    else:
        p = 0














