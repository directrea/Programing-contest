import io
import sys
_INPUT = """\
8
insert 30
insert 88
insert 12
insert 1
insert 20
insert 17
insert 25
print
"""
# sys.stdin = io.StringIO(_INPUT)


class Node():
    def __init__(self, key, parent=None) -> None:
        self.key = key
        self.parent = parent
        self.left = None
        self.right = None


def insert(key, root):
    node = root
    while True:
        if key < node.key:
            if node.left == None:
                new_node = Node(key, node)
                node.left = new_node
                return
            else:
                node = node.left
        else:
            if node.right == None:
                new_node = Node(key, node)
                node.right = new_node
                return
            else:
                node = node.right


def inOrder(root):
    if root.left != None:
        inOrder(root.left)
    print("", root.key, end="")
    if root.right != None:
        inOrder(root.right)


def preOrder(root):
    print("", root.key, end="")
    if root.left != None:
        preOrder(root.left)
    if root.right != None:
        preOrder(root.right)


I_L = sys.stdin.read().splitlines()
root_flag = False
for i in range(len(I_L)):
    if i:
        ls = I_L[i].split()
        if ls[0] == "insert":
            if root_flag:
                insert(int(ls[1]), root)
            else:
                root = Node(int(ls[1]))
                root_flag = True
        else:
            inOrder(root)
            print()
            preOrder(root)
            print()
    else:
        N = int(I_L[i])
