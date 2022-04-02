import io
import sys

_INPUT = """\
ATCODER


"""
# sys.stdin = io.StringIO(_INPUT)
S = input()
acgt = ["A", "C", "G", "T"]
cnt = 0
ans = 0
for i in range(len(S)):
    if S[i] in acgt:
        cnt += 1
        ans = max(ans, cnt)
    else:
        cnt = 0
print(ans)
