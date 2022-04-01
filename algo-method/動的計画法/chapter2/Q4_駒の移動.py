import io
import sys

_INPUT = """\
6
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
dp = []
for _ in range(N):
    dp.append([0] * N)
dp[0][0] = 1

for i in range(N):
    for j in range(N):
        if i - 1 >= 0:
            dp[i][j] = dp[i - 1][j]
        if j - 1 >= 0:
            dp[i][j] += dp[i][j - 1]
print(dp[N-1].pop())
