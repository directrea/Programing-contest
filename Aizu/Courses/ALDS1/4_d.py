
import io
import sys
_INPUT = """\
5 3
8
1
7
3
9
"""
# sys.stdin = io.StringIO(_INPUT)


N, K = map(int, input().split())
W = []
for _ in range(N):
    W.append(int(input()))


def isPack(P):
    track_index = 0
    w_index = 0
    while w_index < N and track_index < K:
        tmp_sum = 0
        while w_index < N and tmp_sum + W[w_index] <= P:
            tmp_sum += W[w_index]
            w_index += 1
        track_index += 1
    return w_index == N


# print(isPack(10))
L = 0
R = 100000*100000
mid = (R+L)//2
ans = R

while L <= R:
    if isPack(mid):
        ans = mid
        R = mid - 1
    else:
        L = mid + 1
    mid = (L+R)//2
print("%d" % ans)
