import io
import sys
_INPUT = """\
R G B
G B R
"""
# sys.stdin = io.StringIO(_INPUT)


S = [i for i in input().split()]
T = [i for i in input().split()]


def StoT(S, T):
    swap_cnt = 0
    for i in range(3):
        if S[i] != T[i]:
            for j in range(i+1, 3):
                if S[j] != T[j]:
                    S[i], S[j] = S[j], S[i]
                    swap_cnt += 1
    return swap_cnt


swap_cnt = StoT(S, T)
if swap_cnt >= 3:
    swap_cnt=2
# print(swap_cnt)
if swap_cnt % 2 == 0:
    print("Yes")
else:
    print("No")
