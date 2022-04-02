import io
import sys

_INPUT = """\
5 10 
2 4 6 8
1 1 1 1
"""
sys.stdin = io.StringIO(_INPUT)

R, C = map(int, input().split())
# R += 1
# C += 1
A = [int(i) for i in input().split()]
point = [int(i) for i in input().split()]
dp = [[-1] * C for _ in range(R)]
dp[0][0] = 0

for i in range(R - 1):
    for j in range(C):
        if dp[i][j] >= 0:
            tmp = dp[i + 1][j]
            if tmp > dp[i][j]:
                pass
            else:
                dp[i + 1][j] = dp[i][j]
            if j + A[i] < C:
                dp[i + 1][j + A[i]] = dp[i][j] + point[i]

[print(d) for d in dp]
if dp[R - 1][C - 1] >= 0:
    print(dp[R - 1][C - 1])
else:
    print(-1)
