no = 1
while(True):
    print("Teste ", no)
    P, R = map(int, input().split())
    X = list(map(int, input().split()))

    for i in range(R):
        A = list(map(int, input().split()))
        N = A[0]
        J = A[1]

        A.remove(N)
        A.remove(J)
        
        for u in range(N - (N - A.count(J))):
            if A[u] != J:
                X.pop(u)
                A.pop(u)
        
        if len(X) < 1:
            print(X[0])
    
    if P == R == 0:
        break

    no += 1

