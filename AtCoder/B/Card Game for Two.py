import heapq
import io
import sys

# _INPUT = """\
# 4
# 20 18 2 18
# """
# sys.stdin = io.StringIO(_INPUT)


n = int(input())
vec = list(map(lambda x: int(x)*(-1), input().split()))

heapq.heapify(vec)
a = 0
b = 0
for i in range(n):
    if i % 2 == 0:
        a += heapq.heappop(vec)*(-1)
    else:
        b += heapq.heappop(vec)*(-1)
print(a-b)
