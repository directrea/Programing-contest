import io
import sys

_INPUT = """\
3
10 20 30
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [int(i) for i in input().split()]
dp = [A]
for _ in range(N - 1):
    dp.append([0] * N)

for i in range(N - 1):
    for j in range(N):
        if i + 1 < N:
            if 0 <= j - 1:
                dp[i + 1][j - 1] += dp[i][j]
                dp[i + 1][j - 1] %= 100
            dp[i + 1][j] += dp[i][j]
            dp[i + 1][j] %= 100
            if j + 1 < N:
                dp[i + 1][j + 1] += dp[i][j]
                dp[i + 1][j + 1] %= 100
print(dp[len(dp) - 1].pop())
