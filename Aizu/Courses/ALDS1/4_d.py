import io
import sys
_INPUT = """\
5 3
8
1
7
3
9
"""
# sys.stdin = io.StringIO(_INPUT)


def isCarry(max_carry, loads, tracks):
    loads_idx = -1
    for _ in range(tracks):
        carry_cnt = 0
        while 1:
            loads_idx += 1
            # 最小積載を超えないように制御
            if loads_idx == len(loads) or carry_cnt + loads[loads_idx] > max_carry:
                loads_idx -= 1
                break
            carry_cnt += loads[loads_idx]
    return True if loads_idx == len(loads)-1 else False


N, TRACKS = map(int, input().split())

loads = []
max = 0
for _ in range(N):
    num = int(input())
    if num > max:
        max = num
    loads.append(num)

max_carry = max
while 1:
    if isCarry(max_carry, loads, TRACKS):
        break
    max_carry += 1
print(max_carry)
