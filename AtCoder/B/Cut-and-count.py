import io
import sys
_INPUT = """\
45
tgxgdqkyjzhyputjjtllptdfxocrylqfqjynmfbfucbir


"""
# sys.stdin = io.StringIO(_INPUT)

ALPHABETS = 26
LENGTH = range(ALPHABETS)


def count(X, Y):
    cnt = 0
    for i in LENGTH:
        if X[i] and Y[i]:
            cnt += 1
    return cnt


N = int(input())
st = input()

X = [0 for _ in range(ALPHABETS)]
Y = [0 for _ in range(ALPHABETS)]

root_a = ord('a')
for c in st:
    Y[ord(c)-root_a] += 1
ans = 0
for i in range(len(st)):
    idx = ord(st[i])-root_a
    Y[idx] -= 1
    X[idx] += 1
    ans = max(count(X, Y), ans)
print(ans)
