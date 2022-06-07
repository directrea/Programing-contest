import io
import sys

_INPUT = """\
-100 -40
-60 -80
-60 -80


"""
# sys.stdin = io.StringIO(_INPUT)

x = [0] * 201
y = [0] * 201
for i in range(3):
    A = [int(i) for i in input().split()]
    x[A[0] + 100] += 1
    y[A[1] + 100] += 1
# print(x)
# print(y)

for i in range(len(x)):
    if x[i] == 1:
        print(i - 100, end=" ")
for i in range(len(y)):
    if y[i] == 1:
        print(i - 100)
