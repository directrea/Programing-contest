import io
import sys
# _INPUT = """\
# 6
# 5 2 4 6 1 3
# """
# sys.stdin = io.StringIO(_INPUT)


def printAry(A):
    for i in range(len(A)):
        if i:
            print("", end=" ")
            print(A[i], end="")
        else:
            print(A[i], end="")
    print()


def insertionSort(A):
    for i in range(1, len(A)):
        v = A[i]
        j = i - 1
        while j >= 0 and A[j] > v:
            A[j + 1] = A[j]
            j -= 1
        A[j + 1] = v
        printAry(A)


n = int(input())
A = list(map(int, input().split()))

printAry(A)
insertionSort(A)
