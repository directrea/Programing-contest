import io
import sys
# _INPUT = """\
# 6
# 5
# 3
# 1
# 3
# 4
# 3
# """
# sys.stdin = io.StringIO(_INPUT)

maxv = -float("inf")
Min = float("inf")
for i in range(int(input())):
    num = int(input())
    if i:
        maxv = max(maxv, num-Min)
    Min = min(Min, num)

print(maxv)
