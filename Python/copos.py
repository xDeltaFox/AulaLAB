N = int(input())

def LtN(l):
    if l == 'A':
        return 1
    if l == 'B':
        return 2
    if l == 'C':
        return 3

def NtL(l):
    if l == 1:
        return 'A'
    if l == 2:
        return 'B'
    if l == 3:
        return 'C'

Copo = LtN(input())

Copos = [1, 2, 3]

J2 = 0
for i in range(N):
    J = int(input())

    BCopos1 = Copos[0]
    BCopos2 = Copos[1]
    BCopos3 = Copos[2]
    if J == 1:
        Copos[0] = BCopos2
        Copos[1] = BCopos1
    elif J == 2:
        Copos[1] = BCopos3
        Copos[2] = BCopos2
    elif J == 3:
        Copos[0] = BCopos3
        Copos[2] = BCopos1

    J2 = J

print(NtL(Copos.index(Copo)+1))