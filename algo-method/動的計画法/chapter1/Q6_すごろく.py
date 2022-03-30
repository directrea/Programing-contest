import io
import sys

_INPUT = """\
11 6
2 4 6 8 10 12
"""
sys.stdin = io.StringIO(_INPUT)

length, N = map(int, input().split())
A = [int(i) for i in input().split()]
dp = [True] + [False] * (length)

for i in range(length):
    if dp[i]:
        for dice in A:
            if i + dice < len(dp):
                dp[i + dice] = True
if dp.pop():
    print("Yes")
else:
    print("No")