def makeCombination(N):
    S = []
    for _ in range(N):
        S.append(0)
    rec(N-1, S)


combs = []


def rec(i, S):
    if -1 == i:
        print(S)
        return
    rec(i-1, S)
    S[i] = 1
    rec(i-1, S)
    S[i] = 0


makeCombination(3)
