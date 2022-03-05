import io
import sys
# _INPUT = """\
# 12 5 2
# cabbabaacaba

# """
# sys.stdin = io.StringIO(_INPUT)

n, a, b = map(int, input().split())
s = input()
th = 0
pa = 0
fth = 0
for i in s:
    th += 1
    if i == "a":
        if pa < a + b:
            pa += 1
            print('Yes')
        else:
            print('No')
    elif i == "b":
        fth += 1
        if pa < a+b and fth <= b:
            pa += 1
            print('Yes')
        else:
            print('No')
    else:
        print('No')
