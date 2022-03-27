import io
import sys

_INPUT = """\
10
4 1 3 2 16 9 10 14 8 7
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [i for i in map(int, input().split())]


def makeHeapify(A, i):
    l = i * 2
    r = i * 2 + 1
    largest = i
    if l <= N and A[l - 1] > A[i - 1]:
        largest = l
    if r <= N and A[r - 1] > A[largest - 1]:
        largest = r
    if i != largest:
        A[i - 1], A[largest - 1] = A[largest - 1], A[i - 1]
        makeHeapify(A, largest)


def buildMaxHeap(A):
    for i in list(range(1, N // 2 + 1))[::-1]:
        makeHeapify(A, i)


buildMaxHeap(A)
for a in A:
    print("", a, end="")
print()
