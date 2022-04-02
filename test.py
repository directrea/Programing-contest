import io
import sys

_INPUT = """\
10
ZABCDBABCQ

"""
# sys.stdin = io.StringIO(_INPUT)

N = int(input())
S = input()
cnt = 0
for i in range(len(S) - 2):
    if S[i] == "A":
        if S[i + 1] == "B":
            if S[i + 2] == "C":
                cnt += 1
print(cnt)