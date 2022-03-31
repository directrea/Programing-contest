import io
import sys

_INPUT = """\
2
1 2 3
2 4 6
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = []
for i in range(N):
    A.append([int(i) for i in input().split()])

dp = []
length = len(A[0])
for i in range(N):
    if i:
        dp.append([0] * length)
    else:
        dp.append(A[0])

for i in range(1, N):
    for j in range(length):
        max = 0
        for k in range(length):
            if j != k:
                tmp = dp[i - 1][k]
                if tmp > max:
                    max = tmp
        dp[i][j] = max + A[i][j]

max = 0
for d in dp[len(dp) - 1]:
    if d > max:
        max = d
print(max)