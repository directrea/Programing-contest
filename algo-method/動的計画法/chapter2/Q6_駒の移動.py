import io
import sys

_INPUT = """\
5
10 1 1 1 1
10 10 1 1 1
1 10 10 1 1
1 1 10 10 1
1 1 1 10 10
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = []
for _ in range(N):
    tmp = []
    for s in input().split():
        tmp.append(int(s))
    A.append(tmp[::-1])
# print(A)
dp = []
for _ in range(N):
    dp.append([0] * N)

for i in range(N):
    for j in range(N):
        if i or j:
            min = 1000000
            if i - 1 >= 0:
                min = dp[i - 1][j]
            if j - 1 >= 0:
                tmp = dp[i][j - 1]
                if tmp < min:
                    min = tmp
        else:
            min = 0
        dp[i][j] = min + A[i][j]
# print(dp)
print(dp[N - 1].pop())