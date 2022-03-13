import io
import sys
_INPUT = """\
5
1 5 7 10 21
4
2 4 17 8
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = list(map(int, input().split()))


def solve(i, m):
    if m == 0:
        return True
    if i >= N:
        return False
    t = solve(i+1, m)
    f = solve(i+1, m-A[i])
    res = t or f
    return res


print(solve(0, 4))
