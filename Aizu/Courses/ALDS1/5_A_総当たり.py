import io
import sys
import copy
_INPUT = """\
5
1 5 7 10 21
4
2 4 17 8
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = list(map(int, input().split()))


def makeCombination():
    S = []
    for _ in range(N):
        S.append(0)
    rec(N-1, S)


combs = []


def rec(i, S):
    if -1 == i:
        combs.append(copy.copy(S))
        return
    rec(i-1, S)
    S[i] = 1
    rec(i-1, S)
    S[i] = 0


sums = []
makeCombination()
for comb in combs:
    tmp_sum = 0
    for i in range(N):
        if comb[i]:
            tmp_sum += A[i]
    sums.append(tmp_sum)
sums.sort()

O = int(input())
B = list(map(int, input().split()))


def binarySearch(target, A):
    L = 0
    R = len(A)-1
    while L <= R:
        mid = int((L+R)/2)
        if target == A[mid]:
            return True
        elif target < A[mid]:
            R = mid-1
        else:
            L = mid+1
    return False


for b in B:
    if binarySearch(b, sums):
        print("yes")
    else:
        print("no")
