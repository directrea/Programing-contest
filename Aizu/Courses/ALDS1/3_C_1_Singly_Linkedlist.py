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
    def __init__(self, key, next=None) -> None:
        self.key = key
        self.next = next


class SinglyLinkedList():
    def __init__(self) -> None:
        self.length = 0
        self.node = None

    def insert(self, key):
        if self.length:
            self.node = Node(key, self.node)
            self.length += 1
        else:
            self.node = Node(key)
            self.length += 1

    def deleteFirst(self):
        if self.node != None:
            key = self.node.key
            self.node = self.node.next

            self.length -= 1
            return key
        else:
            return None


sll = SinglyLinkedList()
sll.insert(5)
print(id(sll.node))
sll.insert(10)
print(id(sll.node))
print(sll.deleteFirst())
print(sll.deleteFirst())
print(sll.node)
