import io
import sys

_INPUT = """\
18
insert 8
insert 2
insert 3
insert 7
insert 22
insert 1
find 1
find 2
find 3
find 4
find 5
find 6
find 7
find 8
print
delete 3
delete 7
print
"""
# sys.stdin = io.StringIO(_INPUT)


class Node():

    def __init__(self, key, parent=None) -> None:
        self.key = key
        self.parent = parent
        self.left = None
        self.right = None


class BinaryTree():

    def __init__(self):
        self.T = None
        self.len = 0

    def insert(self, key):
        if self.len == 0:
            self.T = Node(key)
            self.len += 1
        else:
            node = self.T
            while True:
                if key < node.key:
                    if node.left == None:
                        new_node = Node(key, node)
                        node.left = new_node
                        self.len += 1
                        return
                    else:
                        node = node.left
                else:
                    if node.right == None:
                        new_node = Node(key, node)
                        node.right = new_node
                        self.len += 1
                        return
                    else:
                        node = node.right

    def find(self, key):
        node = self.T
        if node == None:
            return None
        while True:
            if key == node.key:
                return node
            elif key < node.key:
                if node.left != None:
                    node = node.left
                else:
                    return None
            else:
                if node.right != None:
                    node = node.right
                else:
                    return None

    def cnt_child(self, node):
        cnt_child = 0
        left = node.left
        right = node.right
        if left != None:
            cnt_child += 1
        if right != None:
            cnt_child += 1
        return cnt_child

    def delete(self, key, node=None):
        if node:
            pass
        else:
            node = self.find(key)
        if node:
            parent = node.parent
            cnt_child = self.cnt_child(node)
            if cnt_child == 2:
                next_node = self.next_inOrder(node.right)
                node.key = next_node.key
                self.delete(0, next_node)
            elif cnt_child == 1:
                child = None
                if node.left:
                    child = node.left
                else:
                    child = node.right
                if child.key < parent.key:
                    parent.left = child
                    child.parent = parent
                else:
                    parent.right = child
                    child.parent = parent
            elif cnt_child == 0:
                if parent and node.key < parent.key:
                    parent.left = None
                else:
                    parent.right = None

    def next_inOrder(self, root):
        if root.left != None:
            return self.next_inOrder(root.left)
        else:
            return root

    def inOrder(self, root=None):
        if root == None:
            root = self.T
        if root.left != None:
            self.inOrder(root.left)
        print("", root.key, end="")
        if root.right != None:
            self.inOrder(root.right)

    def preOrder(self, root=None):
        if root == None:
            root = self.T
        print("", root.key, end="")
        if root.left != None:
            self.preOrder(root.left)
        if root.right != None:
            self.preOrder(root.right)

    def print(self):
        self.inOrder()
        print()
        self.preOrder()
        print()


I_L = sys.stdin.read().splitlines()
bt = BinaryTree()
for i in range(len(I_L)):
    if i:
        ls = I_L[i].split()
        if ls[0] == "insert":
            bt.insert(int(ls[1]))
        elif ls[0] == "find":
            ans = "yes" if bt.find(int(ls[1])) else "no"
            print(ans)
        elif ls[0] == "delete":
            bt.delete(int(ls[1]))
        else:
            bt.print()
    else:
        N = int(I_L[i])
