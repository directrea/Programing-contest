import io
import sys

# _INPUT = """\
# php

# """
# sys.stdin = io.StringIO(_INPUT)

s = input()

ha = 0
for i in range(len(s)):
    if s[i] == 'a':
        ha += 1
    else:
        break

ta = 0
for i in reversed(range(len(s))):
    if s[i] == 'a':
        ta += 1
    else:
        break

if ha > ta:
    print('No')
else:
    rs = s[::-1]
    for i in range(ta - ha):
        rs += 'a'
    bs = rs[::-1]
    if bs == rs:
        print('Yes')
    else:
        print('No')
