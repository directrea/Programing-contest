import io
import sys

_INPUT = """\
31 41 59
"""
# sys.stdin = io.StringIO(_INPUT)

N, X, Y = [int(i) for i in input().split()]
A = [0] * N
N -= 1


def fibonacchi(N):
    if N == 0:
        A[N] = X
        return X
    if N == 1:
        A[N] = Y
        return Y
    if A[N]:
        return A[N]
    num = (fibonacchi(N - 1) + fibonacchi(N - 2)) % 100
    A[N] = num
    return num


print(fibonacchi(N))
