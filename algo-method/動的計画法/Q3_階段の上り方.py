import io
import sys

_INPUT = """\
2
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [1] + [0] * N

for i in range(N + 1):
    if 0 <= i - 1:
        A[i] = A[i - 1]
    if 0 <= i - 2:
        A[i] += A[i - 2]

print(A[N])