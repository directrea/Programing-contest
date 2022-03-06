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
    def __init__(self, key, before=None, next=None) -> None:
        self.key = key
        self.next = next
        self.before = before


class DoublyLinkedList():
    def __init__(self) -> None:
        self.length = 0
        self.top = None
        self.tail = None

    def insert(self, key):
        if self.length:
            top = self.top
            self.top = Node(key, None, self.top)
            top.before = self.top
            self.length += 1
        else:
            self.top = Node(key)
            self.tail = self.top
            self.length += 1

    def deleteFirst(self):
        if self.length:
            node = self.top
            key = node.key
            self.top = node.next
            self.length -= 1
            return key
        else:
            return None

    def deleteLast(self):
        if self.length:
            node = self.tail
            key = node.key
            self.tail = node.before
            self.length -= 1
            return key
        else:
            return None

    def delete(self, x):
        node = self.top
        while node != None:
            key = node.key
            if key == x:
                before = node.before
                next = node.next
                if before:
                    before.next = next
                else:
                    self.top = node.next
                if next:
                    next.before = before
                else:
                    self.tail = node.before
                del node
                return key
            node = node.next

    def print(self):
        keys = []
        node = self.top
        while node != None:
            keys.append(node.key)
            node = node.next
        print(*keys)


dll = DoublyLinkedList()


def Order(order, key=None):

    if order == "insert":
        dll.insert(key)
    elif order == "delete":
        dll.delete(3)
    elif order == "deleteFirst":
        dll.deleteFirst()
    elif order == "deleteLast":
        dll.deleteLast()


n = int(input())
for _ in range(n):
    Order(*list(input().split()))
    dll.print()
dll.print()
