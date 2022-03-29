import io
import sys

_INPUT = """\
3
abcbdab
bdcaba
abc
abc
abc
bc
"""
sys.stdin = io.StringIO(_INPUT)


class BinaryCreator():

    def binary_brute_force(self, N):
        A = [0] * N
        self.rec(A, N - 1)

    def rec(self, A, i):
        if -1 == i:
            print(A)
            return
        A[i] = 0
        self.rec(A, i - 1)
        A[i] = 1
        self.rec(A, i - 1)


N = int(input())
for _ in range(N):
    X = input()
    Y = input()
    print(X, Y)
