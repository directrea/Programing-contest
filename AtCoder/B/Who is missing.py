import io
import sys

# _INPUT = """\
# 4
# 3 2 1 1 2 4 4 4 4 3 1 3 2 1 3

# """
# sys.stdin = io.StringIO(_INPUT)

n = int(input())
vec = list(map(int, input().split()))

ansvec = []
for i in range(n):
    ansvec.append(0)

for i in vec:
    ansvec[i-1] += 1

for i in range(len(ansvec)):
    if ansvec[i] == 3:
        print(i + 1)
        break
