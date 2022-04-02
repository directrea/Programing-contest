import io
import sys
import math

_INPUT = """\
246 402

"""
# sys.stdin = io.StringIO(_INPUT)

A = [int(i) for i in input().split()]


def dist(x, y):
    return math.sqrt(x**2 + y**2)


dis = dist(*A)
print(A[0] / dis, A[1] / dis)
