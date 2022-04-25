import io
import sys

_INPUT = """\
4 4
##.#
....
##.#
.#.#

"""
sys.stdin = io.StringIO(_INPUT)

H, W = map(int, input().split())

vvec = [[False for _ in range(W)] for _ in range(H)]

for i in range(H):
    tmp = input()
    for j in range(W):
        if tmp[j] == '#':
            vvec[i][j] = True

pass
