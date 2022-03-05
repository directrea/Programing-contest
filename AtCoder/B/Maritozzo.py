# import io
# import sys
# _INPUT = """\
# a
# b
# c
# 1

# """
# sys.stdin = io.StringIO(_INPUT)
vec = []
for i in range(3):
    vec.append(input())

order = input()
s = ''
for i in order:
    s += vec[int(i)-1]
print(s)
