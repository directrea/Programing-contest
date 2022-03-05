import io
import sys

# _INPUT = """\
# 3
# 3 1 2
# 6 1 1
# 10 -1 0
# """
# sys.stdin = io.StringIO(_INPUT)

n = int(input())

vec = [[0, 0, 0]]
for i in range(n):
    vec.append(list(map(int, input().split())))
flag = True
for i in range(1, len(vec)):
    t = vec[i][0] - vec[i-1][0]
    d = abs(vec[i][1] - vec[i-1][1]) + abs(vec[i][2] - vec[i-1][2])
    # print('t =', t, 'd =', d)
    if t < d:
        flag = False
    else:
        if t % 2 == 1:
            if d % 2 == 1:
                continue
            else:
                flag = False
        else:
            if d % 2 == 0:
                continue
            else:
                flag = False
    if not flag:
        break
if flag:
    print('Yes')
else:
    print('No')
