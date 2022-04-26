import io
import sys
_INPUT = """\

"""
sys.stdin = io.StringIO(_INPUT)
N = 3
for bit in range(1 << N):
    tmp = []
    for i in range(N):
        if bit & (1 << i):
            tmp.append(i)
    print(tmp)
