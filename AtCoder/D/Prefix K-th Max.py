import io
import sys
import heapq

# _INPUT = """\
# 3 2
# 1 2 3

# """
# sys.stdin = io.StringIO(_INPUT)

n, k = map(int, input().split())

vec = [int(i) for i in input().split()]

cq = vec[:k]
heapq.heapify(cq)
print(cq[0])

for i in range(k, n):

    min = heapq.heappop(cq)
    more = max(min, vec[i])
    heapq.heappush(cq, more)
    print(cq[0])
