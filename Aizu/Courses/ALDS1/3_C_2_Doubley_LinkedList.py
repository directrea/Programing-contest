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


class SinglyLinkedList():
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
            key = self.top.key
            self.top = self.top.next

            self.length -= 1
            return key
        else:
            return None

    def deleteLast(self):
        if self.length:
            key = self.tail.key
            self.tail = self.tail.before
            self.length -= 1
            return key
        else:
            return None


sll = SinglyLinkedList()
sll.insert(5)
sll.insert(10)
print(sll.deleteLast())
print(sll.deleteLast())
