import io
import sys

# _INPUT = """\
# 1000 1234000
# """
# sys.stdin = io.StringIO(_INPUT)

vec = list(map(int, input().split()))
vec[1] /= 1000

man = int(vec[1] / 10)
money = vec[1]
flag = False
for i in reversed(range(0, man+1)):
    if flag:
        break
    mbill = i
    mmoney = money - 10 * i
    gosen = int(mmoney / 5)
    for j in reversed(range(0, gosen+1)):
        gobill = j
        gomoney = mmoney - 5 * j
        sbill = int(gomoney / 1)
        if mbill + gobill + sbill == vec[0]:
            flag = True
            print(mbill, gobill, sbill)
if not flag:
    print(-1, -1, -1)
