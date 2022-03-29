import io
import sys

_INPUT = """\
8
3 1 4 1 5 9 2 6
"""
# sys.stdin = io.StringIO(_INPUT)
N = int(input())
A = [int(i) for i in input().split()]
dp = [0] * N

for i in range(1, N):
    if i == 1:
        dp[i] = A[i]
    else:
        two = dp[i - 2] + A[i] * 2
        bf = dp[i - 1] + A[i]
        dp[i] = bf if two > bf else two
print(dp.pop())