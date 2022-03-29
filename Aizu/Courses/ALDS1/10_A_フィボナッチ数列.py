import io
import sys

_INPUT = """\
44
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [1, 1]


def dynamicFibonacchi(N):
    for i in range(2, N + 1):
        A.append(A[i - 1] + A[i - 2])
    return A[N]


memo_A = [0] * (N + 1)


def memofibonacci(N):
    if 0 <= N and N == 0 or N == 1:
        memo_A[N] = 1
    if memo_A[N]:
        return memo_A[N]
    num = memofibonacci(N - 1) + memofibonacci(N - 2)
    memo_A[N] = num
    return num


print(memofibonacci(N))
