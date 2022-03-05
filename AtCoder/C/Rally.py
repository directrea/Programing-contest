import io
import sys
import math
# _INPUT = """\
# 7
# 14 14 2 13 56 2 37

# """
# sys.stdin = io.StringIO(_INPUT)


def stamina(p, vec):
    sum = 0
    for i in vec:
        sum += (i-p)**2
    return sum


def minMax(vec):
    min = math.inf
    max = 0
    for i in vec:
        if i < min:
            min = i
        if max < i:
            max = i
    return [min, max]


n = input()
vec = list(map(int, input().split()))
mm = minMax(vec)
min = math.inf
for i in range(mm[0], mm[1]+1):
    st = stamina(i, vec)
    if st < min:
        min = st
print(min)
