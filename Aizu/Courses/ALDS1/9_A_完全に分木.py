import io
import sys

_INPUT = """\
10
25 12 5 6 8 9 4 3 7 31
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [0] + [i for i in map(int, input().split())]
N = len(A)
# print(A)
for i in range(1, N):
    print("node %d:" % (i), end="")
    print(" key = %d" % (A[i]), end="")
    if i // 2:
        print(" parent key = %d," % (A[i // 2]), end="")
    if i * 2 < N:
        print(" left key = %d," % (A[i * 2]), end="")
    if i * 2 + 1 < N:
        print(" right key = %d," % (A[i * 2 + 1]), end="")
    print()
