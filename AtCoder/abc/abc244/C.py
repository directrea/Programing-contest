import io
import sys
_INPUT = """\
2
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())

A = [1]+[0]*(2*N+1)


def searchNotDeclined(A):
    for i in range(len(A)):
        if A[i] == 0:
            return i


while True:
    idx = searchNotDeclined(A)
    print(idx)
    sys.stdout.flush()
    A[idx] += 1
    num = int(input())
    if num == 0:
        break
    A[num] += 1
