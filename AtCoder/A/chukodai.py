import io
import sys

# _INPUT = """\
# aaaabbbb
# 1 8

# """
# sys.stdin = io.StringIO(_INPUT)

s = input()
a, b = map(int, input().split())
a -= 1
b -= 1
vec = []
for i in s:
    vec.append(i)
work = vec[a]
vec[a] = vec[b]
vec[b] = work
s = ''
for i in vec:
    s += i
print(s)
