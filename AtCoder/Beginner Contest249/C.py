import io
import sys


def solve(strs, K):
    ABASE = ord('a')
    strCounts = [0 for _ in range(26)]
    for st in strs:
        for c in st:
            strCounts[ord(c) - ABASE] += 1
    strcount = 0
    for n in strCounts:
        if n == K:
            strcount += 1
    return strcount


N, K = map(int, input().split())
strs = [input() for _ in range(N)]
strcount = 0
for bit in range(1 << N):
    tmp = []
    for i in range(N):
        if (bit & (1 << i)):
            tmp.append(i)
    partstrs = []
    for idx in tmp:
        partstrs.append(strs[idx])
    strcount = max(solve(partstrs, K), strcount)
print(strcount)
