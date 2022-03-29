import io
import sys

_INPUT = """\
10
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input()) + 1
A = [1] + [0] * (N - 1)

for i in range(N):
    if i + 1 < N:
        A[i + 1] += A[i]
    if i + 2 < N:
        A[i + 2] += A[i]
    if i + 3 < N:
        A[i + 3] += A[i]
print(A[N - 1])
