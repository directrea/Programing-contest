import io
import sys
import numpy as np
import math
# _INPUT = """\
# 5
# 315 271
# -2 -621
# -205 -511
# -952 482
# 165 463
# """
# sys.stdin = io.StringIO(_INPUT)

n = int(input())
data = []
for i in range(n):
    ary = [int(i) for i in input().split()]
    data.append(ary)

data = np.array(data)


def f(a, b):
    return math.sqrt((a[0]-b[0]) * (a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]))


max = 0
for i in range(n):
    for j in range(i+1, n):
        calced = f(data[i], data[j])
        if(calced > max):
            max = calced
        # print(calced)

print(max)
