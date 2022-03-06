import io
import sys
# _INPUT = """\
# 5
# insert 7
# insert 3
# deleteFirst
# deleteLast
# insert 1
# """
# sys.stdin = io.StringIO(_INPUT)


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
        node = self.top
        key = self.delete(node.key)
        return key

    def deleteLast(self):
        node = self.tail
        key = self.delete(node.key, "before")
        return key

    def delete(self, x, From="top"):
        node = self.top if From =="top" else self.tail
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
                self.length -= 1
                return key
            node = node.next if From =="top" else node.before

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
    # dll.print()
dll.print()
