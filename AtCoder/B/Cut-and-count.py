import io
import sys
_INPUT = """\
6
aabbca
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
st = input()

X = {}
Y = {}

for i in range(27):
    X[chr(ord('a')+i)] = 0
    Y[chr(ord('a')+i)] = 0


pass
