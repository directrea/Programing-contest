import io
import sys
_INPUT = """\
3
3 1 2
1
5
"""
# sys.stdin = io.StringIO(_INPUT)

n = int(input())
A = list(map(int, input().split()))

Q = int(input())
T = list(map(int, input().split()))


def linearSearch(key, A):
    A.append(key)
    i = 0
    while A[i] != key:
        i += 1

    if i == len(A)-1:
        A.pop()
        return None
    else:
        A.pop()
        return key


cnt = 0
for t in T:
    if linearSearch(t, A) != None:
        cnt += 1
print(cnt)
