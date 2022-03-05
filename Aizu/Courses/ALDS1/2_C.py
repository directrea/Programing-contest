import io
import sys
import copy
# _INPUT = """\
# 2
# S1 H1
# """
# sys.stdin = io.StringIO(_INPUT)


def bubbleSort(A):
    for i in range(1, len(A)):
        for j in range(1, len(A)):
            bf = int(A[j-1][1:])
            now = int(A[j][1:])
            if bf > now:
                A[j-1], A[j] = A[j], A[j-1]


def selectionSort(A):
    for i in range(len(A)):
        minj = i
        for j in range(i, len(A)):
            if int(A[j][1:]) < int(A[minj][1:]):
                minj = j
        A[i], A[minj] = A[minj], A[i]


def makeEquel(A):
    vec = [[] for _ in range(10)]
    for sc in A:
        vec[int(sc[1:])].append(sc[0])
    return vec


def isStable(A, B):
    A = makeEquel(A)
    B = makeEquel(B)
    stable_flag = "Stable"
    for i in range(len(A)):
        if len(A[i]) > 1 and A[i] != B[i]:
            stable_flag = "Not stable"
    return stable_flag


n = int(input())
A = list(map(str, input().split()))

B = copy.copy(A)
bubbleSort(B)
C = copy.copy(A)
selectionSort(C)

print(" ".join(B))
print(isStable(A, B))
print(" ".join(C))
print(isStable(A, C))
