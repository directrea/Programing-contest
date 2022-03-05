# import io
# import sys
# _INPUT = """\
# 8 8

# """
# sys.stdin = io.StringIO(_INPUT)


def addStrip(a, b):
    cnt = 0
    c = 1
    while c < b:
        c -= 1
        c += a
        cnt += 1
    return cnt


a, b = map(int, input().split())
print(addStrip(a, b))
