import io
import sys
_INPUT = """\
3
3
2
1
"""
sys.stdin = io.StringIO(_INPUT)


class shell:
    def __init__(self):
        self.cnt = 0
        # self.G = []
        # self.m = 0

    def insertionSort(self, A, n, g):
        for i in range(g, n):
            v = A[i]
            j = i-g
            while j >= 0 and A[j] > v:
                A[j+g] = A[j]
                j = j-g
                self.cnt += 1
            A[j+g] = v

    def shellSort(self, A, n):
        self.cnt = 0
        self.G = [4, 3, 1]
        self.m = len(self.G)
        for g in self.G:
            self.insertionSort(A, n, g)


n = int(input())
A = []
for _ in range(n):
    A.append(int(input()))

s = shell()
s.shellSort(A, n)
print(s.m)
print(*s.G)
print(s.cnt)
print(*A,sep='\n')
