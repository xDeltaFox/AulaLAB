import math

L, A, P, R = map(int, input().split())

if (L**2)+(A**2)+(P**2) < 4*(R**2):
    print('N')
else:
    print('S')

