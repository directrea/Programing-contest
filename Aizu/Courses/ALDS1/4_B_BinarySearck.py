import io
import sys
_INPUT = """\
3
1 2 3
1
5
"""
# sys.stdin = io.StringIO(_INPUT)

n = int(input())
A = list(map(int, input().split()))

q = int(input())
Q = list(map(int, input().split()))


def BinarySearch(key, A):
    left = 0
    right = len(A)-1
    while left <= right:
        mid = int((left+right)/2)
        if A[mid] == key:
            return key
        elif key < A[mid]:
            right = mid - 1
        else:
            left = mid + 1
    return None


cnt = 0
for q in Q:
    if BinarySearch(q, A) != None:
        cnt += 1
print(cnt)
