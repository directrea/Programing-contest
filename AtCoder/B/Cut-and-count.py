import io
import sys
_INPUT = """\
6
aabbca
"""
sys.stdin = io.StringIO(_INPUT)

N = int(input())
st = input()

X = [0 for _ in range(27)]
Y = [0 for _ in range(27)]


