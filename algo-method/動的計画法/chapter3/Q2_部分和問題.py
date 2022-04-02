import io
import sys

_INPUT = """\
3 4
1 2 3
"""
sys.stdin = io.StringIO(_INPUT)

R, C = map(int, input().split())
R += 1
C += 1
A = [int(i) for i in input().split()]

dp = [[False] * C for _ in range(R)]
dp[0][0] = True

for i in range(R - 1):
    for j in range(C):
        if dp[i][j]:
            dp[i + 1][j] = True
            if j + A[i] < C:
                dp[i + 1][j + A[i]] = True
# [print(d) for d in dp]
if dp[R - 1][C - 1]:
    print("Yes")
else:
    print("No")
