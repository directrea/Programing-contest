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
# sys.stdin = io.StringIO(_INPUT)


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
            # print(key)
        return key

    def insert(self, val):
        key = self.hash(val)
        if self.hash_table[key] == None:
            self.hash_table[key] = LinkedList(val)
        else:
            node = self.hash_table[key]
            while node.next != None:
                node = node.next
            node.next = LinkedList(val)

    def find(self, val):
        key = self.hash(val)
        tmp = self.hash_table[key]
        if tmp != None:
            while tmp != None:
                # print(tmp.key)
                if tmp.key == val:
                    print("yes")
                    return
                tmp = tmp.next
            print("no")
            return
        else:
            print("no")


n = int(input())
A = []
for _ in range(n):
    A.append(list(map(str, input().split())))

dict = Dict()
for a in A:
    if a[0] == "insert":
        dict.insert(a[1])
    else:
        dict.find(a[1])
