import io
import sys
_INPUT = """\
7
2 5 1 3 2 3 10000
"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
A = [int(i) for i in input().split()]


def countingSort(A, k):
    CA = [0]*k
    for sc in A:
        CA[sc] += 1
    return CA


CA = countingSort(A, 10001)
# print(CA)
ans = []
for i in range(len(CA)):
    ca = CA[i]
    if ca:
        for _ in range(ca):
            ans.append(i)
print(*ans)
