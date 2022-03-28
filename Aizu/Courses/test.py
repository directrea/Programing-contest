def binary_brute_force(n):
    A = [0] * n
    rec(A, 0)


def rec(A, i):
    if i < len(A):
        A[i] = 0
        rec(A, i + 1)
        print(A)
        A[i] = 1
        rec(A, i + 1)
        print(A)


N = 2
binary_brute_force(N)
