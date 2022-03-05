import io
import sys
import heapq

# _INPUT = """\
# 7
# 50
# 30
# 50
# 100
# 50
# 80
# 30

# """
# sys.stdin = io.StringIO(_INPUT)
n = int(input())
ary = []
for i in range(n):
    ary.append(int(input()) * (-1))
heapq.heapify(ary)
cnt = 1
min = heapq.heappop(ary) * (-1)
while ary:
    work = heapq.heappop(ary) * (-1)
    if min > work:
        cnt += 1
        min = work
print(cnt)
