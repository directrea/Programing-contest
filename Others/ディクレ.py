import io
import sys
import math

# _INPUT = """\
# 6 2 10
# """
# sys.stdin = io.StringIO(_INPUT)


def isPrime(n):  # 素数判定をする関数

    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def isCoPrime(a, b):  # aとbが互いに素であるかを判定する関数

    if a < b:
        num = a
    else:
        num = b
    if a % 2 == 0 and b % 2 == 0:
        return False
    for i in range(3, num+1, 2):
        if a % i == 0 and b % i == 0:
            return False
    return True


try:
    vec = list(map(int, input().split()))
    # 標準入力が3個 かつ aとbが互いに素である場合実行
    if len(vec) == 3 and isCoPrime(vec[0], vec[1]):
        cnt = 0
        idx = 0
        while True:
            #an + b
            num = vec[0] * idx + vec[1]
            if isPrime(num):
                cnt += 1
                if cnt == vec[2] + 1:
                    print(num)
                    break
            idx += 1
    else:
        print(-1)
except:
    print(-1)
