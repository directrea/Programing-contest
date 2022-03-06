import io
import sys
_INPUT = """\
7
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5
"""
sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, key, prev=None, next=None) -> None:
        self.key = key
        self.next = next
        self.prev = prev


class DoublyLinkedList():
    def __init__(self) -> None:
        self.length = 0
        self.top = None
        self.tail = None

    def insert(self, key):
        if self.length:
            top = self.top
            self.top = Node(key, None, self.top)
            top.prev = self.top
            self.length += 1
        else:
            self.top = Node(key)
            self.tail = self.top
            self.length += 1

    def deleteFirst(self):
        node = self.top
        key = self.delete(node.key)
        return key

    def deleteLast(self):
        node = self.tail
        key = self.delete(node.key, "prev")
        return key

    def delete(self, x, From="top"):
        node = self.top if From == "top" else self.tail
        while node != None:
            key = node.key
            if key == x:
                prev = node.prev
                next = node.next
                if prev:
                    prev.next = next
                else:
                    self.top = node.next
                if next:
                    next.prev = prev
                else:
                    self.tail = node.prev
                del node
                self.length -= 1
                return key
            node = node.next if From == "top" else node.prev

    def print(self):
        keys = []
        node = self.top
        while node != None:
            keys.append(node.key)
            node = node.next
        print(*keys)


dll = DoublyLinkedList()


def Order(order, key=None):
    # print("%s %s" % (order, key))
    if order == "insert":
        dll.insert(key)
    elif order == "delete":
        dll.delete(key)
    elif order == "deleteFirst":
        dll.deleteFirst()
    elif order == "deleteLast":
        dll.deleteLast()


n = int(input())
for _ in range(n):
    Order(*list(input().split()))

dll.print()
