import io
import sys

_INPUT = """\
4 2
abi
aef
bc
acg
"""
sys.stdin = io.StringIO(_INPUT)


def solve(strs):
    ANUM = ord('a')


N, K = map(int, input().split())
strs = [input() for _ in range(N)]

for bit in range(1 << N):
    tmp = []
    for i in range(N):
        if (bit & (1 << i)):
            tmp.append(i)

    print(tmp)
