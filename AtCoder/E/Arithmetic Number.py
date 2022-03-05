import io
import sys

_INPUT = """\
152
"""
sys.stdin = io.StringIO(_INPUT)

n = int(input())

for i in reversed(range(len(str(n)))):
    print(n // 10**i)
    n -= 10**i
# while True:
#     n = str(n)
#     work = int(n[0])
#     ar = work - int(n[1])
#     flag = True
#     for i in n[1:]:
#         num = int(i)
#         if ar != work - num:
#             flag = False
#         work = num
#     if flag:
#         print(n)
#         break
#     n = int(n) + 1
