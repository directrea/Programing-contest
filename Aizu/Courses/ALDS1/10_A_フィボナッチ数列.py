import io
import sys

_INPUT = """\
44
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [1, 1]


def Fibonacchi(N):
    for i in range(2, N + 1):
        A.append(A[i - 1] + A[i - 2])
    return A[N]


print(Fibonacchi(N))
