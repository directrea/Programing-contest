import io
import sys
from collections import deque
_INPUT = """\
10
8 5 9 2 6 3 7 1 10 4
"""
sys.stdin = io.StringIO(_INPUT)


def mergeSort(A):
    if len(A) > 0:
        mid = (0+len(A))//2
        print(A)
        if len(A) != 1:
            mergeSort(A[:mid])
            mergeSort(A[mid:])


n = int(input())
A = list(map(int, input().split()))

mergeSort(A)
