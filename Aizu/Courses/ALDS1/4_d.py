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


N, TRACKS = map(int, input().split())
loads = []
for _ in range(N):
    loads.append(int(input()))


def isCarry(max_carry):
    loads_idx = 0
    track = 0
    while loads_idx < N and track < TRACKS:
        tmp_sum = 0
        while loads_idx < N and tmp_sum + loads[loads_idx] <= max_carry:
            tmp_sum += loads[loads_idx]
            loads_idx += 1
        track += 1
    return loads_idx == N


right = 10000*10000
left = 0
mid = (left+right)//2
ans = right
while left <= right:
    if isCarry(mid):
        ans = mid
        right = mid - 1
    else:
        left = mid + 1
    mid = (left+right)//2
print("%d" % ans)
