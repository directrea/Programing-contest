import io
import sys
_INPUT = """\
5
3 5 2 1 4
"""
sys.stdin = io.StringIO(_INPUT)

cnt = 0
INF = 10**9


def bubbleSort(A):
    global cnt
    for i in range(len(A)):
        for j in range(i+1, len(A))[::-1]:
            if A[j] < A[j-1]:
                A[j], A[j-1] = A[j-1], A[j]
                cnt += 1
    return cnt


def merge(A, L, M, R):
    global cnt, INF
    L_ary = A[L:M] + [INF]
    R_ary = A[M:R] + [INF]
    L_idx, R_idx = 0, 0
    for i in range(L, R):
        cnt += 1
        if L_ary[L_idx] <= R_ary[R_idx]:
            A[i] = L_ary[L_idx]
            L_idx += 1
        else:
            A[i] = R_ary[R_idx]
            R_idx += 1


def mergeSort(A, L, R):
    if L + 1 < R:
        mid = (L+R) // 2
        mergeSort(A, L, mid)
        mergeSort(A, mid, R)
        merge(A, L, mid, R)


N = int(input())
A = [int(i) for i in input().split()]
print(bubbleSort(A))
