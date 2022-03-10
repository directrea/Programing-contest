import io
import sys
_INPUT = """\
13
insert AAA
insert AAC
insert AGA
insert AGG
insert TTT
find AAA
find CCC
find CCC
insert CCC
find CCC
insert T
find TTT
find T
"""
sys.stdin = io.StringIO(_INPUT)


class Dict():
    def __init__(self) -> None:
        size = 1000
        self.hash_table = [None]*size

    def hash(self, val):
        key = 0
        for v in val:
            key += ord(v)
            # print(key)
        return key % 1000

    def insert(self, val):
        key = self.hash(val)
        if self.hash_table[key] == None:
            self.hash_table[key] = [val]
        else:
            if val in self.hash_table[key]:
                pass
            else:
                self.hash_table[key].append(val)

    def find(self, val):
        key = self.hash(val)
        list = self.hash_table[key]
        if list != None:
            if val in self.hash_table[key]:
                print("yes")
            else:
                print("no")
        else:
            print("no")


n = int(input())

dict = Dict()
for _ in range(n):
    a = list(map(str, input().split()))
    if a[0] == "insert":
        dict.insert(a[1])
    else:
        dict.find(a[1])
# print(dict.hash_table)
