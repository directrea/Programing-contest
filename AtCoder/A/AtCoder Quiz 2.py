# import io
# import sys
# _INPUT = """\

# """
# sys.stdin = io.StringIO(_INPUT)

num = int(input())

if num < 40:
    print(40-num)
elif num < 70:
    print(70-num)
elif num < 90:
    print(90-num)
else:
    print('expert')
