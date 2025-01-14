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
        if Copos[0] < Copos[1]:
            if J == J2:
                Copos[0] = BCopos1
                Copos[1] = BCopos2
            else:
                Copos[0] = BCopos2
                Copos[1] = BCopos1
        else:
            if J == J2:
                Copos[0] = BCopos2
                Copos[1] = BCopos1
            else:
                Copos[0] = BCopos1
                Copos[1] = BCopos2
    elif J == 2:
        if Copos[2] < Copos[1]:
            if J == J2:
                Copos[2] = BCopos3
                Copos[1] = BCopos2
            else:
                Copos[2] = BCopos2
                Copos[1] = BCopos3
        else:
            if J == J2:
                Copos[2] = BCopos2
                Copos[1] = BCopos3
            else:
                Copos[2] = BCopos3
                Copos[1] = BCopos2
    elif J == 3:
        if Copos[2] < Copos[0]:
            if J == J2:
                Copos[2] = BCopos3
                Copos[0] = BCopos1
            else:
                Copos[2] = BCopos1
                Copos[0] = BCopos3
        else:
            if J == J2:
                Copos[2] = BCopos1
                Copos[0] = BCopos3
            else:
                Copos[2] = BCopos3
                Copos[0] = BCopos1

    J2 = J
    print(NtL(Copos.index(Copo)))