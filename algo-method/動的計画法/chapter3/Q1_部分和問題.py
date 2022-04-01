import io
import sys

_INPUT = """\
3 5
1 3
"""
# sys.stdin = io.StringIO(_INPUT)

R, C = map(int, input().split())
A = [int(i) for i in input().split()]
dp = [[0] * C for _ in range(R)]
dp[0][0] = 1

for i in range(R - 1):
    for j in range(C):
        if dp[i][j]:
            dp[i + 1][j] += dp[i][j]
            if A[i] + j < C:
                dp[i + 1][A[i] + j] += dp[i][j]
# for d in dp:
#     print(*d)
cnt = 0
for num in dp[R - 1]:
    if num:
        cnt += 1
print(cnt)
