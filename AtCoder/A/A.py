# import io
# import sys
# _INPUT = """\
# D
# """
# sys.stdin = io.StringIO(_INPUT)

vec = ['A', 'B', 'C', 'D', 'E']
s = input()
for i in range(len(vec)):
    if s == vec[i]:
        print(i+1)
