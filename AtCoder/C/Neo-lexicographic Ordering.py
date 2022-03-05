import io
import sys
_INPUT = """\
bacdefghijklmnopqrstuvwxzy
4
abx
bzz
bzy
caa

"""
sys.stdin = io.StringIO(_INPUT)

s = input()
dicvec = []
for i in s:
    dicvec.append(i)
print(dicvec)

dict01 = {}
for i, s in enumerate(dicvec):
    dict01[s] = i
print(dict01)

n = int(input())
vvec = []
for i in range(n):
    s = input()
    vec = []
    for j in s:
        vec.append(dict01[j])
    vvec.append(vec)
print(vvec)

for i in range(len(vvec)):
