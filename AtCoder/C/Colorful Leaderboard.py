import io
import sys


def rate_allocate(rates, rate):
    SEP = 400
    MAX_ALLOCATE = 3200
    rate_sep = SEP
    idx = 0
    if MAX_ALLOCATE <= rate:
        rates[-1] += 1
        return
    while rate_sep <= MAX_ALLOCATE:
        if rate < rate_sep:
            rates[idx] += 1
            break
        idx += 1
        rate_sep += SEP


N = int(input())
A = [int(i) for i in input().split()]
COLORS = 9
rates = [0 for _ in range(COLORS)]

for i in A:
    rate_allocate(rates, i)
# print(rates)
kinds_cnt = 0
for i in range(len(rates)-1):
    if rates[i]:
        kinds_cnt += 1

if kinds_cnt:
    print(kinds_cnt, kinds_cnt+rates[-1])
else:
    print(kinds_cnt+1,kinds_cnt+rates[-1])
