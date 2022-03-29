def binary_brute_force(N):
    A = [0] * N
    rec(A, N - 1)


def rec(A, i):
    if -1 == i:
        print(A)
        return
    A[i] = 0
    rec(A, i - 1)
    A[i] = 1
    rec(A, i - 1)


N = 2
binary_brute_force(N)
