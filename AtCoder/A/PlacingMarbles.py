import io
import sys

_INPUT = """\
3
8 12 40
"""
sys.stdin = io.StringIO(_INPUT)

a = input()
cnt = 0
for i in a:
    if i == '1':
        cnt += 1
print(cnt)
