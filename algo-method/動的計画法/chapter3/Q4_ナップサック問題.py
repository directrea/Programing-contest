import io
import sys

_INPUT = """\
4 15
5 5 5 12
8 9 10 24

"""
# sys.stdin = io.StringIO(_INPUT)

N, W = map(int, input().split())
WEIGHT = [int(i) for i in input().split()]
VALUE = [int(i) for i in input().split()]

dp = [[-1] * (W + 1) for _ in range(N + 1)]
dp[0][0] = 0

for i in range(N):
    for j in range(W + 1):
        if dp[i][j] >= 0:
            tmp = dp[i + 1][j]
            if tmp > dp[i][j]:
                pass
            else:
                dp[i + 1][j] = dp[i][j]
            if j + WEIGHT[i] <= W:
                dp[i + 1][j + WEIGHT[i]] = dp[i][j] + VALUE[i]

# [print(d) for d in dp]
tmp = max(dp[N])
if tmp >= 0:
    print(tmp)
else:
    print(0)
