import io
import sys
_INPUT = """\
6
D 3
H 2
D 1
S 3
D 2
C 1
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
al = []
A = []
for i in range(N):
    AL, NUM = map(str, input().split())
    al.append(AL)
    A.append(int(NUM))


def partition(A, p, r):
    global al
    x = A[r]
    i = p
    for j in range(p, r):
        if A[j] <= x:
            A[i], A[j] = A[j], A[i]
            al[i], al[j] = al[j], al[i]
            i += 1
    A[i], A[r] = A[r], A[i]
    al[i], al[r] = al[r], al[i]
    return i


def quickSort(A, p, r):
    if p < r:
        idx = partition(A, p, r)
        quickSort(A, p, idx-1)
        quickSort(A, idx+1, r)


quickSort(A, 0, N-1)
print(A)
print(al)
