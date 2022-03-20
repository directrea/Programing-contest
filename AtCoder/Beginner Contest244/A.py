import io
import sys
_INPUT = """\
1
a

"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
S = input()
print(S[N-1])
