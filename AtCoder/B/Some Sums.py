import io
import sys

_INPUT = """\
100 4 16
"""
sys.stdin = io.StringIO(_INPUT)


def findSumOfDigits(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n = int(n/10)
    return sum


vec = list(map(int, input().split()))
anssum = 0
for i in range(vec[0]+1):
    sum = int(findSumOfDigits(i))
    if vec[1] <= sum & sum <= vec[2]:
        anssum += i
print(anssum)
