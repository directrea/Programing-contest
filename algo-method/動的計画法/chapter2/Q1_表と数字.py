import io
import sys

_INPUT = """\
9 9 9 9  

"""
# sys.stdin = io.StringIO(_INPUT)

A = [int(i) for i in input().split()]
dp = [A, [0] * 4, [0] * 4, [0] * 4]

for i in range(4):
    for j in range(4):
        if i + 1 < 4:
            if 0 <= j - 1:
                dp[i + 1][j - 1] += dp[i][j]
            dp[i + 1][j] += dp[i][j]
            if j + 1 < len(dp[0]):
                dp[i + 1][j + 1] += dp[i][j]
print(dp[len(dp) - 1].pop())
