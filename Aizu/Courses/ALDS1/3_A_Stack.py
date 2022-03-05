import io
import sys

_INPUT = """\
1 2 + 3 4 - * 
"""
sys.stdin = io.StringIO(_INPUT)


class Stack():
    def __init__(self, arg_length):
        self.items = [None]*arg_length
        self.head = 0
        self.tail = 0

    def isEmpty(self):
        if self.head == self.tail:
            return True
        else:
            return False

    def isFull(self):
        return self.tail >= len(self.items) - 1

    def push(self, item):
        if self.isFull():
            print("Stack is full.")
            return
        self.tail += 1
        self.items[self.tail] = item

    def pop(self):
        if self.tail == 0:
            return None
        result = self.items[self.tail]
        self.items[self.tail] = None
        self.tail -= 1
        return result


SIZE = 101
S = input().split()
stack = Stack(SIZE)
for s in S:
    if s in ["+", "-", "*"]:
        b = stack.pop()
        a = stack.pop()
        if s == "+":
            stack.push(a+b)
        elif s == "-":
            stack.push(a-b)
        else:
            stack.push(a*b)
    else:
        stack.push(int(s))

print(stack.items[1])
