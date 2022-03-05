import io
import sys
import numpy as np

_INPUT = """\
6
382253568 723152896 37802240 379425024 404894720 471526144
"""
sys.stdin = io.StringIO(_INPUT)

a = int(input())

vec = [int(i) for i in input().split()]

flag = True
cnt = 0
while True:
    for i in vec:
        if i % 2 != 0:
            flag = False
    if flag == False:
        break
    vec = [int(i / 2) for i in vec]
    cnt += 1
print(cnt)
