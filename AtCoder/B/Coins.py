import io
import sys
# _INPUT = """\
# 30
# 40
# 50
# 6000
# """
# sys.stdin = io.StringIO(_INPUT)

five = int(input())
hund = int(input())
fift = int(input())
sum = int(input())
cnt = 0
for i in range(five+1):
    for j in range(hund+1):
        for k in range(fift+1):
            num = 500*i + 100*j + 50*k
            if num == sum:
                cnt += 1
print(cnt)
