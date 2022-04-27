import io
import sys
from collections import deque

_INPUT = """\
4 5
.....
.....
..#..
.....

"""
sys.stdin = io.StringIO(_INPUT)


def isRowblank(vec):
    bol = True
    for i in vec:
        if (i):
            bol = False
    return bol


H, W = map(int, input().split())
vvec = [[False for _ in range(W)] for _ in range(H)]

for i in range(H):
    tmp = input()
    for j in range(W):
        if tmp[j] == '#':
            vvec[i][j] = True
idx = 0
rvvec = []
for i in range(len(rvvec)):
    if (isRowblank(rvvec[i])):
        pass
    else:
        rvvec.append(rvvec[i])

blankcols = []
for j in range(len(rvvec[0])):
    isblankcol = True
    for i in range(len(rvvec)):
        if (rvvec[i][j]):
            isblankcol = False
    if (isblankcol):
        blankcols.append(j)

deledcnt = 0
for col in blankcols:
    for i in range(len(rvvec)):
        del rvvec[i][col - deledcnt]
    deledcnt += 1

for vec in rvvec:
    for b in vec:
        if b:
            print("#", end="")
        else:
            print(".", end="")
    print()
