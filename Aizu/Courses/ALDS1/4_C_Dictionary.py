import io
import sys
_INPUT = """\
6
insert AAA
insert AAC
find AAA
find CCC
insert CCC
find CCC
"""
sys.stdin = io.StringIO(_INPUT)


class LinkedList():
    def __init__(self, key):
        self.key = key
        self.next = None


class Dict():
    def __init__(self) -> None:
        size = 1000
        self.hash_table = [None]*size

    def hash(self, val):
        key = 0
        for v in val:
            key += ord(v)
        return key


n = int(input())
A = []
for _ in range(n):
    A.append(list(map(str, input().split())))

dict = Dict(1000)
for a in A:
    key = dict.hash(a[1])
    print(key)
