# import io
# import sys
# _INPUT = """\
# akasaka

# """
# sys.stdin = io.StringIO(_INPUT)


def isKaibun(s):
    n = len(s)
    flag = True
    for i in range(n):
        n -= 1
        if s[i] == s[n]:
            continue
        else:
            return False
    return True


s = input()
n = len(s)
# print(s[0:int((n - 1) / 2)])
# print(s[int((n + 3) / 2)-1:n])
if isKaibun(s) and isKaibun(s[0:int((n - 1) / 2)]) and isKaibun(s[int((n + 3) / 2)-1:n]):
    print('Yes')
else:
    print('No')
